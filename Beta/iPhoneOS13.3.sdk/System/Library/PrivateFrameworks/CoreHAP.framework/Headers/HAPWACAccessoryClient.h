/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class EasyConfigDevice, HAPAccessoryServer, HAPWACAccessory, HAPWACAccessoryBrowser, HMFUnfairLock, NSDate, NSDictionary, NSMutableSet, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HAPWACAccessoryClient : HMFObject

{
    unsigned long long _state;
    HMFUnfairLock *_lock;
    HAPWACAccessory *_hapWACAccessory;
    NSMutableSet *_compatible2Pt4Networks;
    NSDictionary *_currentNetworkInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _completionHandler;
    EasyConfigDevice *_ezConfigDevice;
    HAPAccessoryServer *_server;
    HAPWACAccessoryBrowser *_brower;
    double _joinLatency;
    double _restoreLatency;
    double _configurationLatency;
    double _preConfigDiscoveryTime;
    double _postConfigDiscoveryTime;
    double _setupCodeDelay;
    NSDate *_setupCodeRequestTime;
    unsigned long long _retryCount;
}

@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (nonatomic, readonly) HAPWACAccessory *hapWACAccessory;
@property (nonatomic, readonly) NSMutableSet *compatible2Pt4Networks;
@property (retain, nonatomic) NSDictionary *currentNetworkInfo;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) EasyConfigDevice *ezConfigDevice;
@property (weak, nonatomic, readonly) HAPAccessoryServer *server;
@property (weak, nonatomic, readonly) HAPWACAccessoryBrowser *brower;
@property (nonatomic) double joinLatency;
@property (nonatomic) double restoreLatency;
@property (nonatomic) double configurationLatency;
@property (nonatomic) double preConfigDiscoveryTime;
@property (nonatomic) double postConfigDiscoveryTime;
@property (nonatomic) double setupCodeDelay;
@property (retain, nonatomic) NSDate *setupCodeRequestTime;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)setState:(unsigned long long)arg1;
- (void)dumpStatsWithError:(id)arg1;
- (id)initWithWACAccessory:(id)arg1 server:(id)arg2 browser:(id)arg3 compatible2Pt4Networks:(id)arg4;
- (id)joinAccessoryNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (id)performEasyConfigWithParingPrompt:(CDUnknownFunctionPointerType)arg1 performPairSetup:(_Bool)arg2 isSplit:(_Bool)arg3 wacWiFiConfig:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_joinAccessoryNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (id)continuePairingWithSetupCode:(id)arg1;
- (void)stopEasyConfig;
- (id)restoreNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (void)_continuePairingWithSetupCode:(id)arg1;
- (void)_callJoinCompletion:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)_restoreNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (void)_joinAccessory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_callRestoreCompletion:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)_performEasyConfigWithParingPrompt:(CDUnknownFunctionPointerType)arg1 performPairSetup:(_Bool)arg2 isSplit:(_Bool)arg3 wacWiFiConfig:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_retoreNetworkAndReportErrorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performPostConfig;
- (void)_joinCompleteWithStatus:(int)arg1;

@end
