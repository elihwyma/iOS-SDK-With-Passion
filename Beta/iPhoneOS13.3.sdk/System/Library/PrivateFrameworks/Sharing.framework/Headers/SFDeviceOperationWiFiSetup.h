/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CUBonjourBrowser, CUReachabilityMonitor, NSString, SFSession;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationWiFiSetup : NSObject

{
    CUBonjourBrowser *_bonjourBrowser;
    NSString *_bonjourTestID;
    NSObject<OS_dispatch_source> *_bonjourTimer;
    _Bool _invalidateCalled;
    _Bool _reachabilityEnabled;
    CUReachabilityMonitor *_reachabilityMonitor;
    unsigned long long _startTicks;
    unsigned long long _startBonjourTestTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    int _bonjourTestState;
    unsigned int _repairFlags;
    unsigned int _setupFlags;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _metricBonjourTestSeconds;
    double _metricTotalSeconds;
    double _metricWiFiSetupSeconds;
    SFSession *_sfSession;
}

@property (nonatomic, readonly) int bonjourTestState;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) double metricBonjourTestSeconds;
@property (nonatomic, readonly) double metricTotalSeconds;
@property (nonatomic, readonly) double metricWiFiSetupSeconds;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned int setupFlags;
@property (retain, nonatomic) SFSession *sfSession;

- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)activate;
- (void)_complete:(id)arg1;
- (void)_activate2;
- (void)_setupResponse:(id)arg1;
- (void)_bonjourTestFoundDevice:(id)arg1;
- (void)_bonjourTestTimeout;
- (void)_bonjourTestStart;

@end
