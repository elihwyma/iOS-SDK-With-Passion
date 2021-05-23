/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSDate, NSString;

@protocol CLSTimeLocationTuple <Swift>

@property (nonatomic, readonly) NSString *timeLocationIdentifier;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinates;
@property (nonatomic, readonly) NSDate *expandedStartDate;
@property (nonatomic, readonly) NSDate *expandedEndDate;

@end
