/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageAlignmentObservation.h>

@interface VNImageHomographicAlignmentObservation : VNImageAlignmentObservation

{
    CDStruct_8e0628e6 _warpTransform;
}

@property (nonatomic) CDStruct_8e0628e6 warpTransform;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
