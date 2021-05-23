/*
 Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

#import <GameplayKit/GKRandomSource.h>

@class NSData;

@interface GKARC4RandomSource : GKRandomSource

{
    struct Arc4State *_state;
    NSData *_seed;
}

@property (copy, nonatomic) NSData *seed;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (id)initWithSeed:(id)arg1;
- (unsigned long long)nextBits:(int)arg1;
- (long long)nextInt;
- (float)nextUniform;
- (_Bool)nextBool;
- (void)dropValuesWithCount:(unsigned long long)arg1;

@end
