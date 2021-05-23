/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMPedometerProxy;

@interface CMPedometer : NSObject

{
    CMPedometerProxy *_pedometerProxy;
}

@property (nonatomic, readonly) CMPedometerProxy *pedometerProxy;

- (id)init;
- (void)dealloc;
- (void)_startPedometerUpdatesSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)_pedometerDataWithRecordID:(long long)arg1;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)strideCalibrationDump;
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopPedometerUpdates;
- (void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startPedometerEventUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopPedometerEventUpdates;
- (_Bool)sendStrideCalibrationHistoryToFile:(id)arg1;
- (void)queryRawSpeedToKValueBinsWithHandler:(CDUnknownBlockType)arg1;
- (void)queryRemoteRawSpeedToKValueBinsWithHandler:(CDUnknownBlockType)arg1;
- (void)queryStepCadenceToStrideLengthBinsWithHandler:(CDUnknownBlockType)arg1;
- (void)queryRemoteStepCadenceToStrideLengthBinsWithHandler:(CDUnknownBlockType)arg1;

@end
