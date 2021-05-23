/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CLLocation, GEOAutomobileOptions, GEOTransitOptions, MKMapItem, NSHashTable, NSLock, NSNumber, NSString, NSTimer, _MKQuickRouteManager;

@protocol GEOTransitLineItem, MKETAProviderDelegate, _MKPlaceItem;

@interface MKETAProvider : NSObject

{
    _MKQuickRouteManager *_quickRouteManager;
    NSNumber *_lastTransportTypeFound;
    MKMapItem *_nearestStationItem;
    _Bool _distanceOrETAWasFound;
    NSString *_distanceTextItem;
    unsigned long long _etaTransportType;
    double _etaTravelTime;
    _Bool _active;
    _Bool _paused;
    _Bool _inactiveInBackground;
    NSTimer *_refreshTimer;
    CLLocation *_currentLocation;
    id <MKETAProviderDelegate> _delegate;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
    id <_MKPlaceItem> _placeItem;
    id <GEOTransitLineItem> _lineItem;
    NSHashTable *_observers;
    NSLock *_observersLock;
}

@property (nonatomic, readonly) id <_MKPlaceItem> placeItem;
@property (nonatomic, readonly) id <GEOTransitLineItem> lineItem;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSLock *observersLock;
@property (nonatomic, readonly) CLLocation *currentLocation;
@property (weak, nonatomic) id <MKETAProviderDelegate> delegate;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) NSString *distanceString;
@property (nonatomic, readonly) unsigned long long etaTransportType;
@property (nonatomic, readonly) double etaTravelTime;
@property (nonatomic, readonly) NSNumber *transportTypePreferenceNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)pause;
- (void)start;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)_commonInit;
- (void)_startTimer;
- (void)_cancelTimer;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (id)initWithLineItem:(id)arg1;
- (void)restart;
- (id)initWithPlaceItem:(id)arg1;
- (void)configureWithNearestStationMapItem:(id)arg1;
- (_Bool)quickRouteShouldOnlyUseAutomobile;
- (_Bool)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(_Bool)arg4;
- (void)findDirectionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_configureETAForMapItem:(id)arg1;
- (void)_updateETAHandler:(id)arg1;
- (void)_willEnterForeground;
- (void)_didEnterBackground;
- (id)currentMapItem;
- (void)_updateETA;
- (void)_refreshTimer;
- (_Bool)_areDistanceAndETAInformationAvailable;
- (_Bool)_shouldUpdateETAForMapView:(id)arg1;
- (void)_notifyETAAllObservers;
- (void)_notifyLocationAllObservers;
- (void)_updateETADisplayWithTransportType:(unsigned long long)arg1 travelTime:(double)arg2 distance:(double)arg3;

@end
