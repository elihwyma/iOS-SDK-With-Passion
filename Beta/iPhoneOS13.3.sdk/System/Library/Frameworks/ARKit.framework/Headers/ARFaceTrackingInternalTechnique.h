/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARImageBasedTechnique.h>

@class NSObject, NSUUID;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARFaceTrackingInternalTechnique : ARImageBasedTechnique

{
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    NSObject<OS_dispatch_queue> *_processDataQueue;
    NSUUID *_singleUserAnchorIdentifier;
    long long _maximumNumberOfTrackedFaces;
}

@property (nonatomic, readonly) long long maximumNumberOfTrackedFaces;

+ (void)initialize;
+ (_Bool)isSupported;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)processData:(id)arg1;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (long long)captureBehavior;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)arg1 options:(id)arg2;
- (void)_enqueueImageForFaceTrackingNonBlocking:(id)arg1;
- (id)faceTrackingOptionsFromImageData:(id)arg1 withCallback:(CDUnknownBlockType)arg2;

@end
