/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@interface PGSocialGroupOverTimeMemoryGenerator : PGFeaturedMemoryGenerator

{
    unsigned long long _numberOfInsufficientlyFacedRejects;
    unsigned long long _numberOfBuildFailureRejects;
    long long _socialGroupID;
}

@property (nonatomic) long long socialGroupID;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (id)_computeOverTheTimeFacedAssetsForPersonUUIDs:(id)arg1 inFacedAssets:(id)arg2;

@end
