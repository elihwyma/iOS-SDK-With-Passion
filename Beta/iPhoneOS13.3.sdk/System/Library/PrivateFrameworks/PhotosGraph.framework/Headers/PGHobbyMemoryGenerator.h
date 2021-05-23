/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGHobbyMemoryGenerator : PGFeaturedMemoryGenerator

{
    _Bool _onlyOverTheYears;
    _Bool _keepsOnlyIsInteresting;
    long long _hobbyType;
}

@property (nonatomic) long long hobbyType;
@property (nonatomic) _Bool onlyOverTheYears;
@property (nonatomic) _Bool keepsOnlyIsInteresting;

- (id)confidenceThresholdByWhitelistedSceneIdentifier;
- (id)confidenceThresholdByBlacklistedSceneIdentifier;
- (void)_potentialHobbyMemoryForHobby:(id)arg1 results:(CDUnknownBlockType)arg2;
- (void)_randomEnumerateOverLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 rejectedNumbers:(CDStruct_e4f06a70 *)arg3 enumerationBlock:(CDUnknownBlockType)arg4;
- (void)_enumerateBestPotentialMemoriesInLifeTimePotentialMemories:(id)arg1 andYearPotentialMemories:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;

@end
