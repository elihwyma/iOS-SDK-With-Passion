/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet;

@interface PGSocialGroupMemoryGenerator : PGFeaturedMemoryGenerator

{
    long long _socialGroupID;
    long long _year;
    NSSet *_extraFeatures;
}

@property (nonatomic) long long socialGroupID;
@property (nonatomic) long long year;
@property (nonatomic) NSSet *extraFeatures;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoriesWithSocialGroupNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end
