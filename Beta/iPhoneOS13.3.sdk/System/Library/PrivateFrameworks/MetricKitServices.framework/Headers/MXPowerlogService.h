/*
 Image: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
 */

#import <MetricKitServices/MXService.h>

@class MXSourceXPCPayload, NSMutableArray, NSObject;

@protocol OS_dispatch_queue, OS_os_log;

@interface MXPowerlogService : MXService

{
    NSMutableArray *_powerlogDataPaths;
    MXSourceXPCPayload *_unarchivedPowerlogData;
    NSObject<OS_os_log> *_MXPowerLogServiceLogHandle;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

@property (retain) NSMutableArray *powerlogDataPaths;
@property (retain) MXSourceXPCPayload *unarchivedPowerlogData;
@property (retain) NSObject<OS_os_log> *MXPowerLogServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedPowerlogService;

- (id)init;
- (_Bool)startService;
- (_Bool)_updateMetrics;
- (_Bool)stopService;
- (_Bool)metricsAvailableForDate:(id)arg1;
- (id)getMetricsForClient:(id)arg1 dateString:(id)arg2;

@end
