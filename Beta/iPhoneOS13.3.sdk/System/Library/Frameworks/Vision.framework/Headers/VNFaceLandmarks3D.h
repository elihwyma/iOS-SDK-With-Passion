/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNFaceLandmarks.h>

@class VNFaceLandmarkRegion3D;

@interface VNFaceLandmarks3D : VNFaceLandmarks

{
    VNFaceLandmarkRegion3D *_allPoints;
    struct os_unfair_lock_s _allPointsLock;
    VNFaceLandmarkRegion3D *_faceContour;
    struct os_unfair_lock_s _faceContourLock;
    VNFaceLandmarkRegion3D *_leftEye;
    struct os_unfair_lock_s _leftEyeLock;
    VNFaceLandmarkRegion3D *_rightEye;
    struct os_unfair_lock_s _rightEyeLock;
    VNFaceLandmarkRegion3D *_leftEyebrow;
    struct os_unfair_lock_s _leftEyebrowLock;
    VNFaceLandmarkRegion3D *_rightEyebrow;
    struct os_unfair_lock_s _rightEyebrowLock;
    VNFaceLandmarkRegion3D *_nose;
    struct os_unfair_lock_s _noseLock;
    VNFaceLandmarkRegion3D *_noseCrest;
    struct os_unfair_lock_s _noseCrestLock;
    VNFaceLandmarkRegion3D *_medianLine;
    struct os_unfair_lock_s _medianLineLock;
    VNFaceLandmarkRegion3D *_outerLips;
    struct os_unfair_lock_s _outerLipsLock;
    VNFaceLandmarkRegion3D *_innerLips;
    struct os_unfair_lock_s _innerLipsLock;
}

@property (readonly) VNFaceLandmarkRegion3D *allPoints;
@property (readonly) VNFaceLandmarkRegion3D *faceContour;
@property (readonly) VNFaceLandmarkRegion3D *leftEye;
@property (readonly) VNFaceLandmarkRegion3D *rightEye;
@property (readonly) VNFaceLandmarkRegion3D *leftEyebrow;
@property (readonly) VNFaceLandmarkRegion3D *rightEyebrow;
@property (readonly) VNFaceLandmarkRegion3D *nose;
@property (readonly) VNFaceLandmarkRegion3D *noseCrest;
@property (readonly) VNFaceLandmarkRegion3D *medianLine;
@property (readonly) VNFaceLandmarkRegion3D *outerLips;
@property (readonly) VNFaceLandmarkRegion3D *innerLips;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initLocks;
- (void *)_createPointArray:(const int *)arg1 count:(unsigned long long)arg2;
- (id)initWithRequestRevision:(unsigned long long)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 userFacingBBox:(struct CGRect)arg4 alignedBBox:(struct _Geometry2D_rect2D_)arg5 landmarkScore:(float)arg6;

@end
