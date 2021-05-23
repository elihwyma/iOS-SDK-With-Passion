/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString, VSAccountStore, VSOptional;

@interface VSAccount : NSObject

{
    VSAccountStore *_accountStore;
    NSString *_accountTypeDescription;
    NSString *_accountDescription;
    VSOptional *_optionalIdentityProviderDisplayName;
    VSOptional *_identityProviderID;
    NSString *_username;
    NSString *_preferredAppID;
    VSOptional *_authenticationToken;
}

@property (retain, nonatomic) VSOptional *keychainItem;
@property (weak, nonatomic) VSAccountStore *accountStore;
@property (copy, nonatomic) NSString *accountTypeDescription;
@property (copy, nonatomic) NSString *accountDescription;
@property (retain, nonatomic) VSOptional *optionalIdentityProviderDisplayName;
@property (nonatomic, readonly) NSString *identityProviderDisplayName;
@property (retain, nonatomic) VSOptional *identityProviderID;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *preferredAppID;
@property (retain, nonatomic) VSOptional *authenticationToken;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
