/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOComposedWaypoint, GEOMapServiceTraits, GEORouteHypothesis, GEORouteHypothesisMonitor, NSDate;

@interface GEORouteHypothesisValue : NSObject <Swift>

{
    GEORouteHypothesisMonitor *_monitor;
    GEORouteHypothesis *_currentHypothesis;
    double _updatedTimeStamp;
    _Bool _prediction;
    GEOComposedWaypoint *_origin;
    GEOComposedWaypoint *_destination;
    int _transportType;
    NSDate *_arrivalDate;
    NSDate *_expirationDate;
    GEOMapServiceTraits *_traits;
    double _valueRefreshTimeStamp;
    long long _rowId;
}

@property (nonatomic, readonly) _Bool isStaleToRefresh;
@property (nonatomic, readonly) _Bool isStaleToPurgeFromDisk;
@property (nonatomic, readonly) GEORouteHypothesisMonitor *monitor;
@property (retain, nonatomic) GEORouteHypothesis *currentHypothesis;
@property (nonatomic) _Bool prediction;
@property (nonatomic) int transportType;
@property (nonatomic) double updatedTimeStamp;
@property (nonatomic, readonly) GEOComposedWaypoint *origin;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) NSDate *arrivalDate;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;
@property (nonatomic) double valueRefreshTimeStamp;
@property (nonatomic) long long rowId;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (_Bool)canBePersistedToDisk;
- (_Bool)aggresiveArrivalIsAfterExpiration;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 expirationDate:(id)arg5 traceName:(id)arg6 traits:(id)arg7;

@end
