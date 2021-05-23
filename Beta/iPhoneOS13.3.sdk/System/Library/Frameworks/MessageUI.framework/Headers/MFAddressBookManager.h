/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface MFAddressBookManager : NSObject

{
    void *_addressBook;
    struct os_unfair_lock_s _lock;
    NSHashTable *_clients;
}

+ (id)sharedManager;
+ (_Bool)isAuthorizedToUseAddressBook;

- (id)init;
- (void)dealloc;
- (void)addClient:(id)arg1;
- (void)removeClient:(id)arg1;
- (void *)addressBook;
- (id)_clientsArray;
- (void)_handleAddressBookChangeNotification;
- (void)_handleAddressBookPrefsChangeNotification;

@end
