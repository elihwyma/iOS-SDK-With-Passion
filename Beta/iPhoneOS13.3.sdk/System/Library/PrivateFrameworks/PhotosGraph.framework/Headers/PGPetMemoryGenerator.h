/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGPetMemoryGenerator : PGFeaturedMemoryGenerator

- (id)confidenceThresholdByWhitelistedSceneIdentifier;
- (id)confidenceThresholdByBlacklistedSceneIdentifier;
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(CDStruct_e4f06a70 *)arg3 enumerationBlock:(CDUnknownBlockType)arg4;
- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialPetMemoryForPet:(id)arg1 results:(CDUnknownBlockType)arg2;

@end
