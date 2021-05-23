/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOAutomobileOptions, GEOTransitOptions, MKMapItem, NSError, _MKRouteETA, _MKRouteETAFetcher;

@protocol MKQuickRouteConfigurableView, MKQuickRouteManagerDelegate, MKQuickRouteTransportTypeFinding;

@interface _MKQuickRouteManager : NSObject

{
    _MKRouteETAFetcher *_etaFetcher;
    double _maxDistanceToRequestETA;
    _MKRouteETA *_lastETA;
    unsigned long long _lastPreferredDirectionsType;
    NSError *_lastError;
    double _closeWalkTravelTime;
    double _maxWalkingDistance;
    _Bool _viewHasChangedSinceLastUpdate;
    _Bool _fetchAllTransportTypes;
    id <MKQuickRouteManagerDelegate> _delegate;
    id <MKQuickRouteTransportTypeFinding> _transportTypeFinder;
    NSObject<MKQuickRouteConfigurableView> *_view;
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic, readonly) _Bool isOnlyDriving;
@property (weak, nonatomic) id <MKQuickRouteManagerDelegate> delegate;
@property (weak, nonatomic) id <MKQuickRouteTransportTypeFinding> transportTypeFinder;
@property (weak, nonatomic) NSObject<MKQuickRouteConfigurableView> *view;
@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (copy, nonatomic) GEOTransitOptions *transitOptions;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (retain, nonatomic) MKMapItem *originMapItem;
@property (nonatomic, readonly, getter=isUsingCurrentLocationForOrigin) _Bool usingCurrentLocationForOrigin;
@property (nonatomic) _Bool fetchAllTransportTypes;

+ (_Bool)isLikelyToReturnETAForLocation:(id)arg1;
+ (double)_maxDistanceToRequestETA;
+ (unsigned long long)counterpartForTransportType:(unsigned long long)arg1;
+ (unsigned long long)directionsTypeForMapItem:(id)arg1 delegate:(id)arg2 mapType:(unsigned long long)arg3;

- (id)init;
- (id)description;
- (void)_resetState;
- (id)routeETAForTransportType:(unsigned long long)arg1;
- (void)updateETA;
- (struct CLLocationCoordinate2D)originCoordinate;
- (struct CLLocationCoordinate2D)destinationCoordinate;
- (_Bool)haveETAsForPreferredTransportType:(unsigned long long)arg1;
- (id)bestETAForPreferredDirectionsType:(unsigned long long)arg1;
- (_Bool)_transportTypeShouldBeSmart;
- (unsigned long long)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned long long)arg2;
- (void)requestNewETAForPreferredTransportType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performWithTransportType:(CDUnknownBlockType)arg1;
- (unsigned long long)directionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 preferredDirectionsType:(unsigned long long)arg3;
- (unsigned long long)directionsTypeForMapType:(unsigned long long)arg1;

@end
