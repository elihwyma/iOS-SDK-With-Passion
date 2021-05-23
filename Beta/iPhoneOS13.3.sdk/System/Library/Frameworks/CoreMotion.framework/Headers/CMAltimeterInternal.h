/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@protocol OS_dispatch_queue;

@interface CMAltimeterInternal : NSObject

{
    struct Dispatcher *fFilteredPressureDispatcher;
    CDUnknownBlockType fRelativeAltimeterHandler;
    NSOperationQueue *fRelativeAltimeterQueue;
    Sample_068dee23 fBaseAltimeterSample;
    float fBarometricBaseAltitude;
    _Bool fBaselineReceived;
    float fMostRecentFilteredPressure;
    struct deque<float, std::__1::allocator<float>> fPressureSamples;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    struct CLConnectionClient *fLocationdConnection;
    CDUnknownBlockType fHandler;
    CDUnknownBlockType fSignificantElevationSampleHandler;
    double fElevationAscendedOffset;
    double fElevationDescendedOffset;
    _Bool fStopSignificantElevationUpdates;
    double fFilteredElevationOffset;
    _Bool fStopRelativeAltitudeUpdates;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)_teardown;
- (void)_startElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_stopElevationUpdates;
- (void)_startSignificantElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)_stopSignificantElevationUpdates;
- (void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_startRelativeAltitudeUpdates;
- (void)_stopRelativeAltitudeUpdates;

@end
