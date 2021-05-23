/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKRandomDistribution.h>

@interface GKShuffledDistribution : GKRandomDistribution

{
    long long _delta;
    float _uniformDistance;
    long long _lastInt;
    long long _nextIntsCapacity;
    long long _nextIntsCount;
    long long *_nextInts;
}

- (void)dealloc;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (long long)nextInt;
- (float)uniformDistance;
- (void)setUniformDistance:(float)arg1;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 delta:(long long)arg4;

@end
