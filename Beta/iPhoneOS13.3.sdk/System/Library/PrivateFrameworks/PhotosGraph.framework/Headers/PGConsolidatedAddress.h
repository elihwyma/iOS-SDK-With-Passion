/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, PGGraphAddressNode;

@interface PGConsolidatedAddress : NSObject

{
    PGGraphAddressNode *_addressNode;
    NSArray *_addressEdgesSortedByTime;
    NSDate *_startDate;
    double _duration;
    NSDate *_expandedStartDate;
    NSDate *_expandedEndDate;
    NSString *_timeLocationIdentifier;
    struct CLLocationCoordinate2D _centerCoordinates;
}

@property (nonatomic, readonly) PGGraphAddressNode *addressNode;
@property (nonatomic, readonly) NSArray *addressEdgesSortedByTime;
@property (nonatomic, readonly) struct CLLocationCoordinate2D centerCoordinates;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *timeLocationIdentifier;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinates;
@property (nonatomic, readonly) NSDate *expandedStartDate;
@property (nonatomic, readonly) NSDate *expandedEndDate;

- (_Bool)isEqual:(id)arg1;
- (id)initWithAddressNode:(id)arg1 addressEdgesSortedByTime:(id)arg2 centerCoordinates:(struct CLLocationCoordinate2D)arg3;

@end
