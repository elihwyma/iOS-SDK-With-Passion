/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGBestOfPastMemoryGenerator : PGMemoryGenerator

{
    NSDate *_localStartDate;
    NSDate *_localEndDate;
}

@property (nonatomic) NSDate *localStartDate;
@property (nonatomic) NSDate *localEndDate;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;

@end
