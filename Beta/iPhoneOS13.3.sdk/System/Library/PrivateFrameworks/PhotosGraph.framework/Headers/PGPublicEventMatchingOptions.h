/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, PGGraphMomentNode, PGMeaningfulEventMatchingCriteria;

@protocol CLSTimeLocationTuple;

@interface PGPublicEventMatchingOptions : NSObject

{
    id <CLSTimeLocationTuple> _timeLocationTuple;
    PGGraphMomentNode *_momentNode;
    NSDateInterval *_actualAttendanceDateInterval;
    NSDateInterval *_expandedAttendanceDateInterval;
    PGMeaningfulEventMatchingCriteria *_matchingCriteria;
    struct CLLocationCoordinate2D _coordinates;
}

@property (nonatomic, readonly) id <CLSTimeLocationTuple> timeLocationTuple;
@property (nonatomic, readonly) PGGraphMomentNode *momentNode;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinates;
@property (nonatomic, readonly) NSDateInterval *actualAttendanceDateInterval;
@property (nonatomic, readonly) NSDateInterval *expandedAttendanceDateInterval;
@property (nonatomic, readonly) PGMeaningfulEventMatchingCriteria *matchingCriteria;

- (id)initWithTimeLocationTuple:(id)arg1 momentNode:(id)arg2;
- (void)_createAttendanceDateIntervals;

@end
