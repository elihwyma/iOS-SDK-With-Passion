/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSDate, NSMutableSet, NSString, PGGraphNode;

@interface PGPotentialAreaMemory : PGPotentialMemory

{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_areaNode;
    long long _year;
    NSArray *_assetsInArea;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly) PGGraphNode *areaNode;
@property (readonly) long long year;
@property (readonly) NSString *area;
@property (retain) NSArray *assetsInArea;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (void)addMomentNode:(id)arg1;
- (id)initWithAreaNode:(id)arg1 year:(long long)arg2;

@end
