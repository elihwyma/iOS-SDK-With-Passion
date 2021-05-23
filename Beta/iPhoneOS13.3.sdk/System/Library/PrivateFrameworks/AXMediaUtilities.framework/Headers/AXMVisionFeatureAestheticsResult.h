/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@interface AXMVisionFeatureAestheticsResult : NSObject

{
    float _aestheticScore;
    float _wellFramedSubjectScore;
    float _pleasantCompositionScore;
    float _wellChosenBackgroundScore;
    float _noiseScore;
    float _failureScore;
}

@property (nonatomic, readonly) float aestheticScore;
@property (nonatomic, readonly) float wellFramedSubjectScore;
@property (nonatomic, readonly) float pleasantCompositionScore;
@property (nonatomic, readonly) float wellChosenBackgroundScore;
@property (nonatomic, readonly) float noiseScore;
@property (nonatomic, readonly) float failureScore;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisionAestheticsObservation:(id)arg1;

@end
