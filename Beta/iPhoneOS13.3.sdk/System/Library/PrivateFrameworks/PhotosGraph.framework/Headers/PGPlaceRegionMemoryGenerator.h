/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceRegionMemoryGenerator : PGFeaturedMemoryGenerator

{
    NSString *_region;
    long long _year;
}

@property (nonatomic) NSString *region;
@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoriesWithRegionNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end
