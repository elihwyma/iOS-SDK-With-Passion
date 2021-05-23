/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSDate, NSDateInterval, NSSet, NSString, PGGraphAddressNode;

@interface PGGraphFrequentLocationNode : PGGraphNode

{
    NSDateInterval *_localDateInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct CLLocationCoordinate2D coordinate;
@property (readonly) NSDateInterval *dateInterval;
@property (readonly) NSSet *items;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSDateInterval *localDateInterval;
@property (readonly) PGGraphAddressNode *addressNode;
@property (readonly) NSSet *momentNodes;
@property (readonly) unsigned long long numberOfMomentNodes;

- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
