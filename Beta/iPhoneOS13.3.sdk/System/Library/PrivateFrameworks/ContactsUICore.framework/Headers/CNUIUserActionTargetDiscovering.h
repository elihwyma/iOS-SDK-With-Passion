/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNUIUserActionTargetDiscoveryCache, NSString;

@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager;

@interface CNUIUserActionTargetDiscovering : NSObject

{
    id <CNLSApplicationWorkspace> _applicationWorkspace;
    id <CNTUCallProviderManager> _callProviderManager;
    id <CNMCProfileConnection> _profileConnection;
    id <CNCapabilities> _capabilities;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNSchedulerProvider> _highLatencySchedulerProvider;
    CNUIUserActionTargetDiscoveryCache *_cache;
}

@property (nonatomic, readonly) id <CNLSApplicationWorkspace> applicationWorkspace;
@property (nonatomic, readonly) id <CNTUCallProviderManager> callProviderManager;
@property (nonatomic, readonly) id <CNMCProfileConnection> profileConnection;
@property (nonatomic, readonly) id <CNCapabilities> capabilities;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNSchedulerProvider> highLatencySchedulerProvider;
@property (nonatomic, readonly) CNUIUserActionTargetDiscoveryCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)os_log;
+ (_Bool)isSkypeAvailableWithEnvironment:(id)arg1;
+ (id)applicationProxiesForIntent:(id)arg1 applicationWorkspace:(id)arg2;

- (void)dealloc;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)targetForTextWithMessages;
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 profileConnection:(id)arg3 schedulerProvider:(id)arg4 highLatencySchedulerProvider:(id)arg5 capabilities:(id)arg6;
- (id)observableForTargetsChangedForActionType:(id)arg1 schedulerProvider:(id)arg2;
- (id)targetsForActionType:(id)arg1;
- (id)thirdPartyTargetsForBundleIdentifier:(id)arg1;
- (id)_targetsForActionType:(id)arg1;
- (void)resetTargetsForActionType:(id)arg1;
- (id)targetsForText;
- (id)targetsForVoice;
- (id)targetsForVideo;
- (id)targetsForEmail;
- (id)targetsForPay;
- (id)targetsForDirections;
- (id)targetForVoiceWithTelephony;
- (id)targetForVoiceWithFaceTime;
- (id)targetForVoiceWithSkype;
- (id)targetsForVoiceWithThirdPartyCallProviders;
- (id)targetForVideoWithFaceTime;
- (id)targetForVideoWithSkype;
- (id)targetsForVideoWithThirdPartyCallProviders;
- (id)targetForTextWithSkype;
- (id)targetsForSendMessageIntent;
- (id)targetsForStartAudioCallIntent;
- (id)targetsForStartVideoCallIntent;

@end
