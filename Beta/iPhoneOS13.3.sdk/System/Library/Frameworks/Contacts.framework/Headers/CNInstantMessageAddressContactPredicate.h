/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class CNInstantMessageAddress;

__attribute__((visibility("hidden")))
@interface CNInstantMessageAddressContactPredicate : CNPredicate

{
    CNInstantMessageAddress *_imAddress;
}

@property (copy, nonatomic, readonly) CNInstantMessageAddress *imAddress;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstantMessageAddress:(id)arg1;

@end
