/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGThrowbackThursdayMemoryGenerator : PGFeaturedMemoryGenerator

{
    NSDate *_localDate;
}

@property (retain) NSDate *localDate;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)_oldWeekInHistoryMomentNodesForLocalDate:(id)arg1;

@end
