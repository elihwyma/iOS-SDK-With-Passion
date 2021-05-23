/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class CNSocialProfile;

__attribute__((visibility("hidden")))
@interface CNSocialProfileContactPredicate : CNPredicate

{
    CNSocialProfile *_socialProfile;
}

@property (copy, nonatomic, readonly) CNSocialProfile *socialProfile;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSocialProfile:(id)arg1;

@end
