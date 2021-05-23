/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class NSUUID;

@interface VNDetectedObjectObservation : VNObservation

{
    struct CGRect _boundingBox;
    NSUUID *_identifier;
}

@property (nonatomic) struct CGRect boundingBox;
@property (copy) NSUUID *identifier;

+ (_Bool)supportsSecureCoding;
+ (id)observationWithBoundingBox:(struct CGRect)arg1;
+ (id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (_Bool)excludesBoundingBoxFromCoding;
- (void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4;

@end
