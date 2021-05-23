/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGDayInHistoryMemoryGenerator : PGMemoryGenerator

{
    NSDate *_localDate;
}

@property (retain, nonatomic) NSDate *localDate;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;

@end
