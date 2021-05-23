/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContactNameOrderImpl.h>

__attribute__((visibility("hidden")))
@interface CNFamilyNameFirstNameOrder : CNContactNameOrderImpl

- (long long)nameOrder;
- (id)phoneticNameProperties;
- (id)nameProperties;
- (id)sortingNameProperties;

@end
