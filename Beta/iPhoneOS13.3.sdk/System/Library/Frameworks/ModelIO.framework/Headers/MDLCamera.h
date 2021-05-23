/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLObject.h>

@class CAAnimation, MISSING_TYPE;

@interface MDLCamera : MDLObject

{
    struct RTCamera *_camera;
    float _worldToMetersConversionScale;
    CAAnimation *_focalDistanceAnimation;
    CAAnimation *_fStopAnimation;
    CAAnimation *_focalLengthAnimation;
    CAAnimation *_apertureAnimation;
    CAAnimation *_apertureAspectAnimation;
    float _barrelDistortion;
    float _fisheyeDistortion;
    float _opticalVignetting;
    float _chromaticAberration;
    float _fStop;
    float _maximumCircleOfConfusion;
    unsigned long long _projection;
    unsigned long long _apertureBladeCount;
    double _shutterOpenInterval;
    MISSING_TYPE *_flash;
}

@property (copy, nonatomic) CAAnimation *focalLengthAnimation;
@property (copy, nonatomic) CAAnimation *focalDistanceAnimation;
@property (copy, nonatomic) CAAnimation *fStopAnimation;
@property (copy, nonatomic) CAAnimation *apertureAnimation;
@property (copy, nonatomic) CAAnimation *apertureAspectAnimation;
@property (nonatomic, readonly) CDStruct_14d5dc5e projectionMatrix;
@property (nonatomic) unsigned long long projection;
@property (nonatomic) float nearVisibilityDistance;
@property (nonatomic) float farVisibilityDistance;
@property (nonatomic) float worldToMetersConversionScale;
@property (nonatomic) float barrelDistortion;
@property (nonatomic) float fisheyeDistortion;
@property (nonatomic) float opticalVignetting;
@property (nonatomic) float chromaticAberration;
@property (nonatomic) float focalLength;
@property (nonatomic) float focusDistance;
@property (nonatomic) float fieldOfView;
@property (nonatomic) float fStop;
@property (nonatomic) unsigned long long apertureBladeCount;
@property (nonatomic) float maximumCircleOfConfusion;
@property (nonatomic) double shutterOpenInterval;
@property (nonatomic) float sensorVerticalAperture;
@property (nonatomic) float sensorAspect;
@property (nonatomic) MISSING_TYPE *sensorEnlargement;
@property (nonatomic) MISSING_TYPE *sensorShift;
@property (nonatomic) MISSING_TYPE *flash;
@property (nonatomic) MISSING_TYPE *exposureCompression;
@property (nonatomic) MISSING_TYPE *exposure;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)version;
- (void)setAperture:(float)arg1;
- (float)aperture;
- (void)setAspect:(float)arg1;
- (float)aspect;
- (struct RTCamera *)rtCamera;
- (CDStruct_14d5dc5e)getViewMatrixAtTime:(double)arg1;
- (CDStruct_14d5dc5e)getProjectionMatrixAtTime:(double)arg1;
- (MISSING_TYPE *)rayTo:forViewPort: /* Error: Ran out of types for this method. */;
- (float)fov;
- (void)setFov:(float)arg1;
- (float)circleOfConfusionForDistance:(float)arg1;
- (float)zNear;
- (void)setZNear:(float)arg1;
- (float)zFar;
- (void)setZFar:(float)arg1;
- (id)bokehKernelWithSize: /* Error: Ran out of types for this method. */;
- (void)frameBoundingBox:(struct)arg1 setNearAndFar:(_Bool)arg2;
- (void)lookAt: /* Error: Ran out of types for this method. */;
- (void)lookAt:from: /* Error: Ran out of types for this method. */;

@end
