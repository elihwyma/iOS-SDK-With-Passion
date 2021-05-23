/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKRandomSource.h>

@interface GKLinearCongruentialRandomSource : GKRandomSource

{
    unsigned long long _seed;
}

@property (nonatomic) unsigned long long seed;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (id)initWithSeed:(unsigned long long)arg1;
- (unsigned long long)nextBits:(int)arg1;
- (long long)nextInt;
- (float)nextUniform;
- (_Bool)nextBool;

@end
