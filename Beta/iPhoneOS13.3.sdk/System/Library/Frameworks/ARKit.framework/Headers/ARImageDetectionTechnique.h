/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARImageBasedTechnique.h>

@class ARImageDetectionResultData, ARODTHandleManager, ARWorldTrackingPoseData, NSArray, NSDictionary, NSObject;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARImageDetectionTechnique : ARImageBasedTechnique

{
    NSArray *_referenceImages;
    NSObject<OS_dispatch_queue> *_processDataQueue;
    NSObject<OS_dispatch_semaphore> *_loadingSemaphore;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    ARImageDetectionResultData *_referenceImageData;
    _Bool _finishedLoadingImages;
    _Bool _tracking;
    _Bool _deterministicMode;
    struct shared_ptr<arkit::KeyMapBuffer<const void *, std::__1::vector<unsigned char, std::__1::allocator<unsigned char>>>> _poseBuffer;
    _Bool _needsWorldTrackingPoseData;
    _Bool _enableAutomaticImageScaleEstimation;
    ARWorldTrackingPoseData *_currentWorldTrackingPose;
    ARODTHandleManager *_odtTHandleManger;
    NSDictionary *_referenceImageMap;
}

@property (retain) ARWorldTrackingPoseData *currentWorldTrackingPose;
@property (readonly) ARODTHandleManager *odtTHandleManger;
@property (readonly) NSDictionary *referenceImageMap;
@property (nonatomic, readonly) _Bool finishedLoadingImages;
@property (nonatomic) _Bool enableAutomaticImageScaleEstimation;

+ (_Bool)_redetectionRequiredForContext:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id).cxx_construct;
- (void)prepare;
- (id)processData:(id)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (double)requiredTimeInterval;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 continuousDetection:(_Bool)arg3 deterministicMode:(_Bool)arg4 processingQueue:(id)arg5;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 processingQueue:(id)arg3;
- (_Bool)syncWithProcessedImage;
- (void)_enqueueImageForTrackingSynced:(id)arg1;
- (void)_enqueueImageForTrackingNonBlocking:(id)arg1;
- (id)_addReferenceImagesAppleCV3D;
- (void)_loadReferenceImages;
- (id)_trackImagesWithImageData:(id)arg1 timeBudget:(double)arg2;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)updateDevicePerformanceLevel:(id)arg1;
- (id)initWithReferenceImages:(id)arg1;
- (long long)captureBehavior;
- (_Bool)deterministicMode;
- (id)predictAtTimeStamp:(double)arg1 timeBudget:(double)arg2 predictedWorldTrackingPose:(id)arg3;
- (void)updateARPresentationMode:(long long)arg1;

@end
