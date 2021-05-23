/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSArray;

@interface PGKeyPeopleForHolidayMemoryGenerator : PGFeaturedMemoryGenerator

{
    NSArray *_holidayRules;
}

@property (retain, nonatomic) NSArray *holidayRules;

- (id)_potentialMemoriesForDryTesting;
- (id)generateMemories:(unsigned long long)arg1;

@end
