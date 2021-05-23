/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGCrowdMemoryGenerator : PGFeaturedMemoryGenerator

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;

@end
