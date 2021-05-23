/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceBusinessMemoryGenerator : PGFeaturedMemoryGenerator

{
    NSString *_business;
    long long _year;
}

@property (nonatomic) NSString *business;
@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (void)_potentialMemoriesWithBusinessNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end
