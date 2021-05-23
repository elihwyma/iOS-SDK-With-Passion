/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface VNFaceLandmarks : NSObject

{
    float _confidence;
    unsigned long long _pointCount;
    NSData *_pointsData;
    struct _Geometry2D_rect2D_ _alignedBBox;
    struct CGRect _userFacingBBox;
    unsigned long long _requestRevision;
}

@property (retain) NSData *pointsData;
@property struct _Geometry2D_rect2D_ alignedBBox;
@property struct CGRect userFacingBBox;
@property unsigned long long pointCount;
@property (readonly) float confidence;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void *)_createPointArray:(const int *)arg1 count:(unsigned long long)arg2;
- (_Bool)isUserFacingBBoxEquivalentToAlignedBBox;
- (id)initWithRequestRevision:(unsigned long long)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 userFacingBBox:(struct CGRect)arg4 alignedBBox:(struct _Geometry2D_rect2D_)arg5 landmarkScore:(float)arg6;

@end
