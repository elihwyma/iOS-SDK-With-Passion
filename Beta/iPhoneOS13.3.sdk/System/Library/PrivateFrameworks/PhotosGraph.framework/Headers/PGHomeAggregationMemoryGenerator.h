/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGHomeAggregationMemoryGenerator : PGFeaturedMemoryGenerator

{
    NSDate *_localDate;
}

@property (retain, nonatomic) NSDate *localDate;

+ (id)_monthNodeForMomentNode:(id)arg1;
+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)arg1;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)_lastMonthPotentialMemory;

@end
