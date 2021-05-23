/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageAlignmentObservation.h>

@interface VNImageTranslationAlignmentObservation : VNImageAlignmentObservation

{
    struct CGAffineTransform _alignmentTransform;
}

@property (nonatomic) struct CGAffineTransform alignmentTransform;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
