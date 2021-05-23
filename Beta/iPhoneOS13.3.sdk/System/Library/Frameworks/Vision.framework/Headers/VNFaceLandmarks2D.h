/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNFaceLandmarks.h>

@class NSArray, VNFaceLandmarkRegion2D;

@interface VNFaceLandmarks2D : VNFaceLandmarks

{
    VNFaceLandmarkRegion2D *_allPoints;
    struct os_unfair_lock_s _allPointsLock;
    VNFaceLandmarkRegion2D *_faceContour;
    struct os_unfair_lock_s _faceContourLock;
    VNFaceLandmarkRegion2D *_leftEye;
    struct os_unfair_lock_s _leftEyeLock;
    VNFaceLandmarkRegion2D *_rightEye;
    struct os_unfair_lock_s _rightEyeLock;
    VNFaceLandmarkRegion2D *_leftEyebrow;
    struct os_unfair_lock_s _leftEyebrowLock;
    VNFaceLandmarkRegion2D *_rightEyebrow;
    struct os_unfair_lock_s _rightEyebrowLock;
    VNFaceLandmarkRegion2D *_nose;
    struct os_unfair_lock_s _noseLock;
    VNFaceLandmarkRegion2D *_noseCrest;
    struct os_unfair_lock_s _noseCrestLock;
    VNFaceLandmarkRegion2D *_medianLine;
    struct os_unfair_lock_s _medianLineLock;
    VNFaceLandmarkRegion2D *_outerLips;
    struct os_unfair_lock_s _outerLipsLock;
    VNFaceLandmarkRegion2D *_innerLips;
    struct os_unfair_lock_s _innerLipsLock;
    VNFaceLandmarkRegion2D *_leftPupil;
    struct os_unfair_lock_s _leftPupilLock;
    VNFaceLandmarkRegion2D *_rightPupil;
    struct os_unfair_lock_s _rightPupilLock;
    unsigned long long _constellation;
    NSArray *_precisionEstimatesPerPoint;
    NSArray *_occlusionFlagsPerPoint;
}

@property unsigned long long constellation;
@property (retain) NSArray *precisionEstimatesPerPoint;
@property (retain) NSArray *occlusionFlagsPerPoint;
@property (readonly) VNFaceLandmarkRegion2D *allPoints;
@property (readonly) VNFaceLandmarkRegion2D *faceContour;
@property (readonly) VNFaceLandmarkRegion2D *leftEye;
@property (readonly) VNFaceLandmarkRegion2D *rightEye;
@property (readonly) VNFaceLandmarkRegion2D *leftEyebrow;
@property (readonly) VNFaceLandmarkRegion2D *rightEyebrow;
@property (readonly) VNFaceLandmarkRegion2D *nose;
@property (readonly) VNFaceLandmarkRegion2D *noseCrest;
@property (readonly) VNFaceLandmarkRegion2D *medianLine;
@property (readonly) VNFaceLandmarkRegion2D *outerLips;
@property (readonly) VNFaceLandmarkRegion2D *innerLips;
@property (readonly) VNFaceLandmarkRegion2D *leftPupil;
@property (readonly) VNFaceLandmarkRegion2D *rightPupil;

+ (_Bool)supportsSecureCoding;
+ (id)_createNSArrayFrom:(id)arg1 withPointIndices:(const int *)arg2 andPointCount:(unsigned long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initLocks;
- (void *)_createPointArray:(const int *)arg1 count:(unsigned long long)arg2;
- (id)initWithRequestRevision:(unsigned long long)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 constellation:(unsigned long long)arg4 precisionEstimatesPerPoint:(id)arg5 occlusionFlagsPerPoint:(id)arg6 userFacingBBox:(struct CGRect)arg7 alignedBBox:(struct _Geometry2D_rect2D_)arg8 landmarkScore:(float)arg9;
- (id)_createFaceLandmarks2DRegionFromPointIndexes:(const int *)arg1 andPointCount:(unsigned long long)arg2;

@end
