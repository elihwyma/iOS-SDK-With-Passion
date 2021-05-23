/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGEarlyMomentsWithPeopleMemoryGenerator : PGMemoryGenerator

{
    _Bool _shouldGenerateAllMemories;
    NSDate *_localDate;
}

@property (retain, nonatomic) NSDate *localDate;
@property (nonatomic) _Bool shouldGenerateAllMemories;

+ (unsigned long long)numberOfPotentialMemoriesForGraph:(id)arg1;
+ (id)earlyMomentsByPeopleNodes:(id)arg1;

- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;

@end
