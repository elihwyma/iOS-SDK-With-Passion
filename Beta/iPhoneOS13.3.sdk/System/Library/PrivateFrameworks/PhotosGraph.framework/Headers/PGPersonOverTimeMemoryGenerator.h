/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPersonOverTimeMemoryGenerator : PGFeaturedMemoryGenerator

{
    unsigned long long _numberOfInsufficientlyFacedRejects;
    unsigned long long _numberOfBuildFailureRejects;
    NSString *_personUUID;
}

@property (retain, nonatomic) NSString *personUUID;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (id)_computeOverTheTimeFacedAssetsForPersonWithUUID:(id)arg1 inFacedAssets:(id)arg2;

@end
