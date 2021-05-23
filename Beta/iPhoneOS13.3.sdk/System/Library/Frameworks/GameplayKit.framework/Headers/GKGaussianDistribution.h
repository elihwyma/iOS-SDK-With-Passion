/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKRandomDistribution.h>

@interface GKGaussianDistribution : GKRandomDistribution

{
    float _mean;
    float _deviation;
}

@property (nonatomic, readonly) float mean;
@property (nonatomic, readonly) float deviation;

- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (long long)nextInt;
- (id)initWithRandomSource:(id)arg1 mean:(float)arg2 deviation:(float)arg3;

@end
