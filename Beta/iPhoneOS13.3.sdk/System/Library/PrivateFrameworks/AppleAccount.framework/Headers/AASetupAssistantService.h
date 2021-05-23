/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class AASigningSession, ACAccount, NSDate, NSOperationQueue, NSString;

@interface AASetupAssistantService : NSObject

{
    NSOperationQueue *_requesterQueue;
    NSString *_appleID;
    NSString *_password;
    NSString *_emailChoice;
    ACAccount *_account;
    struct OpaqueCFHTTPCookieStorage *_cookieStorage;
    AASigningSession *_signingSession;
    NSDate *_signingSessionCreationDate;
}

@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *emailChoice;

+ (id)urlConfiguration;
+ (void)resetURLConfiguration;

- (id)init;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)createAppleIDWithParameters:(id)arg1 handlerWithResponse:(CDUnknownBlockType)arg2;
- (id)_signingSession;
- (void)upgradeiCloudTermsIfNecessaryWithCustomHeaders:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (void)downloadURLConfiguration:(CDUnknownBlockType)arg1;
- (void)authenticateWithHandler:(CDUnknownBlockType)arg1;
- (void)createAppleIDWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateAppleIDWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setupDelegateAccountsWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loginDelegatesWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)upgradeiCloudTermsIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)shouldPresentUpgradeFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)_doHSADeviceProvisioningWithDSID:(id)arg1 data:(id)arg2;
- (void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg1 data:(id)arg2;
- (void)_doHSADeviceReprovisioningWithDSID:(id)arg1;

@end
