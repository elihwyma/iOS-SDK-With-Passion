/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSDate;

@protocol GEOTransitTimeRange <Swift>

@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

- (unsigned short)contains: /* Error: Ran out of types for this method. */;

@end
