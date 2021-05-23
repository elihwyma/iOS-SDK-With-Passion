/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARTechnique.h>

@class ARPlaneData, ARRawSceneUnderstandingData, ARWorldTrackingTechnique, NSObject, NSString;

@protocol OS_dispatch_semaphore;

@interface ARPlaneEstimationTechnique : ARTechnique

{
    NSObject<OS_dispatch_semaphore> *_semaphoreResult;
    ARPlaneData *_planeResultData;
    ARRawSceneUnderstandingData *_rawSceneUnderstandingData;
    ARWorldTrackingTechnique *_worldTrackingTechnique;
}

@property (retain, nonatomic) ARWorldTrackingTechnique *worldTrackingTechnique;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)detectPlanes:(unsigned long long)arg1 withFrame:(id)arg2;
+ (id)_detectPlanesWithDetector:(struct CV3DSurfaceDetectionContext *)arg1 types:(unsigned long long)arg2 camera:(id)arg3 referenceFeaturePoints:(id)arg4 referenceOriginTransform:(CDStruct_14d5dc5e)arg5;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)resultDataClasses;
- (_Bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (void)technique:(id)arg1 didDetectPlane:(id)arg2 timestamp:(double)arg3;
- (void)technique:(id)arg1 didOutputSceneUnderstandingData:(id)arg2 timestamp:(double)arg3;
- (id)initWithTrackingTechnique:(id)arg1;

@end
