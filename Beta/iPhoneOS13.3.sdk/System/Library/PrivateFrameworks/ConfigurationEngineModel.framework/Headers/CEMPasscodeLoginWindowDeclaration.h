/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMPasscodeLoginWindowDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadSHOWFULLNAME;
    NSNumber *_payloadHideLocalUsers;
    NSNumber *_payloadIncludeNetworkUser;
    NSNumber *_payloadHideAdminUsers;
    NSNumber *_payloadSHOWOTHERUSERSMANAGED;
    NSString *_payloadAdminHostInfo;
    NSArray *_payloadAllowList;
    NSArray *_payloadDenyList;
    NSNumber *_payloadHideMobileAccounts;
    NSNumber *_payloadShutDownDisabled;
    NSNumber *_payloadRestartDisabled;
    NSNumber *_payloadSleepDisabled;
    NSNumber *_payloadDisableConsoleAccess;
    NSString *_payloadLoginwindowText;
    NSNumber *_payloadShutDownDisabledWhileLoggedIn;
    NSNumber *_payloadRestartDisabledWhileLoggedIn;
    NSNumber *_payloadPowerOffDisabledWhileLoggedIn;
    NSNumber *_payloadLogOutDisabledWhileLoggedIn;
    NSNumber *_payloadDisableScreenLockImmediate;
}

@property (copy, nonatomic) NSNumber *payloadSHOWFULLNAME;
@property (copy, nonatomic) NSNumber *payloadHideLocalUsers;
@property (copy, nonatomic) NSNumber *payloadIncludeNetworkUser;
@property (copy, nonatomic) NSNumber *payloadHideAdminUsers;
@property (copy, nonatomic) NSNumber *payloadSHOWOTHERUSERSMANAGED;
@property (copy, nonatomic) NSString *payloadAdminHostInfo;
@property (copy, nonatomic) NSArray *payloadAllowList;
@property (copy, nonatomic) NSArray *payloadDenyList;
@property (copy, nonatomic) NSNumber *payloadHideMobileAccounts;
@property (copy, nonatomic) NSNumber *payloadShutDownDisabled;
@property (copy, nonatomic) NSNumber *payloadRestartDisabled;
@property (copy, nonatomic) NSNumber *payloadSleepDisabled;
@property (copy, nonatomic) NSNumber *payloadDisableConsoleAccess;
@property (copy, nonatomic) NSString *payloadLoginwindowText;
@property (copy, nonatomic) NSNumber *payloadShutDownDisabledWhileLoggedIn;
@property (copy, nonatomic) NSNumber *payloadRestartDisabledWhileLoggedIn;
@property (copy, nonatomic) NSNumber *payloadPowerOffDisabledWhileLoggedIn;
@property (copy, nonatomic) NSNumber *payloadLogOutDisabledWhileLoggedIn;
@property (copy, nonatomic) NSNumber *payloadDisableScreenLockImmediate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withSHOWFULLNAME:(id)arg2 withHideLocalUsers:(id)arg3 withIncludeNetworkUser:(id)arg4 withHideAdminUsers:(id)arg5 withSHOWOTHERUSERSMANAGED:(id)arg6 withAdminHostInfo:(id)arg7 withAllowList:(id)arg8 withDenyList:(id)arg9 withHideMobileAccounts:(id)arg10 withShutDownDisabled:(id)arg11 withRestartDisabled:(id)arg12 withSleepDisabled:(id)arg13 withDisableConsoleAccess:(id)arg14 withLoginwindowText:(id)arg15 withShutDownDisabledWhileLoggedIn:(id)arg16 withRestartDisabledWhileLoggedIn:(id)arg17 withPowerOffDisabledWhileLoggedIn:(id)arg18 withLogOutDisabledWhileLoggedIn:(id)arg19 withDisableScreenLockImmediate:(id)arg20;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
