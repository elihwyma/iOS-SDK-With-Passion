/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface CKAccountOverrideInfo : NSObject

{
    _Bool _isUnitTestingAccount;
    _Bool _accountWantsPushRegistration;
    _Bool _accountWantsFlowControl;
    NSString *_accountID;
    NSDictionary *_accountPropertyOverrides;
    NSDictionary *_overridesByDataclass;
    NSString *_email;
    NSString *_password;
    NSString *_secondEmail;
}

@property (copy, nonatomic) NSString *accountID;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *password;
@property (copy, nonatomic) NSString *secondEmail;
@property (nonatomic) _Bool isUnitTestingAccount;
@property (nonatomic) _Bool accountWantsPushRegistration;
@property (nonatomic) _Bool accountWantsFlowControl;
@property (copy, nonatomic) NSDictionary *accountPropertyOverrides;
@property (copy, nonatomic) NSDictionary *overridesByDataclass;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountID:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithEmail:(id)arg1 password:(id)arg2;
- (id)initAnonymousAccount;

@end
