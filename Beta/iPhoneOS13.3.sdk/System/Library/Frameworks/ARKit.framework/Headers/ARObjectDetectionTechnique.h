/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARImageBasedTechnique.h>

@class ARODTHandleManager, ARObjectDetectionResultData, ARWorldTrackingPoseData, NSArray, NSDictionary, NSObject;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARObjectDetectionTechnique : ARImageBasedTechnique

{
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    NSObject<OS_dispatch_queue> *_loadObjectsQueue;
    ARObjectDetectionResultData *_latestResultData;
    ARODTHandleManager *_odtHandleManager;
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    NSObject<OS_dispatch_queue> *_processDataQueue;
    _Bool _finishedLoadingObjects;
    NSDictionary *_referenceObjecteMap;
    NSArray *_detectionObjects;
    ARWorldTrackingPoseData *_currentWorldTrackingPose;
}

@property _Bool finishedLoadingObjects;
@property (retain) ARWorldTrackingPoseData *currentWorldTrackingPose;
@property (readonly) NSDictionary *referenceObjecteMap;
@property (nonatomic, readonly) NSArray *detectionObjects;

- (_Bool)isEqual:(id)arg1;
- (void)prepare;
- (id)processData:(id)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (double)requiredTimeInterval;
- (void)updateDevicePerformanceLevel:(id)arg1;
- (id)initWithDetectionObjects:(id)arg1;
- (void)updatePresentationMode:(long long)arg1;
- (void)_loadReferenceObjects;
- (void)_enqueueObjectForDetectionNonBlocking:(id)arg1;

@end
