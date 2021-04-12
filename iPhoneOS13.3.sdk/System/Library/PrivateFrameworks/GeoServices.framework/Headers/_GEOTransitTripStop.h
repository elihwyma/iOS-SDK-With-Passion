//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitTripStop-Protocol.h>

@class GEOLatLng, GEOStyleAttributes, NSArray, NSString, NSTimeZone;
@protocol GEOTransitDeparture;

__attribute__((visibility("hidden")))
@interface _GEOTransitTripStop : NSObject <GEOTransitTripStop>
{
    NSTimeZone *_timeZone;
    NSUInteger _stationIdentifier;
    NSString *_transitName;
    NSArray *_labelItems;
    GEOLatLng *_location;
    GEOStyleAttributes *_styleAttributes;
    id <GEOTransitDeparture> _departure;
}

+ (id)transitTripStopsForPlaceData:(id)arg1;
@property(readonly, nonatomic) id <GEOTransitDeparture> departure; // @synthesize departure=_departure;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSUInteger stationIdentifier;
- (id)initWithTransitSnippet:(id)arg1 departureSequence:(id)arg2;

@end

