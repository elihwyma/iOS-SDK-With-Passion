/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <Foundation/NSObject.h>

@protocol GKRandom;

@interface GKRandomDistribution : NSObject

{
    id <GKRandom> _source;
    long long _lowest;
    long long _highest;
}

@property (nonatomic, readonly) long long lowestValue;
@property (nonatomic, readonly) long long highestValue;
@property (nonatomic, readonly) unsigned long long numberOfPossibleOutcomes;

+ (id)distributionWithLowestValue:(long long)arg1 highestValue:(long long)arg2;
+ (id)distributionForDieWithSideCount:(long long)arg1;
+ (id)d6;
+ (id)d20;

- (id)init;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (long long)nextInt;
- (float)nextUniform;
- (_Bool)nextBool;

@end
