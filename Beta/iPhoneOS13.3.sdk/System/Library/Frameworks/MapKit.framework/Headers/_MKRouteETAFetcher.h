/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOAutomobileOptions, GEOTransitOptions, MKDirections, MKMapItem, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _MKRouteETAFetcher : NSObject

{
    NSMutableDictionary *_etaResults;
    struct CLLocationCoordinate2D _lastUpdatedETAOriginCoordinate;
    double _lastUpdatedETATime;
    double _lastRequestTime;
    MKDirections *_inProgressETAUpdate;
    _Bool _lastETAUpdateHadError;
    double _staleDistance;
    double _staleTimeInterval;
    _Bool _optionsHaveChangedSinceLastUpdate;
    MKMapItem *_mapItem;
    MKMapItem *_originMapItem;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
}

@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (copy, nonatomic) GEOTransitOptions *transitOptions;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MKMapItem *originMapItem;
@property (nonatomic, readonly) NSMutableDictionary *etaResults;
@property (nonatomic, readonly) struct CLLocationCoordinate2D originCoordinate;
@property (nonatomic, readonly) struct CLLocationCoordinate2D destinationCoordinate;

- (id)init;
- (void)dealloc;
- (void)_resetState;
- (id)routeETAForTransportType:(unsigned long long)arg1;
- (void)invalidateETAForTransportType:(unsigned long long)arg1;
- (_Bool)isUsingCurrentLocationForOrigin;
- (_Bool)isValidETA:(id)arg1;
- (void)requestNewETAForTransportType:(unsigned long long)arg1 additionalTransportTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldUpdateEstimatedTravelTimeForNewOrigin:(struct CLLocationCoordinate2D)arg1;
- (void)expireETAsIfNoLongerValid;
- (void)_didUpdateETAResult;

@end
