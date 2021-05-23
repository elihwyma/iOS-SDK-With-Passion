/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@interface CNDeduplication : NSObject

+ (id)os_log;

- (void)deduplicateContainer:(id)arg1 store:(id)arg2;
- (void)deduplicateKeeping:(id)arg1 deleting:(id)arg2 store:(id)arg3;
- (id)contactsForGroup:(id)arg1 store:(id)arg2;
- (id)identifierSetFromContacts:(id)arg1;
- (void)addContactsForIds:(id)arg1 toGroup:(id)arg2 usingRequest:(id)arg3 store:(id)arg4;
- (void)deduplicateAllContainers:(id)arg1;

@end
