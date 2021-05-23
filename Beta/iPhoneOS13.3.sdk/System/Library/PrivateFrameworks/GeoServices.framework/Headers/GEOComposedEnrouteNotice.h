/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOComposedRoute, GEOComposedTrafficCamera, GEOComposedTrafficSignal, GEOEnrouteNotice, GEOLatLng, NSArray, NSString;

@interface GEOComposedEnrouteNotice : NSObject <Swift>

{
    GEOEnrouteNotice *_enrouteNotice;
    GEOComposedRoute *_route;
    NSArray *_guidanceEvents;
    CDStruct_3f2a7a20 _routeCoordinate;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) GEOComposedTrafficCamera *trafficCamera;
@property (nonatomic, readonly) GEOComposedTrafficSignal *trafficSignal;
@property (nonatomic, readonly) _Bool hasHighlightDistance;
@property (nonatomic, readonly) unsigned int highlightDistance;
@property (nonatomic, readonly) _Bool hasGroupIdentifier;
@property (nonatomic, readonly) unsigned int groupIdentifier;
@property (nonatomic, readonly) _Bool hasPriority;
@property (nonatomic, readonly) unsigned int priority;
@property (nonatomic, readonly) NSArray *guidanceEvents;
@property (nonatomic, readonly) GEOLatLng *position;
@property (nonatomic, readonly) CDStruct_3f2a7a20 routeCoordinate;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRoute:(id)arg1;
- (id)initWithEnrouteNotice:(id)arg1 onRoute:(id)arg2;
- (id)titleFormatForLocation:(id)arg1;
- (id)detailFormatForLocation:(id)arg1;

@end
