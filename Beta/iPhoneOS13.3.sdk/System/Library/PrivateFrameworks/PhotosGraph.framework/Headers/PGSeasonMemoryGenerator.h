/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGSeasonMemoryGenerator : PGMemoryGenerator

{
    NSDate *_localDate;
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *localDate;

+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)arg1;
+ (_Bool)isMoment:(id)arg1 duringSeason:(id)arg2;
+ (id)seasonNodeForMomentNode:(id)arg1;

- (id)initWithController:(id)arg1;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (void)lastSeasonMomentNodesForLocalDate:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)seasonInHistoryMomentNodesForLocalDate:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)_potentialMemoryForMomentNodes:(id)arg1 seasonNode:(id)arg2 category:(unsigned long long)arg3;
- (id)_lastSeasonPotentialMemory;
- (id)_seasonInHistoryPotentialMemories;

@end
