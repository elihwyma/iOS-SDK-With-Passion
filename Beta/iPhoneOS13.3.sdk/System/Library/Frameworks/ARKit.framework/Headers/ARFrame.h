/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARBody2D, ARCamera, ARFaceData, ARFrameTimingData, ARLightEstimate, ARPlaneData, ARPointCloud, ARRawSceneUnderstandingData, ARVideoFormat, ARWorldTrackingErrorData, ARWorldTrackingState, AVDepthData, MISSING_TYPE, NSArray, NSDate, NSDictionary;

@protocol MTLTexture;

@interface ARFrame : NSObject <Swift>

{
    ARPlaneData *_cachedHorizontalPlaneData;
    ARPlaneData *_cachedVerticalPlaneData;
    unsigned long long _transformFlags;
    _Bool _predicted;
    _Bool _shouldRestrictFrameRate;
    float _cameraGrainIntensity;
    float _imageNoiseIntensity;
    struct __CVBuffer *_segmentationBuffer;
    struct __CVBuffer *_estimatedDepthData;
    struct __CVBuffer *_capturedImage;
    id <MTLTexture> _cameraGrainTexture;
    double _timestamp;
    double _capturedDepthDataTimestamp;
    ARCamera *_camera;
    NSArray *_anchors;
    ARLightEstimate *_lightEstimate;
    long long _worldMappingStatus;
    double _currentCaptureTimestamp;
    ARPointCloud *_featurePoints;
    ARPointCloud *_referenceFeaturePoints;
    NSArray *_cachedPointClouds;
    long long _worldAlignment;
    ARFrameTimingData *_timingData;
    ARWorldTrackingErrorData *_worldTrackingErrorData;
    NSDictionary *_worldTrackingStateDetails;
    ARWorldTrackingState *_worldTrackingState;
    long long _renderFramesPerSecond;
    NSDate *_captureDate;
    ARRawSceneUnderstandingData *_rawSceneUnderstandingData;
    double _estimatedLuminance;
    struct __CVBuffer *_downSampledMattingPixelBuffer;
    struct __CVBuffer *_mattingScaleImagePixelBuffer;
    NSArray *_detectedBodies;
    ARFaceData *_faceData;
    AVDepthData *_capturedDepthData;
    ARVideoFormat *_currentlyActiveVideoFormat;
    id <MTLTexture> _imageNoiseTexture;
    CDStruct_14d5dc5e _referenceOriginTransform;
    CDStruct_14d5dc5e _referenceOriginDelta;
    CDStruct_14d5dc5e _sessionOriginTransform;
    CDStruct_14d5dc5e _worldAlignmentTransform;
}

@property (nonatomic, readonly) double currentCaptureTimestamp;
@property (nonatomic) struct __CVBuffer *capturedImage;
@property (copy, nonatomic) NSArray *anchors;
@property (retain, nonatomic) ARLightEstimate *lightEstimate;
@property (nonatomic) long long worldMappingStatus;
@property (nonatomic, readonly, getter=isPredicted) _Bool predicted;
@property (retain, nonatomic) ARPointCloud *featurePoints;
@property (retain, nonatomic) ARPointCloud *referenceFeaturePoints;
@property (retain, nonatomic) NSArray *cachedPointClouds;
@property (nonatomic) CDStruct_14d5dc5e referenceOriginTransform;
@property (nonatomic) CDStruct_14d5dc5e referenceOriginDelta;
@property (nonatomic) CDStruct_14d5dc5e sessionOriginTransform;
@property (nonatomic) CDStruct_14d5dc5e worldAlignmentTransform;
@property (nonatomic) long long worldAlignment;
@property (retain, nonatomic) ARFrameTimingData *timingData;
@property (retain, nonatomic) ARWorldTrackingErrorData *worldTrackingErrorData;
@property (copy, nonatomic) NSDictionary *worldTrackingStateDetails;
@property (retain, nonatomic) ARWorldTrackingState *worldTrackingState;
@property (nonatomic) long long renderFramesPerSecond;
@property (nonatomic) _Bool shouldRestrictFrameRate;
@property (retain, nonatomic) NSDate *captureDate;
@property (retain, nonatomic) ARRawSceneUnderstandingData *rawSceneUnderstandingData;
@property (nonatomic) double estimatedLuminance;
@property (nonatomic) struct __CVBuffer *segmentationBuffer;
@property (nonatomic) struct __CVBuffer *estimatedDepthData;
@property (nonatomic) struct __CVBuffer *downSampledMattingPixelBuffer;
@property (nonatomic) struct __CVBuffer *mattingScaleImagePixelBuffer;
@property (copy, nonatomic) NSArray *detectedBodies;
@property (retain, nonatomic) ARFaceData *faceData;
@property (retain, nonatomic) AVDepthData *capturedDepthData;
@property (retain, nonatomic) ARVideoFormat *currentlyActiveVideoFormat;
@property (nonatomic) double capturedDepthDataTimestamp;
@property (retain, nonatomic) id <MTLTexture> imageNoiseTexture;
@property (nonatomic) float imageNoiseIntensity;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) id <MTLTexture> cameraGrainTexture;
@property (nonatomic, readonly) float cameraGrainIntensity;
@property (copy, nonatomic, readonly) ARCamera *camera;
@property (nonatomic, readonly) ARPointCloud *rawFeaturePoints;
@property (nonatomic, readonly) ARBody2D *detectedBody;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
- (id)initWithCamera:(id)arg1 timestamp:(double)arg2;
- (MISSING_TYPE *)transformPointToNDCSpace:(struct CGPoint)arg1;
- (id)_hitTestFromOrigin:(unsigned long long)arg1 withDirection:types: /* Error: Ran out of types for this method. */;
- (_Bool)sessionOriginTransformAvailable;
- (_Bool)worldAlignmentTransformAvailable;
- (id)_hitTestEstimatedPlanesFromOrigin:(long long)arg1 withDirection:planeAlignment: /* Error: Ran out of types for this method. */;
- (id)_horizontalPlaneEstimateFromFeaturePoint:fromOrigin:withDirection: /* Error: Ran out of types for this method. */;
- (id)initWithTimestamp:(double)arg1 context:(id)arg2;
- (id)initWithTimestampAndNoContext:(double)arg1;
- (void)setPredictedTimestamp:(double)arg1;
- (id)raycastQueryFromPoint:(struct CGPoint)arg1 allowingTarget:(long long)arg2 alignment:(long long)arg3;
- (struct CGAffineTransform)displayTransformForOrientation:(long long)arg1 viewportSize:(struct CGSize)arg2;
- (void)_updatePredicted:(_Bool)arg1;
- (_Bool)referenceOriginTransformAvailable;
- (_Bool)referenceOriginTransformUpdated;
- (void)setReferenceOriginTransformUpdated:(_Bool)arg1;
- (_Bool)referenceOriginChanged;
- (void)setReferenceOriginChanged:(_Bool)arg1;
- (_Bool)referenceOriginDeltaAvailable;
- (CDStruct_14d5dc5e)gravityAlignedReferenceOriginTransform;

@end
