/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class VNImageRegistrationSignature;

@interface VNImageAlignmentObservation : VNObservation

{
    VNImageRegistrationSignature *_referenceImageSignature;
    VNImageRegistrationSignature *_floatingImageSignature;
}

@property (retain, nonatomic) VNImageRegistrationSignature *referenceImageSignature;
@property (retain, nonatomic) VNImageRegistrationSignature *floatingImageSignature;
@property (nonatomic) struct CGAffineTransform alignmentTransform;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
