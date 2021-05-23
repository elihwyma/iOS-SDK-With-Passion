/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPlannedDestination, GEORouteHypothesis, NSError, NSUUID, geo_isolater;

@protocol OS_dispatch_source;

@interface GEORouteHypothesizer : NSObject

{
    GEOPlannedDestination *_plannedDestination;
    unsigned long long _state;
    _Bool _unableToFindRouteForOriginalTransportType;
    GEORouteHypothesis *_currentHypothesis;
    NSError *_currentError;
    CDUnknownBlockType _updateHandler;
    NSUUID *_uuid;
    geo_isolater *_isolater;
    _Bool _wakeForDelay;
    NSObject<OS_dispatch_source> *_delayDispatchTimer;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) GEOPlannedDestination *plannedDestination;
@property (nonatomic, readonly) _Bool unableToFindRouteForOriginalTransportType;
@property (nonatomic, readonly) GEORouteHypothesis *currentHypothesis;
@property (nonatomic, readonly) NSError *currentError;
@property (nonatomic, readonly) double willBeginHypothesizingInterval;
@property (nonatomic, readonly) double willEndHypothesizingInterval;

+ (id)hypothesizerForPlannedDestination:(id)arg1;
+ (_Bool)transitTTLSupportedInCurrentCountry;
+ (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;

- (void)dealloc;
- (id)description;
- (void)_performDelayedStart;
- (id)initWithPlannedDestination:(id)arg1;
- (void)startHypothesizingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)cancelDelayDispatchTimer;
- (_Bool)_wontHypothesizeAgain;
- (void)_delayStartingWithXpc;
- (void)_delayStartingWithoutXpc;
- (void)stopHypothesizing;
- (_Bool)wakeForDelay;
- (void)setDoNotWakeForDelay;
- (void)requestRefresh;
- (void)onlyPerformLocalUpdates;
- (void)didPostUINotification:(unsigned long long)arg1;

@end
