/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class CNPostalAddress;

__attribute__((visibility("hidden")))
@interface CNPostalAddressContactPredicate : CNPredicate

{
    CNPostalAddress *_postalAddress;
}

@property (copy, nonatomic, readonly) CNPostalAddress *postalAddress;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;

@end
