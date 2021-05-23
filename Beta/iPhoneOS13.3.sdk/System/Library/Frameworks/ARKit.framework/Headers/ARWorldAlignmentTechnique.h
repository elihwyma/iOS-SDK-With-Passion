/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class ARTimeKeyedList, ARWorldAlignmentData, CMMotionManager, MISSING_TYPE, NSObject;

@protocol OS_dispatch_semaphore;

@interface ARWorldAlignmentTechnique : ARTechnique

{
    ARTimeKeyedList *_deviceOrientationDataByTime;
    float _deviceOrientationAlignmentAngle;
    float _trackingAlignmentAngle;
    MISSING_TYPE *_trackingAlignmentTranslation;
    _Bool _deviceOrientationReferenced;
    _Bool _trackingReferenced;
    _Bool _imageMirrored;
    long long _lastTrackingStateReason;
    double _lastMajorRelocalizationTimestamp;
    double _lastHeadingUpdateTimestamp;
    _Bool _relocalizing;
    ARWorldAlignmentData *_relocalizedAlignmentData;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    long long _alignment;
    long long _cameraPosition;
    CMMotionManager *_motionManager;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) long long cameraPosition;
@property (retain, nonatomic) CMMotionManager *motionManager;

- (_Bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithAlignment:(long long)arg1 cameraPosition:(long long)arg2;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)_handleTrackingStateChanges:(id)arg1 initialized:(_Bool *)arg2 relocalized:(_Bool *)arg3;
- (void)_referenceDeviceOrientation:(id)arg1;
- (id)_referenceTrackingAlignmentWithPoseData:(id)arg1 deviceOrientation:(id)arg2;
- (id)_updateHeadingAlignmentWithPoseData:(id)arg1 deviceOrientation:(id)arg2 timestamp:(double)arg3;
- (id)_deviceOrientationPoseDataFromDeviceOrientation:(id)arg1;
- (float)_trackingAlignmentAngleForPoseData:(id)arg1 deviceOrientation:(id)arg2;
- (id)initWithAlignment:(long long)arg1;

@end
