/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class NSNumber;

@interface VNImageScoreObservation : VNObservation

{
    NSNumber *_blurScore;
    NSNumber *_exposureScore;
}

@property (retain, nonatomic) NSNumber *blurScore;
@property (retain, nonatomic) NSNumber *exposureScore;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
