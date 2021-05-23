/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOCommonOptions, GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsRequestFeedback, GEOLocation, GEOMapRegion, GEORouteAttributes, GEORouteMatch, NSDate, NSMutableArray;

@protocol GEORouteHypothesizerUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerUpdater : NSObject <Swift>

{
    id <GEORouteHypothesizerUpdaterDelegate> _delegate;
    GEODirectionsRequestFeedback *_feedback;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    GEODirectionsRequest *_currentRequest;
    GEORouteAttributes *_routeAttributes;
    GEOCommonOptions *_commonOptions;
    GEOLocation *_originLocation;
    GEOLocation *_lastMatchedLocation;
    GEOComposedRoute *_route;
    GEORouteMatch *_routeMatch;
    _Bool _isTraveling;
    _Bool _hasArrived;
    GEOMapRegion *_arrivalMapRegion;
    double _score;
    NSMutableArray *_rerouteEntries;
    _Bool _shouldThrottleReroutes;
    NSDate *_lastRerouteDate;
    unsigned long long _numThrottledReroutes;
    struct os_unfair_lock_s _requestLock;
    _Bool _isNavd;
}

@property (weak, nonatomic) id <GEORouteHypothesizerUpdaterDelegate> delegate;
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) _Bool isTraveling;
@property (nonatomic, readonly) _Bool hasArrived;
@property (nonatomic) _Bool isNavd;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)_transportType;
- (void)cancelCurrentRequest;
- (void)updateForLocation:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (void)startUpdatingFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (id)routeMatchForLocation:(id)arg1;
- (void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (void)_updateScoreForLocation:(id)arg1;
- (_Bool)_checkForArrival:(id)arg1 routeMatch:(id)arg2;

@end
