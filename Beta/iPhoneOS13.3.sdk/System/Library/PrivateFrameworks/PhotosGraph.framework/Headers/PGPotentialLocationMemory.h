/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSDate, NSMutableSet, NSString, PGGraphNode;

@interface PGPotentialLocationMemory : PGPotentialMemory

{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_cityNode;
    long long _year;
    NSArray *_assetsInCity;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly) PGGraphNode *cityNode;
@property (readonly) long long year;
@property (readonly) NSString *city;
@property (retain) NSArray *assetsInCity;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (void)addMomentNode:(id)arg1;
- (id)initWithCityNode:(id)arg1 year:(long long)arg2;

@end
