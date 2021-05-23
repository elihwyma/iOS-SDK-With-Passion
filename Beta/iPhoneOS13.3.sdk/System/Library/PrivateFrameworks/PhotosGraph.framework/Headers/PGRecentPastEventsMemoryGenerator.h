/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate, NSMutableArray;

@interface PGRecentPastEventsMemoryGenerator : PGMemoryGenerator

{
    NSMutableArray *_potentialMemories;
    NSDate *_localDate;
}

@property (retain, nonatomic) NSDate *localDate;

- (id)initWithController:(id)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)_peopleSeenInPreviousWeekButNotInPreviousThreeMonthsWithLocalDate:(id)arg1;
- (id)_computePotentialMemoriesForPeopleNodes:(id)arg1;
- (id)_computePotentialMemoriesForSubcategory:(unsigned long long)arg1 withLocalStartDate:(id)arg2 localEndDate:(id)arg3;
- (void)_computePotentialMemories;
- (id)generateMemories:(unsigned long long)arg1;
- (id)_createMemoryDebugWithPotentialMemory:(id)arg1;

@end
