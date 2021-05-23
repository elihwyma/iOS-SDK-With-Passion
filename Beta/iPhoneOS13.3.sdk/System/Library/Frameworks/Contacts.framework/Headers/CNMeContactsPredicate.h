/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

__attribute__((visibility("hidden")))
@interface CNMeContactsPredicate : CNPredicate

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)contactsFromDonationStore:(id)arg1;

@end
