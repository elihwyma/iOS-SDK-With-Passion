/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEOMapTransitAccessPoint <Swift>

@property (nonatomic, readonly) unsigned long long stationID;
@property (nonatomic, readonly) double groundRadius;
@property (nonatomic, readonly) unsigned char entranceExitType;
@property (nonatomic, readonly) unsigned short accessType;

- (unsigned short)findStops:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)findStation:completionHandler: /* Error: Ran out of types for this method. */;

@end
