/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MiroRandomNumberGenerator : NSObject

{
    unsigned long long _seed;
    unsigned long long _index;
}

@property (nonatomic) unsigned long long index;
@property unsigned long long seed;

+ (double)mapValue:(double)arg1 fromRangeStart:(double)arg2 fromRangeEnd:(double)arg3 toRangeStart:(double)arg4 toRangeEnd:(double)arg5 clamp:(_Bool)arg6;
+ (id)randomNumberGeneratorWithSeed:(unsigned long long)arg1;

- (double)randomNumberBetweenZeroAndOne;
- (double)randomNumberWithinRangeStart:(double)arg1 rangeEnd:(double)arg2;

@end
