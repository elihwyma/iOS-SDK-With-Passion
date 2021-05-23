/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGPastSupersetMemoryGenerator : PGFeaturedMemoryGenerator

{
    NSDate *_localDate;
}

@property (retain, nonatomic) NSDate *localDate;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoryAssetsForSupersetLocationNodes:(id)arg1 interestingMomentNodes:(id)arg2 andMomentNodes:(id)arg3 result:(CDUnknownBlockType)arg4;

@end
