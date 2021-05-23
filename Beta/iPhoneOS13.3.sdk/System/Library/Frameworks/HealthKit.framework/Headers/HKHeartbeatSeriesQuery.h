/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKHeartbeatSeriesSample, NSString;

@interface HKHeartbeatSeriesQuery : HKQuery

{
    CDUnknownBlockType _dataHandler;
    HKHeartbeatSeriesSample *_heartbeatSeries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterfaceProtocol;

- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)_enumerateHeartbeatsWithHandler:(CDUnknownBlockType)arg1;
- (void)client_deliverHeartbeats;
- (id)initWithHeartbeatSeries:(id)arg1 dataHandler:(CDUnknownBlockType)arg2;

@end
