/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, NSSet, NSString;

@interface PGPotentialMeaningfulEventAggregationMemory : PGPotentialMemory

{
    NSMutableSet *_meaningfulEvents;
    NSMutableSet *_mutableMomentNodes;
    unsigned long long _meaning;
    NSString *_key;
    NSArray *_relevantAssets;
}

@property (readonly) unsigned long long meaning;
@property (retain, nonatomic) NSSet *meaningfulEvents;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *relevantAssets;

- (double)score;
- (id)peopleUUIDs;
- (id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2;
- (void)addMeaningfulEvent:(id)arg1 controller:(id)arg2;

@end
