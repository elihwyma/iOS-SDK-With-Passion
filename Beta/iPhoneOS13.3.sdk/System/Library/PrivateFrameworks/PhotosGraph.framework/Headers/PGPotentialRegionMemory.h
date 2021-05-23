/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSDate, NSMutableSet, NSString, PGGraphNode;

@interface PGPotentialRegionMemory : PGPotentialMemory

{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_regionNode;
    long long _year;
    NSArray *_scenedAssets;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly) PGGraphNode *regionNode;
@property (readonly) long long year;
@property (readonly) NSString *region;
@property (retain) NSArray *scenedAssets;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (void)addMomentNode:(id)arg1;
- (id)initWithRegionNode:(id)arg1 year:(long long)arg2;

@end
