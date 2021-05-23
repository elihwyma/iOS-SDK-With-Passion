/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSABUtilities : NSObject

{
    void *_addressBook;
}

- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;
- (id)allAccountIdentifiers;
- (id)filterPeople:(id)arg1 matchingAccountIdentifiers:(id)arg2;

@end
