/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGMoodVector : NSObject

{
    double _vector[10];
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (void)normalize;
- (double)sum;
- (double)valueForMood:(unsigned long long)arg1;
- (void)addValue:(double)arg1 forMoods:(unsigned long long)arg2;
- (void)addValue:(double)arg1 forMood:(unsigned long long)arg2;
- (void)setValue:(double)arg1 forMood:(unsigned long long)arg2;
- (void)multiplyByWeight:(double)arg1 forMood:(unsigned long long)arg2;
- (void)addMoodVector:(id)arg1;
- (void)substractMoodVector:(id)arg1;
- (void)multiplyMoodVector:(id)arg1;
- (void)multiplyByWeight:(double)arg1;
- (void)filterWithMoods:(unsigned long long)arg1;
- (unsigned long long)moodsWithThreshold:(double)arg1;
- (unsigned long long)weightedRandomMoodWithSeed:(unsigned long long)arg1;
- (id)moodArray;

@end
