/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet, NSString;

@interface PGPlaceAreaMemoryGenerator : PGFeaturedMemoryGenerator

{
    NSSet *_supersetAddressNodes;
    NSString *_area;
    long long _year;
}

@property (nonatomic) NSString *area;
@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoriesWithAreaNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end
