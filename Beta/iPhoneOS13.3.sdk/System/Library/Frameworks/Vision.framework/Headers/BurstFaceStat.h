/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BurstFaceStat : NSObject

{
    _Bool leftEyeOpen;
    _Bool rightEyeOpen;
    _Bool smiling;
    _Bool foundByFaceCore;
    _Bool hasLeftEye;
    _Bool hasRightEye;
    _Bool hasRollAngle;
    _Bool hasYawAngle;
    _Bool smallFace;
    _Bool _hasPitchAngle;
    _Bool _isSyncedWithImage;
    float normalizedSigma;
    int faceId;
    int hwFaceId;
    int framesSinceLast;
    float focusScore;
    float normalizedFocusScore;
    float faceScore;
    float leftEyeBlinkScore;
    float rightEyeBlinkScore;
    float smileScore;
    int FCRLeftEyeFeaturesOffset;
    int FCRRightEyeFeaturesOffset;
    int FCRSmileFeaturesOffset;
    int FCRBlinkFeaturesSize;
    int FCRSmileFeaturesSize;
    float rollAngle;
    float yawAngle;
    float _pitchAngle;
    NSMutableArray *FCRSmileAndBlinkFeatures;
    double timestamp;
    struct CGRect faceRect;
    struct CGRect normalizedFaceRect;
    struct CGRect leftEyeRect;
    struct CGRect rightEyeRect;
    struct CGRect _hwFaceRect;
}

@property _Bool leftEyeOpen;
@property _Bool rightEyeOpen;
@property _Bool smiling;
@property float leftEyeBlinkScore;
@property float rightEyeBlinkScore;
@property float smileScore;
@property _Bool hasLeftEye;
@property _Bool hasRightEye;
@property _Bool foundByFaceCore;
@property struct CGRect faceRect;
@property struct CGRect normalizedFaceRect;
@property int faceId;
@property int framesSinceLast;
@property float focusScore;
@property float faceScore;
@property struct CGRect leftEyeRect;
@property struct CGRect rightEyeRect;
@property int FCRLeftEyeFeaturesOffset;
@property int FCRRightEyeFeaturesOffset;
@property int FCRSmileFeaturesOffset;
@property int FCRBlinkFeaturesSize;
@property int FCRSmileFeaturesSize;
@property (retain) NSMutableArray *FCRSmileAndBlinkFeatures;
@property int hwFaceId;
@property struct CGRect hwFaceRect;
@property float normalizedFocusScore;
@property float normalizedSigma;
@property _Bool hasRollAngle;
@property _Bool hasYawAngle;
@property _Bool hasPitchAngle;
@property float rollAngle;
@property float yawAngle;
@property float pitchAngle;
@property double timestamp;
@property _Bool isSyncedWithImage;
@property _Bool smallFace;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFaceStat:(id)arg1;

@end
