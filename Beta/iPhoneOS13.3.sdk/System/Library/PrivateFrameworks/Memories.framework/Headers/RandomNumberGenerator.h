/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface RandomNumberGenerator : NSObject

{
    unsigned long long _seed;
    unsigned long long _index;
}

@property (nonatomic) unsigned long long index;
@property unsigned long long seed;

+ (id)randomNumberGeneratorWithSeed:(unsigned long long)arg1;

- (double)randomNumberBetweenZeroAndOne;
- (double)randomNumberWithinRangeStart:(double)arg1 rangeEnd:(double)arg2;

@end
