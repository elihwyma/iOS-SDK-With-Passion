/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class MLFeatureValue, NSString;

@interface VNCoreMLFeatureValueObservation : VNObservation

{
    MLFeatureValue *_featureValue;
    NSString *_featureName;
}

@property (copy, nonatomic, readonly) MLFeatureValue *featureValue;
@property (copy, nonatomic, readonly) NSString *featureName;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 featureName:(id)arg2 featureValue:(id)arg3;

@end
