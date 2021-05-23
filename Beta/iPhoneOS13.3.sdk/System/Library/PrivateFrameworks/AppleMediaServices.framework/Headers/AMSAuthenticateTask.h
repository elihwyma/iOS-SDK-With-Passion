/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSAuthenticateOptions, NSNumber, NSString, NSUUID;

@interface AMSAuthenticateTask : AMSTask

{
    AMSAuthenticateOptions *_options;
    NSString *_password;
    NSString *_multiUserToken;
    NSString *_rawPassword;
    NSString *_altDSID;
    NSNumber *_DSID;
    NSUUID *_homeIdentifier;
    NSString *_username;
    ACAccount *_authenticatedAccount;
}

@property (retain, nonatomic) ACAccount *authenticatedAccount;
@property (nonatomic, readonly) AMSAuthenticateOptions *options;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *multiUserToken;
@property (retain, nonatomic) NSString *rawPassword;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSUUID *homeIdentifier;
@property (retain, nonatomic) NSString *username;

- (id)init;
- (id)performAuthentication;
- (id)initWithRequest:(id)arg1;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)_accountForAuthentication;
- (id)_attemptMultiUserTokenAuthenticationForAccount:(id)arg1;
- (id)_attemptPasswordReuseAuthenticationForAccount:(id)arg1;
- (id)_updateAccountWithAuthKit:(id)arg1 error:(id *)arg2;
- (id)_performAuthenticationUsingAccount:(id)arg1 credentialSource:(unsigned long long)arg2 error:(id *)arg3;
- (id)_accountStoreForAuthentication;
- (void)_updateAccountWithProvidedInformation:(id)arg1;
- (id)_createVerifyCredentialOptionsWithCredentialSource:(unsigned long long)arg1;
- (id)homeID;
- (id)homeUserID;
- (void)setHomeID:(id)arg1;
- (void)setHomeUserID:(id)arg1;

@end
