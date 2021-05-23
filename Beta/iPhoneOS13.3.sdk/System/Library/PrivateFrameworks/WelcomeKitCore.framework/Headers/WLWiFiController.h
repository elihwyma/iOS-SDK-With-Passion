/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class WLNETRBClient, WLWiFiManager, WLWiFiNetwork;

@protocol OS_dispatch_queue;

@interface WLWiFiController : NSObject

{
    NSObject<OS_dispatch_queue> *_requestQueue;
    unsigned long long _lastRequestID;
    WLWiFiManager *_wifiManager;
    _Bool _didConsultPreferencesForStartedNetwork;
    WLWiFiNetwork *_startedNetwork;
    WLNETRBClient *_netrbClient;
}

@property (nonatomic, readonly) _Bool hasSoftAPCapability;

+ (id)sharedInstance;

- (id)init;
- (id)_initWithWiFiManager:(id)arg1 netrbClient:(id)arg2;
- (unsigned long long)_newRequestID;
- (void)_ensureStartedNetworkReflectsPreferences;
- (void)_enableSoftAPWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_disableSoftAPWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stopWiFiWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startWiFiWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_networkRecordFromSSID:(id)arg1 password:(id)arg2 channel:(id)arg3;
- (void)enableSoftAPWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)disableSoftAPWithCompletion:(CDUnknownBlockType)arg1;
- (id)_startedNetwork;

@end
