/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMemoryGenerator.h>

@interface PGYearSummaryMemoryGenerator : PGMemoryGenerator

{
    long long _year;
}

@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;

@end
