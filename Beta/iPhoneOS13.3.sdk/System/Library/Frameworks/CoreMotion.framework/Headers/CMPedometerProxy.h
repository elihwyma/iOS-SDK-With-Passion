/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMPedometerProxy : NSObject

{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fOffsetUpdateHandler;
    CDUnknownBlockType fCumulativeUpdateHandler;
    long long fStepCountFromStart;
    long long fPushCountFromStart;
    long long fStepCountOffset;
    long long fPushCountOffset;
    double fDistanceFromStart;
    double fDistanceOffset;
    int fFloorAscendedStart;
    int fFloorAscendedOffset;
    int fFloorDescendedStart;
    int fFloorDescendedOffset;
    double fActiveTimeFromStart;
    double fActiveTimeOffset;
    double fValidStartDate;
    _Bool fStopUpdates;
    _Bool fFloorCountingAvailable;
    _Bool fPaceAndCadenceAvailable;
    CDUnknownBlockType fEventHandler;
    _Bool fStopEventUpdates;
    int fWorkoutType;
    int fElevationAscendedStart;
    int fElevationAscendedOffset;
    int fElevationDescendedStart;
    int fElevationDescendedOffset;
    _Bool fElevationCountingAvailable;
    int fDistanceSource;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 onQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_internalQueryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)_queryPedometerDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2 shouldStartUpdates:(_Bool)arg3;
- (void)_handleRecordQueryResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2 shouldStartUpdates:(_Bool)arg3;
- (void)_subscribeToCumulativePedometerUpdates:(CDUnknownBlockType)arg1;
- (void)_queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_startPedometerUpdatesFromDate:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_stopPedometerUpdates;
- (void)_startPedometerUpdatesSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_startPedometerEventUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_stopPedometerEventUpdates;
- (id)_strideCalibrationDump;
- (void)_queryPedometerCalibrationBinsWithHandler:(CDUnknownBlockType)arg1 forType:(long long)arg2 forRemote:(_Bool)arg3;

@end
