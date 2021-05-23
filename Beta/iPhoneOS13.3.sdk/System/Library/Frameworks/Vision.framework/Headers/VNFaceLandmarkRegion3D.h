/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNFaceLandmarkRegion.h>

@class MISSING_TYPE;

@interface VNFaceLandmarkRegion3D : VNFaceLandmarkRegion

{
    const MISSING_TYPE **_points;
}

@property const MISSING_TYPE **points;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(struct CGRect)arg2;
- (MISSING_TYPE *)pointAtIndex:(unsigned long long)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(struct CGRect)arg2 points:(MISSING_TYPE **)arg3 pointCount:(unsigned long long)arg4;

@end
