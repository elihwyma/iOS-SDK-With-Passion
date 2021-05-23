/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetectedObjectObservation.h>

@class NSArray, NSData, NSDictionary, NSNumber, VNFaceAttributes, VNFaceLandmarks2D, VNFaceLandmarks3D, VNFaceRegionMap, VNFaceSegments, VNFaceTorsoprint, VNFaceprint, VNTorsoprint;

@interface VNFaceObservation : VNDetectedObjectObservation

{
    VNFaceLandmarks2D *_cachedLandmarks;
    struct os_unfair_lock_s _cachedLandmarksLock;
    VNFaceLandmarks2D *_cachedLandmarks65;
    struct os_unfair_lock_s _cachedLandmarks65Lock;
    VNFaceLandmarks3D *_cachedLandmarks3d;
    struct os_unfair_lock_s _cachedLandmarks3dLock;
    VNFaceRegionMap *_faceRegionMap;
    VNFaceAttributes *_faceAttributes;
    VNFaceprint *_faceprint;
    VNTorsoprint *_torsoprint;
    VNFaceTorsoprint *_faceTorsoprint;
    VNFaceSegments *_faceSegments;
    float _landmarkScore;
    _Bool _isBlinking;
    float _blinkScore;
    NSDictionary *_expressionsAndScores;
    float _faceJunkinessIndex;
    float _faceOrientationIndex;
    struct _Geometry2D_rect2D_ _alignedBoundingBox;
    struct CGRect _unalignedBoundingBox;
    NSData *_landmarkPoints;
    NSData *_landmarkPoints65;
    unsigned long long _landmarksConstellation;
    NSArray *_landmarkPrecisionEstimatesPerPoint;
    NSArray *_landmarkOcclusionFlagsPerPoint;
    NSData *_landmarkPoints3d;
    NSData *_poseData;
    float _faceIdConfidence;
    unsigned long long _faceId;
    _Bool _hasBBoxBeenAligned;
    float _alignedRotationAngle;
    NSNumber *_roll;
    NSNumber *_yaw;
    NSData *_alignedMeanShape;
    NSNumber *_faceCaptureQuality;
    unsigned long long _landmarksRequestRevision;
    unsigned long long _landmarks3DRequestRevision;
    VNFaceLandmarks2D *_landmarks;
}

@property (retain, nonatomic) VNFaceLandmarks2D *landmarks;
@property (nonatomic) _Bool hasBBoxBeenAligned;
@property (nonatomic) struct _Geometry2D_rect2D_ alignedBoundingBox;
@property (nonatomic) float alignedRotationAngle;
@property (retain, nonatomic) NSData *landmarkPoints;
@property (retain, nonatomic) NSData *landmarkPoints65;
@property (nonatomic) unsigned long long landmarksConstellation;
@property (retain, nonatomic) NSArray *landmarkPrecisionEstimatesPerPoint;
@property (retain, nonatomic) NSArray *landmarkOcclusionFlagsPerPoint;
@property (retain, nonatomic) NSData *landmarkPoints3d;
@property (retain, nonatomic) NSData *poseData;
@property (nonatomic) float faceIdConfidence;
@property (retain, nonatomic) NSData *alignedMeanShape;
@property (retain, nonatomic) VNTorsoprint *torsoprint;
@property (retain, nonatomic) NSNumber *roll;
@property (retain, nonatomic) NSNumber *yaw;
@property (nonatomic) unsigned long long landmarksRequestRevision;
@property (nonatomic) unsigned long long landmarks3DRequestRevision;
@property (nonatomic, readonly) struct CGRect unalignedBoundingBox;
@property (nonatomic, readonly) VNFaceLandmarks3D *landmarks3d;
@property (nonatomic, readonly) VNFaceLandmarks2D *landmarks65;
@property (nonatomic, readonly) VNFaceRegionMap *faceRegionMap;
@property (nonatomic, readonly) VNFaceAttributes *faceAttributes;
@property (copy, nonatomic, readonly) NSDictionary *expressionsAndConfidence;
@property (nonatomic, readonly) CDStruct_f1db2b5e pose;
@property (nonatomic, readonly) struct poseQuaternion;
@property (nonatomic, readonly) float nameConfidence;
@property (nonatomic) unsigned long long faceId;
@property (retain, nonatomic) VNFaceprint *faceprint;
@property (retain, nonatomic) VNFaceTorsoprint *faceTorsoprint;
@property (nonatomic, readonly) VNFaceSegments *faceSegments;
@property (readonly) float blinkScore;
@property (nonatomic, readonly, getter=faceJunkinessIndex) float faceJunkinessIndex;
@property (nonatomic, readonly, getter=faceOrientationIndex) float faceOrientationIndex;
@property (nonatomic, readonly) NSNumber *faceCaptureQuality;

+ (_Bool)supportsSecureCoding;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2 andAlignedBoundingBox:(struct CGRect)arg3;
+ (_Bool)computeYawPitchRollFromPoseMatrix:(CDStruct_f1db2b5e)arg1 outputYaw:(float *)arg2 outputPitch:(float *)arg3 outputRoll:(float *)arg4;
+ (id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2;
+ (_Bool)_exifOrientationFromFaceRollAngle:(float)arg1 exifOrientation:(int *)arg2 error:(id *)arg3;
+ (id)faceObservationWithBoundingBox:(struct CGRect)arg1 andAlignedBoundingBox:(struct CGRect)arg2;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 unalignedBoundingBox:(struct CGRect)arg2 alignedBoundingBox:(struct CGRect)arg3;
+ (id)faceObservationWithBoundingBox:(struct CGRect)arg1 faceprint:(id)arg2;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2 faceprint:(id)arg3;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2 roll:(id)arg3 yaw:(id)arg4;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2 alignedBoundingBox:(struct CGRect)arg3 roll:(id)arg4 yaw:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initLocks;
- (id)VNPersonsModelFaceprintWithRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (_Bool)getComputedRectifyingTransform:(struct CGAffineTransform *)arg1;
- (void)setIsBlinking:(_Bool)arg1;
- (void)setBlinkScore:(float)arg1;
- (_Bool)isBlinking;
- (struct CGRect)alignedBoundingBoxAsCGRect;
- (void)setExpressionsAndScores:(id)arg1;
- (id)expressionsAndScores;
- (id)expressionsAndDetections;
- (void)setLandmarkScore:(float)arg1;
- (float)landmarkScore;
- (void)setFaceRegionMap:(id)arg1;
- (void)setFaceAttributes:(id)arg1;
- (void)setFaceSegments:(id)arg1;
- (void)setFaceCaptureQuality:(id)arg1;
- (void)setFaceJunkinessIndex:(float)arg1;
- (void)setFaceOrientationIndex:(float)arg1;
- (void)setUnalignedBoundingBox:(struct CGRect)arg1;
- (_Bool)getFaceEXIFOrientation:(int *)arg1 error:(id *)arg2;

@end
