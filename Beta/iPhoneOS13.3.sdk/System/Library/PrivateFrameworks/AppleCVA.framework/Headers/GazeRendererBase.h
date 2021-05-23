/*
 Image: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface GazeRendererBase : NSObject

{
    float _fadeoutFactor;
    float _trackingFadeoutPos;
    int _lastTrackingFailed;
    CDStruct_14d5dc5e _faceTransform;
    MISSING_TYPE *_virtualCamPos;
    MISSING_TYPE *_eyeCenterModel;
    MISSING_TYPE *_eyeCenterTransformed;
    MISSING_TYPE *_meshCenter;
    MISSING_TYPE *_eyeAxisModel;
    MISSING_TYPE *_rotationCenter;
    MISSING_TYPE *_rotationCenterTransformed;
    float _correctionFactor;
    float _fadeoutFactorFS;
    _Bool _fullEyeRotationEnabled;
    _Bool _gazeCorrectionEnabled;
    _Bool _autoGazeCorrectionEnabled;
    _Bool _weightsEnabled;
    _Bool _fadeoutEnabled;
    _Bool _foreshorteningCorrectionEnabled;
    float _gazeCorrectionRotationAmount;
    float _gazeCorrectionEyeLookUpAmount;
    float _maxRotationAngle;
    float _maxEyeLookUpAmount;
    float _maxCorrectionAngle;
    float _rotationCenterOffsetZ;
    float _rotationCenterOffsetY;
    float _scale;
    float _angleEyeToCameras;
    float _angleRotCenterToCameras;
    float _foreshorteningCorrectionAmount;
}

@property MISSING_TYPE *virtualCamPos;
@property _Bool fullEyeRotationEnabled;
@property _Bool gazeCorrectionEnabled;
@property _Bool autoGazeCorrectionEnabled;
@property float gazeCorrectionRotationAmount;
@property float gazeCorrectionEyeLookUpAmount;
@property float maxRotationAngle;
@property float maxEyeLookUpAmount;
@property float maxCorrectionAngle;
@property float rotationCenterOffsetZ;
@property float rotationCenterOffsetY;
@property float scale;
@property _Bool weightsEnabled;
@property _Bool fadeoutEnabled;
@property float angleEyeToCameras;
@property float angleRotCenterToCameras;
@property _Bool foreshorteningCorrectionEnabled;
@property float foreshorteningCorrectionAmount;

+ (_Bool)dumpStoredToFile:(id)arg1;
+ (_Bool)updateStoredFromFile:(id)arg1;

- (id)init;
- (void)resetToDefaults;
- (void)storeSettings;
- (void)resetToStored;
- (_Bool)updateFaceMeshWithfaceKitData:(id)arg1 screenProjectionMatrix:(CDStruct_14d5dc5e)arg2 inputImageSize:(CDStruct_1ef3fb1f)arg3 outputImageSize:(CDStruct_1ef3fb1f)arg4 inputIntrinsics:(CDStruct_d80e62f2)arg5 outputIntrinsics:(CDStruct_d80e62f2)arg6 extrinsics:(CDStruct_14d5dc5e)arg7 correctionEnabled:(_Bool)arg8 groundTruthMode:(_Bool)arg9 gazeMesh:(id)arg10 uniforms:(CDStruct_1aaaa5d4 *)arg11 latest_vertices:(vector_77dbe408 *)arg12;
- (float)easeInOutWithCurrentPos:(float)arg1 totalDuration:(float)arg2;
- (float)computeAngleToCameras: /* Error: Ran out of types for this method. */;
- (void)updateFadeoutFactorWithIsTracked:(_Bool)arg1;

@end
