/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNFaceLandmarkRegion.h>

@class MISSING_TYPE, NSArray, NSMutableDictionary;

@interface VNFaceLandmarkRegion2D : VNFaceLandmarkRegion

{
    NSMutableDictionary *_sizedPointsCache;
    struct os_unfair_lock_s _pointsCalculatorLock;
    MISSING_TYPE **_points;
    NSArray *_precisionEstimatesPerPoint;
    NSArray *_occlusionFlagsPerPoint;
}

@property (readonly) const MISSING_TYPE **points;
@property (readonly) NSArray *occlusionFlagsPerPoint;
@property (readonly) const struct CGPoint *normalizedPoints;
@property (readonly) NSArray *precisionEstimatesPerPoint;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const struct CGPoint *)pointsInImageOfSize:(struct CGSize)arg1;
- (void)_initLocks;
- (id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(struct CGRect)arg2;
- (MISSING_TYPE *)pointAtIndex:(unsigned long long)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(struct CGRect)arg2 points:(MISSING_TYPE **)arg3 pointCount:(unsigned long long)arg4 precisionEstimatesPerPoint:(id)arg5 occlusionFlagsPerPoint:(id)arg6;

@end
