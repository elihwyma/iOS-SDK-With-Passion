/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class DMFApplicationPolicyMonitor, IMCommLimitsPolicyCache, NSMutableDictionary, NSSet, NSString, TUCallProviderManager;

@protocol OS_dispatch_queue;

@interface IMWhitelistController : NSObject

{
    TUCallProviderManager *_callProviderManager;
    NSObject<OS_dispatch_queue> *_screenTimeDispatchQueue;
    NSSet *_emergencyNumbersSet;
    IMCommLimitsPolicyCache *_policyCache;
    NSMutableDictionary *_bundleIDPolicyMap;
    DMFApplicationPolicyMonitor *_appPolicyMonitor;
}

@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *screenTimeDispatchQueue;
@property (retain, nonatomic) NSSet *emergencyNumbersSet;
@property (retain, nonatomic) IMCommLimitsPolicyCache *policyCache;
@property (retain, nonatomic) NSMutableDictionary *bundleIDPolicyMap;
@property (retain, nonatomic) DMFApplicationPolicyMonitor *appPolicyMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)isContactLimitsFeatureEnabled;
+ (id)STConversation;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)providersChangedForProviderManager:(id)arg1;
- (_Bool)allowedToShowConversationWithHandleIDs:(id)arg1 sync:(_Bool)arg2 context:(id *)arg3;
- (id)conversationContextForChat:(id)arg1;
- (_Bool)allowedToShowAppExtensionWithBundleIdentifier:(id)arg1;
- (_Bool)allowedToShowConversationForChat:(id)arg1 sync:(_Bool)arg2;
- (void)reloadEmergencyNumbersSet;
- (void)fetchScreenTimeAppPolicy;
- (void)initializeContext:(id)arg1 participantIDsHash:(id)arg2;
- (void)_addObserversToChat:(id)arg1;
- (void)_participantsForChatDidChange:(id)arg1;
- (void)registerForScreenTimeNotifications;

@end
