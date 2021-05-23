/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AWDHistogram : NSObject

{
    unsigned int *histogram;
    unsigned int *buckets;
    float *floatBuckets;
    unsigned int size;
}

- (void)dealloc;
- (id)array;
- (void)reset;
- (void)addValue:(unsigned int)arg1;
- (void)print;
- (void)addValue:(unsigned int)arg1 withIncrements:(unsigned int)arg2;
- (id)initWithBuckets:(unsigned int *)arg1 size:(unsigned int)arg2;
- (id)initWithFloatBuckets:(float *)arg1 size:(unsigned int)arg2;
- (void)addFloatValue:(float)arg1;
- (void)reduceFrequencyByFactor:(unsigned int)arg1;
- (id)newArray;

@end
