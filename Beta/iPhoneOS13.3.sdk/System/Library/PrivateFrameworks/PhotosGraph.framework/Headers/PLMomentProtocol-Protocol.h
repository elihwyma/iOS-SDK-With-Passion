/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class CLLocation, NSDate;

@protocol PLMomentProtocol <Swift>

@property (nonatomic, readonly) NSDate *pl_startDate;
@property (nonatomic, readonly) NSDate *pl_endDate;
@property (nonatomic, readonly) unsigned long long pl_numberOfAssets;
@property (nonatomic, readonly) CLLocation *pl_location;
@property (nonatomic, readonly) struct CLLocationCoordinate2D pl_coordinate;

@end
