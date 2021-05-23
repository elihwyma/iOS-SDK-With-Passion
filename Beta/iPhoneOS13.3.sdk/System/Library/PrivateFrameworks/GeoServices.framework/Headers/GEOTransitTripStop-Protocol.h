/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOLatLng, GEOStyleAttributes, NSArray, NSString, NSTimeZone;

@protocol GEOTransitDeparture;

@protocol GEOTransitTripStop <Swift>

@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) id <GEOTransitDeparture> departure;
@property (nonatomic, readonly) unsigned long long stationIdentifier;
@property (nonatomic, readonly) GEOLatLng *location;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;

@end
