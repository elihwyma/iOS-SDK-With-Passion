/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet, NSString;

@interface PGPeopleMemoryGenerator : PGFeaturedMemoryGenerator

{
    NSString *_peopleUUID;
    NSSet *_peopleNodes;
    NSSet *_birthdayPersonUUIDs;
    long long _year;
    NSSet *_extraFeatures;
}

@property (retain, nonatomic) NSString *peopleUUID;
@property (retain, nonatomic) NSSet *peopleNodes;
@property (retain, nonatomic) NSSet *birthdayPersonUUIDs;
@property (nonatomic) long long year;
@property (nonatomic) NSSet *extraFeatures;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoriesWithPeopleNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;
- (_Bool)_upcomingBirthdayWillCollideWithPotentialMemory:(id)arg1;

@end
