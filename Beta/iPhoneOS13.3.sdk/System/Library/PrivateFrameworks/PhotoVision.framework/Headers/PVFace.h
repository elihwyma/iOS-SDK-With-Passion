/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <PhotoVision/PVObject.h>

@class NSString, PVFaceprint;

@interface PVFace : PVObject

{
    _Bool _hidden;
    _Bool _isInTrash;
    _Bool _manual;
    _Bool _isTooSmall;
    _Bool _hasSmile;
    _Bool _isLeftEyeClosed;
    _Bool _isRightEyeClosed;
    int _trainingType;
    unsigned int _faceAlgorithmVersion;
    NSString *_personLocalIdentifier;
    long long _sourceWidth;
    long long _sourceHeight;
    double _centerX;
    double _centerY;
    double _size;
    double _leftEyeX;
    double _leftEyeY;
    double _rightEyeX;
    double _rightEyeY;
    double _mouthX;
    double _mouthY;
    double _blurScore;
    double _exposureScore;
    NSString *_adjustmentVersion;
    long long _nameSource;
    double _poseYaw;
    long long _clusterSequenceNumber;
    long long _qualityMeasure;
    NSString *_ageType;
    NSString *_genderType;
    NSString *_eyesState;
    NSString *_smileType;
    NSString *_facialHairType;
    NSString *_hairColorType;
    NSString *_baldType;
    NSString *_glassesType;
    NSString *_eyeMakeupType;
    NSString *_lipMakeupType;
    NSString *_groupingIdentifier;
    PVFaceprint *_faceprint;
    double _roll;
    double _quality;
}

@property (copy, nonatomic) NSString *personLocalIdentifier;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) double leftEyeX;
@property (nonatomic) double leftEyeY;
@property (nonatomic) double rightEyeX;
@property (nonatomic) double rightEyeY;
@property (nonatomic) double mouthX;
@property (nonatomic) double mouthY;
@property (nonatomic) _Bool hidden;
@property (nonatomic) _Bool isInTrash;
@property (nonatomic) _Bool manual;
@property (nonatomic) _Bool isTooSmall;
@property (nonatomic) _Bool hasSmile;
@property (nonatomic) double blurScore;
@property (nonatomic) double exposureScore;
@property (nonatomic) _Bool isLeftEyeClosed;
@property (nonatomic) _Bool isRightEyeClosed;
@property (copy, nonatomic) NSString *adjustmentVersion;
@property (nonatomic) long long nameSource;
@property (nonatomic) int trainingType;
@property (nonatomic) double poseYaw;
@property (nonatomic) unsigned int faceAlgorithmVersion;
@property (nonatomic) long long clusterSequenceNumber;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic) NSString *ageType;
@property (nonatomic) NSString *genderType;
@property (nonatomic) NSString *eyesState;
@property (nonatomic) NSString *smileType;
@property (nonatomic) NSString *facialHairType;
@property (nonatomic) NSString *hairColorType;
@property (nonatomic) NSString *baldType;
@property (nonatomic) NSString *glassesType;
@property (nonatomic) NSString *eyeMakeupType;
@property (nonatomic) NSString *lipMakeupType;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (retain, nonatomic) PVFaceprint *faceprint;
@property (nonatomic) double roll;
@property (nonatomic) double quality;

+ (id)faceWithFace:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)faceFromVNFaceObservation:(id)arg1 fromImageWithPixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 additionalVisionRequests:(id)arg4 faceAlgorithmUmbrellaVersion:(unsigned int)arg5 error:(id *)arg6;
+ (id)faceFromVNFaceObservation:(id)arg1 fromImage:(id)arg2 additionalVisionRequests:(id)arg3 faceAlgorithmUmbrellaVersion:(unsigned int)arg4 error:(id *)arg5;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)normalizedFaceRect;
- (long long)photosFaceRepresentationSourceWidth;
- (long long)photosFaceRepresentationSourceHeight;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationBlurScore;
- (_Bool)photosFaceRepresentationHasSmile;
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;
- (_Bool)photosFaceRepresentationIsRightEyeClosed;
- (long long)photosFaceRepresentationQualityMeasure;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationQuality;
- (void)_copyPropertiesFrom:(id)arg1 copyPropertiesOption:(long long)arg2;
- (void)setCoordinatesAndFeaturesFromFace:(id)arg1;
- (_Bool)setCenterAndSizeFromNormalizedFaceRect:(struct CGRect)arg1;
- (struct CGRect)absoluteFaceRect;
- (struct CGRect)absoluteFaceRectForImageSize:(struct CGSize)arg1;

@end
