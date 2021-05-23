/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCConnectionManager, VCRecommendedNetworkSettings, VCWCMClient, WRMClient;

@protocol VCNetworkFeedbackControllerDelegate;

__attribute__((visibility("hidden")))
@interface VCNetworkFeedbackController : NSObject

{
    id <VCNetworkFeedbackControllerDelegate> _weakDelegate;
    VCWCMClient *_WCMClient;
    WRMClient *_WRMClient;
    VCConnectionManager *_connectionManager;
    VCRecommendedNetworkSettings *_recommendedSettings;
    unsigned int _clientTargetBitrate;
    unsigned int _clientTargetBitrateCap;
    double _wrmReportingInterval;
}

@property (readonly) unsigned int recommendedTargetBitrateCap;
@property unsigned int clientTargetBitrate;
@property unsigned int clientTargetBitrateCap;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)strongDelegate;
- (void)setPreWarmState:(_Bool)arg1;
- (void)setupWCMClient;
- (void)setupWRMClient;
- (void)cleanupWRMClient;
- (void)cleanupWCMClient;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;
- (void)wcmGetCallConfig:(unsigned int *)arg1 targetBitrate:(unsigned int *)arg2;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)setWRMNotification:(CDStruct_0693755d *)arg1;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2;
- (void)sendFeedbackControllerReport:(CDStruct_4b4d87a1)arg1;
- (void)sendStatusUpdate:(const CDStruct_8aeecdac *)arg1;
- (void)requestWRMNotification;

@end
