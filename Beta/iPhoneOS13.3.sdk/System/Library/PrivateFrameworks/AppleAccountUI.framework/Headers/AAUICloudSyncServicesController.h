/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class AAAutoAccountVerifier, ACAccount, ACAccountStore, MFAccountValidator, NSMutableArray, NSMutableDictionary;

@interface AAUICloudSyncServicesController : NSObject

{
    ACAccountStore *_accountStore;
    ACAccount *_account;
    NSMutableDictionary *_queuedDataclassActions;
    NSMutableArray *_dataclassesRequiringMergeDecision;
    NSMutableDictionary *_queuedDataclassStates;
    _Bool _didUserConsentToMerge;
    _Bool _isVerifyingExistingEmailAccount;
    MFAccountValidator *_validator;
    AAAutoAccountVerifier *_verifier;
    CDUnknownBlockType _handler;
}

+ (id)_domainFromAddress:(id)arg1;
+ (id)_usernameFromAddress:(id)arg1;

- (id)init;
- (id)_account;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(_Bool)arg3;
- (void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2;
- (void)_addMailAccount:(id)arg1;
- (void)setCloudServicesEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDeviceLocatorEnabled:(_Bool)arg1;
- (void)setBackupEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)completeEnablingCloudServicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)verifyAccountWithAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_validateMailAccount:(id)arg1;

@end
