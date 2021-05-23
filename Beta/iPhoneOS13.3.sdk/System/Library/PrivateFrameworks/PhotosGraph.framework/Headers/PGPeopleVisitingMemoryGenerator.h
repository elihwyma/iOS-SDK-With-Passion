/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGPeopleVisitingMemoryGenerator : PGFeaturedMemoryGenerator

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (void)enumerateVerifiedPeopleNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)consolidatedDateIntervalsFromDateIntervals:(id)arg1;
- (void)enumeratePeopleAndVisitsUsingBlock:(CDUnknownBlockType)arg1;

@end
