/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceLocationMemoryGenerator : PGFeaturedMemoryGenerator

{
    NSString *_city;
    long long _year;
}

@property (nonatomic) NSString *city;
@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoriesWithCityNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end
