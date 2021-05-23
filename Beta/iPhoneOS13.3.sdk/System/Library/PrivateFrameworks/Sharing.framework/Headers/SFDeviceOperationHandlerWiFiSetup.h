/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CUBonjourAdvertiser, CUReachabilityMonitor, NSData, NSDictionary, NSError, NSString, SFSession;

@protocol OS_dispatch_queue;

@interface SFDeviceOperationHandlerWiFiSetup : NSObject

{
    CUBonjourAdvertiser *_bonjourAdvertiser;
    _Bool _invalidateCalled;
    CUReachabilityMonitor *_reachabilityMonitor;
    CDUnknownBlockType _responseHandler;
    NSDictionary *_scanResult;
    int _state;
    _Bool _stepDone;
    NSError *_stepError;
    _Bool _reachabilityEnabled;
    unsigned int _repairFlags;
    unsigned int _setupFlags;
    int _wifiChannel;
    _Bool _wifiDirected;
    id _wifiEAPConfig;
    id _wifiEAPTrustExceptions;
    _Bool _wifiHomeNetwork;
    NSString *_wifiPassword;
    NSData *_wifiPSK;
    NSString *_wifiSSID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFSession *_sfSession;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFSession *sfSession;

- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)activate;
- (void)_run;
- (void)_handleRequestBonjourTestStart:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleRequestBonjourTestDone:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleWiFiSetupRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_runScanStart:(int)arg1;
- (void)_runJoinStart:(int)arg1;
- (void)_runReachabilityStart;
- (void)_completeError:(id)arg1;
- (void)_runScanResults:(id)arg1 error:(id)arg2 channel:(int)arg3;

@end
