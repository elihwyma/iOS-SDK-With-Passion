/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, NSMutableArray, NSMutableSet, PGGraphLocationNode;

@interface PGPastSupersetGroup : NSObject

{
    NSMutableArray *_moments;
    NSDateInterval *_dateInterval;
    NSMutableSet *_supersetCityNodes;
    NSMutableSet *_densestCloseLocationNodes;
    PGGraphLocationNode *_stateNode;
}

@property (retain) NSMutableArray *moments;
@property (retain) NSDateInterval *dateInterval;
@property (retain) NSMutableSet *supersetCityNodes;
@property (retain) NSMutableSet *densestCloseLocationNodes;
@property (retain) PGGraphLocationNode *stateNode;

+ (id)pastSupersetGroupWithMoments:(id)arg1 dateInterval:(id)arg2 supersetCityNode:(id)arg3 densestCloseLocationNode:(id)arg4;

@end
