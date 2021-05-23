/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@protocol OS_dispatch_semaphore;

@interface ARODTHandleManager : NSObject

{
    struct CV3DODTContext *_odtHandle;
    NSObject<OS_dispatch_semaphore> *_odtHandleSemaphore;
    unsigned long long _odtCounter;
    NSDictionary *_options;
    struct CV3DMLModel *_mlModel;
    unsigned long long _odtPowerUsage;
}

@property (nonatomic, readonly) long long maximumNumberOfTrackedImages;
@property (nonatomic, readonly) _Bool continuousDetection;
@property (nonatomic, readonly) _Bool deterministicMode;

+ (int)verifyReferenceImage:(id)arg1;
+ (void)accumulateReferenceImageErrorsForResult:(int)arg1 refImage:(id)arg2 objectID:(unsigned long long)arg3 pReferenceImageMap:(id *)arg4 pFailedReferenceImageNames:(id *)arg5 pUserErrorType:(long long *)arg6;
+ (id)handleAccumulatedErrorType:(long long)arg1 failedReferenceImageNames:(id)arg2;
+ (id)suggestionInternalError;
+ (long long)actualNumberOfImagesTracked:(long long)arg1;
+ (id)suggestionInvalidImage;
+ (id)suggestionInvalidFeature;
+ (int)_calibrationDataFromImageData:(id)arg1 pCalibrationData:(id *)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMaximumNumberOfTrackedImages:(long long)arg1 continuousDetection:(_Bool)arg2 deterministicMode:(_Bool)arg3;
- (int)waitForAllObjectsAddToFinish;
- (int)addReferenceImage:(id)arg1 tracking:(_Bool)arg2 pObjectID:(unsigned long long *)arg3;
- (int)trackPlanarObjectAndEstimateScaleForImageData:(id)arg1 worldTrackingPose:(id)arg2 imageContext:(const void *)arg3 timeBudget:(double)arg4 pResultArray:(id *)arg5;
- (int)trackPlanarObjectForImageData:(id)arg1 imageContext:(const void *)arg2 timeBudget:(double)arg3 pResultArray:(id *)arg4;
- (void)updatePowerUsage:(unsigned long long)arg1;
- (void)updateDevicePerformanceLevel:(id)arg1;
- (int)predictPlanarObjectsAtTimestamp:(double)arg1 worldTrackingPose:(id)arg2 timeBudget:(double)arg3 pResultArray:(id *)arg4;
- (void)updateStereoMode:(_Bool)arg1;
- (int)_odtPerformanceModeFromDevicePerformanceLevel:(id)arg1;
- (id)initWithMaximumNumberOfTrackedImages:(long long)arg1;
- (id)initWithRegionProposalModel;
- (int)addReferenceObject:(id)arg1 tracking:(_Bool)arg2 pObjectID:(unsigned long long *)arg3;
- (int)detectReferenceObjectsForImageData:(id)arg1 worldTrackingPose:(id)arg2 imageContext:(const void *)arg3 pResultArray:(id *)arg4;
- (void)releaseODTHandle;

@end
