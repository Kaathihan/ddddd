#ifndef ADVERTISE_H
#define ADVERTISE_H

#include <iostream>
#include <string>
#include "user.h"
#include "item.h"
#include "transaction.h"
#include "currentitemsfilemanager.h"

class Advertise : public Transaction {
public:
    // Constructor
    Advertise(User* user, CurrentItemsFileManager* itemManager, CurrentTransactionItemsFileManager* transactionItemsManager);


    // Execute the advertise transaction
    bool execute();
};

#endif
