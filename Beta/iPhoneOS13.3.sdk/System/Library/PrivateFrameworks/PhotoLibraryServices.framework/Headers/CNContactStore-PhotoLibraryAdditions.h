/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Contacts/CNContactStore.h>

@interface CNContactStore (PhotoLibraryAdditions)

- (id)contactsMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsMatchingPhoneNumber:(id)arg1 keysToFetch:(id)arg2;

@end
