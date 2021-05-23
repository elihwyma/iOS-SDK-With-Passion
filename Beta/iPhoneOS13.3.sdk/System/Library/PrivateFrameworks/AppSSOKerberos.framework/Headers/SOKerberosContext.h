/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class ASAuthorizationProviderExtensionAuthorizationRequest, NSData, NSDate, NSString, NSUUID, SOKerberosExtensionData, SOKerberosExtensionUserData, SOKerberosRealmSettings, SONetworkIdentity, SORealmSettingManager, SOSiteCode;

@protocol OS_dispatch_group;

@interface SOKerberosContext : NSObject

{
    _Bool _userNameIsReadOnly;
    _Bool _returnCredentialOnly;
    _Bool _credsCameFromKeychain;
    _Bool _requestCancelled;
    _Bool _attemptedToGetCredsFromKeychain;
    _Bool _forceLoginViewController;
    _Bool _requestStarted;
    NSString *_userPrincipalName;
    NSString *_userName;
    NSString *_realm;
    SOKerberosExtensionData *_extensionData;
    SOKerberosExtensionUserData *_extensionUserData;
    NSString *_hostName;
    NSString *_servicePrincipalName;
    NSString *_serviceName;
    NSString *_password;
    NSString *_changedPassword;
    NSUUID *_credentialUUID;
    NSData *_certificateSerialNumber;
    NSData *_certificateIssuer;
    NSString *_certificateTokenID;
    SOSiteCode *_siteCode;
    NSString *_cacheName;
    NSString *_callerBundleIdentifier;
    NSDate *_loginTimeStamp;
    NSObject<OS_dispatch_group> *_siteCodeGroup;
    SONetworkIdentity *_networkIdentity;
    ASAuthorizationProviderExtensionAuthorizationRequest *_authorizationRequest;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    SORealmSettingManager *_settingsManager;
}

@property (retain, nonatomic) ASAuthorizationProviderExtensionAuthorizationRequest *authorizationRequest;
@property (retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain, nonatomic) SORealmSettingManager *settingsManager;
@property (nonatomic) _Bool requestStarted;
@property (nonatomic) _Bool requestCancelled;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) SOKerberosExtensionData *extensionData;
@property (retain, nonatomic) SOKerberosExtensionUserData *extensionUserData;
@property (retain, nonatomic) NSString *hostName;
@property (retain, nonatomic) NSString *servicePrincipalName;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *changedPassword;
@property (nonatomic) _Bool userNameIsReadOnly;
@property (retain, nonatomic) NSString *userPrincipalName;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSUUID *credentialUUID;
@property (retain, nonatomic) NSData *certificateSerialNumber;
@property (retain, nonatomic) NSData *certificateIssuer;
@property (retain, nonatomic) NSString *certificateTokenID;
@property (retain, nonatomic) SOSiteCode *siteCode;
@property (retain, nonatomic) NSString *cacheName;
@property (nonatomic) _Bool returnCredentialOnly;
@property (nonatomic, readonly) SOKerberosRealmSettings *currentSettings;
@property (retain, nonatomic) NSString *callerBundleIdentifier;
@property (nonatomic) _Bool credsCameFromKeychain;
@property (nonatomic) _Bool attemptedToGetCredsFromKeychain;
@property (nonatomic) _Bool forceLoginViewController;
@property (retain, nonatomic) NSDate *loginTimeStamp;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *siteCodeGroup;
@property (retain, nonatomic) SONetworkIdentity *networkIdentity;

- (void)cancelRequest;
- (void)cancelRequest:(_Bool)arg1;
- (void)waitForCompletion;
- (void)startRequest;
- (void)completeRequestWithError:(id)arg1;
- (void)presentAuthorizationViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)completeRequest;
- (void)completeRequestWithHTTPResponse:(id)arg1 httpBody:(id)arg2;
- (id)initWithRequest:(id)arg1 extensionData:(id)arg2 settingsManager:(id)arg3;
- (void)setUserPrincipalNameAfterAuth:(id)arg1;
- (void)completeRequestWithHeaders:(id)arg1;
- (void)completeRequestWithHTTPResponseHeaders:(id)arg1;
- (void)completeRequestWithDoNotHandle;

@end
