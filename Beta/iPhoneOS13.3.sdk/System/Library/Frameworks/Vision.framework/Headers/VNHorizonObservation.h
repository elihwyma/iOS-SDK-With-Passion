/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@interface VNHorizonObservation : VNObservation

{
    struct CGAffineTransform _transform;
    double _angle;
}

@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) double angle;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
