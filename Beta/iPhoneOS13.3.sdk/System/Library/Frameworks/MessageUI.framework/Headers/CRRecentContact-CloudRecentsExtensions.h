/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <CoreRecents/CRRecentContact.h>

@interface CRRecentContact (CloudRecentsExtensions)

- (int)property;
- (void *)person;
- (int)matchedIdentifier;
- (void *)existingPerson;
- (id)_addressBookContext;
- (void)_setAddressBookContext:(id)arg1;

@end
