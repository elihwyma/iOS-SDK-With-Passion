/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSString;

@protocol GEOMapTransitStop;

@protocol GEOMapTransitLink <Swift>

@property (nonatomic, readonly) unsigned long long transitLineID;
@property (nonatomic, readonly) NSString *internalLineName;
@property (nonatomic, readonly) unsigned int minimumTravelTime;
@property (nonatomic, readonly) id <GEOMapTransitStop> stopFrom;
@property (nonatomic, readonly) id <GEOMapTransitStop> stopTo;

- (unsigned short)distanceInMetersFrom:outClosestCoordinateOnLine: /* Error: Ran out of types for this method. */;

@end
