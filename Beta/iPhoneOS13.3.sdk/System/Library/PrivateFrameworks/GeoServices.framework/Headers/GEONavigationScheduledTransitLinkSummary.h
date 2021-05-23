/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEONavigationTransitStopSummary, PBDataReader;

@interface GEONavigationScheduledTransitLinkSummary : PBCodable

{
    PBDataReader *_reader;
    unsigned long long _lineID;
    double _scheduledArrival;
    double _scheduledDeparture;
    GEONavigationTransitStopSummary *_stopFrom;
    GEONavigationTransitStopSummary *_stopTo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_lineID:1;
        unsigned int has_scheduledArrival:1;
        unsigned int has_scheduledDeparture:1;
        unsigned int read_stopFrom:1;
        unsigned int read_stopTo:1;
        unsigned int wrote_lineID:1;
        unsigned int wrote_scheduledArrival:1;
        unsigned int wrote_scheduledDeparture:1;
        unsigned int wrote_stopFrom:1;
        unsigned int wrote_stopTo:1;
    } _flags;
}

@property (nonatomic) _Bool hasLineID;
@property (nonatomic) unsigned long long lineID;
@property (nonatomic) _Bool hasScheduledDeparture;
@property (nonatomic) double scheduledDeparture;
@property (nonatomic) _Bool hasScheduledArrival;
@property (nonatomic) double scheduledArrival;
@property (nonatomic, readonly) _Bool hasStopFrom;
@property (retain, nonatomic) GEONavigationTransitStopSummary *stopFrom;
@property (nonatomic, readonly) _Bool hasStopTo;
@property (retain, nonatomic) GEONavigationTransitStopSummary *stopTo;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readStopFrom;
- (void)_readStopTo;
- (id)initWithTransitTripRouteStep:(id)arg1 originSummary:(id)arg2 destinationSummary:(id)arg3;

@end
