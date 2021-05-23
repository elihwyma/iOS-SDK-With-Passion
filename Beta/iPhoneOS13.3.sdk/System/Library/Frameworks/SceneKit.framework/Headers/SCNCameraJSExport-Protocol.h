/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSString, SCNMaterialProperty;

@protocol SCNCameraJSExport <Swift>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double fieldOfView;
@property (nonatomic) long long projectionDirection;
@property (nonatomic) double focalLength;
@property (nonatomic) double sensorHeight;
@property (nonatomic) double zNear;
@property (nonatomic) double zFar;
@property (nonatomic) _Bool automaticallyAdjustsZRange;
@property (nonatomic) _Bool usesOrthographicProjection;
@property (nonatomic) double orthographicScale;
@property (nonatomic) struct SCNMatrix4 projectionTransform;
@property (nonatomic) double focusDistance;
@property (nonatomic) double focalBlurRadius;
@property (nonatomic) _Bool wantsDepthOfField;
@property (nonatomic) long long focalBlurSampleCount;
@property (nonatomic) double fStop;
@property (nonatomic) long long apertureBladeCount;
@property (nonatomic) double motionBlurIntensity;
@property (nonatomic) double screenSpaceAmbientOcclusionIntensity;
@property (nonatomic) double screenSpaceAmbientOcclusionRadius;
@property (nonatomic) double screenSpaceAmbientOcclusionBias;
@property (nonatomic) double screenSpaceAmbientOcclusionDepthThreshold;
@property (nonatomic) double screenSpaceAmbientOcclusionNormalThreshold;
@property (nonatomic) _Bool wantsHDR;
@property (nonatomic) double exposureOffset;
@property (nonatomic) double averageGray;
@property (nonatomic) double whitePoint;
@property (nonatomic) _Bool wantsExposureAdaptation;
@property (nonatomic) double exposureAdaptationBrighteningSpeedFactor;
@property (nonatomic) double exposureAdaptationDarkeningSpeedFactor;
@property (nonatomic) double minimumExposure;
@property (nonatomic) double maximumExposure;
@property (nonatomic) double bloomThreshold;
@property (nonatomic) unsigned long long bloomIteration;
@property (nonatomic) unsigned long long bloomIterationSpread;
@property (nonatomic) double bloomIntensity;
@property (nonatomic) double bloomBlurRadius;
@property (nonatomic) double vignettingPower;
@property (nonatomic) double vignettingIntensity;
@property (nonatomic) double colorFringeStrength;
@property (nonatomic) double colorFringeIntensity;
@property (nonatomic) double saturation;
@property (nonatomic) double contrast;
@property (nonatomic) double grainIntensity;
@property (nonatomic) double grainScale;
@property (nonatomic) double grainIsColored;
@property (nonatomic) double whiteBalanceTemperature;
@property (nonatomic) double whiteBalanceTint;
@property (nonatomic, readonly) SCNMaterialProperty *colorGrading;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic) double xFov;
@property (nonatomic) double yFov;
@property (nonatomic) double aperture;
@property (nonatomic) double focalSize;
@property (nonatomic) double focalDistance;

+ (unsigned short)camera;
+ (unsigned short)cameraWithMDLCamera: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;
- (unsigned short)setValue:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)animationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)addAnimation:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAnimations;
- (unsigned short)animationKeys;
- (unsigned short)pauseAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeAnimationForKey: /* Error: Ran out of types for this method. */;

@end
