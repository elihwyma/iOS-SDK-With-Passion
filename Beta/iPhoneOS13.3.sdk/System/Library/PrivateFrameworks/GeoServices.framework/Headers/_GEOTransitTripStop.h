/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOLatLng, GEOStyleAttributes, NSArray, NSString, NSTimeZone;

@protocol GEOTransitDeparture;

__attribute__((visibility("hidden")))
@interface _GEOTransitTripStop : NSObject

{
    NSTimeZone *_timeZone;
    unsigned long long _stationIdentifier;
    NSString *_transitName;
    NSArray *_labelItems;
    GEOLatLng *_location;
    GEOStyleAttributes *_styleAttributes;
    id <GEOTransitDeparture> _departure;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) id <GEOTransitDeparture> departure;
@property (nonatomic, readonly) unsigned long long stationIdentifier;
@property (nonatomic, readonly) GEOLatLng *location;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;

+ (id)transitTripStopsForPlaceData:(id)arg1;

- (id)initWithTransitSnippet:(id)arg1 departureSequence:(id)arg2;

@end
