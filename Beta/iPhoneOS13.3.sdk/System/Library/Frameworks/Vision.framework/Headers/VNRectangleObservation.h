/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetectedObjectObservation.h>

@interface VNRectangleObservation : VNDetectedObjectObservation

{
    struct CGPoint _topLeft;
    struct CGPoint _bottomLeft;
    struct CGPoint _bottomRight;
    struct CGPoint _topRight;
}

@property (nonatomic, readonly) struct CGPoint topLeft;
@property (nonatomic, readonly) struct CGPoint topRight;
@property (nonatomic, readonly) struct CGPoint bottomLeft;
@property (nonatomic, readonly) struct CGPoint bottomRight;

+ (_Bool)supportsSecureCoding;
+ (id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2;
+ (id)rectangleObservationWithRequestRevision:(unsigned long long)arg1 topLeft:(struct CGPoint)arg2 bottomLeft:(struct CGPoint)arg3 bottomRight:(struct CGPoint)arg4 topRight:(struct CGPoint)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopLeft:(struct CGPoint)arg1 bottomLeft:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 topRight:(struct CGPoint)arg4;
- (_Bool)excludesBoundingBoxFromCoding;
- (void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4;
- (id)initWithRequestRevision:(unsigned long long)arg1 topLeft:(struct CGPoint)arg2 bottomLeft:(struct CGPoint)arg3 bottomRight:(struct CGPoint)arg4 topRight:(struct CGPoint)arg5;
- (id)initWithBoundingBox:(struct CGRect)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2;

@end
