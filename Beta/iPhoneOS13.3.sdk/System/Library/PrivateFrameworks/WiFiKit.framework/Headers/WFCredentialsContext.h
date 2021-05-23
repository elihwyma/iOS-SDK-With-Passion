/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

#import <WiFiKit/Swift-Protocol.h>

@class NSArray, NSString, SFPasswordSharingService, UIViewController, WFNetworkProfile, WFNetworkScanRecord;

@protocol WFNetworkView;

@interface WFCredentialsContext : NSObject <Swift>

{
    _Bool _enterprise;
    _Bool _weakSecurity;
    _Bool _passwordSharingSupported;
    _Bool _shouldReactivatePasswordSharing;
    UIViewController<WFNetworkView> *_provider;
    long long _availableAuthTraits;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _cancellationHandler;
    WFNetworkProfile *_profile;
    WFNetworkScanRecord *_network;
    long long _requestedFields;
    CDUnknownBlockType _providerCallback;
    NSArray *_availableTLSIdentities;
    SFPasswordSharingService *_passwordSharingService;
}

@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic) long long requestedFields;
@property (copy, nonatomic) CDUnknownBlockType providerCallback;
@property (retain, nonatomic) NSArray *availableTLSIdentities;
@property (nonatomic, getter=isEnterprise) _Bool enterprise;
@property (retain, nonatomic) SFPasswordSharingService *passwordSharingService;
@property (nonatomic) _Bool shouldReactivatePasswordSharing;
@property (nonatomic, getter=isWeakSecurity) _Bool weakSecurity;
@property (nonatomic) long long availableAuthTraits;
@property (nonatomic, getter=isPasswordSharingSupported) _Bool passwordSharingSupported;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType cancellationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *username;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (nonatomic, readonly) _Bool needsDismissal;

- (void)dealloc;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (long long)securityMode;
- (void)service:(id)arg1 receivedNetworkInfo:(id)arg2;
- (_Bool)service:(id)arg1 shouldPromptForNetwork:(id)arg2;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2;
- (void)gatherCredentials:(CDUnknownBlockType)arg1;
- (void)finishWithError:(id)arg1 forNetwork:(id)arg2 profile:(id)arg3;
- (id)initWithNetwork:(id)arg1 profile:(id)arg2 authTraits:(long long)arg3;
- (_Bool)validateCredentials;
- (_Bool)validatePassword;
- (void)activatePasswordSharing;
- (void)deactivatePasswordSharingWithReactivation:(_Bool)arg1;
- (void)launchSettings;

@end
