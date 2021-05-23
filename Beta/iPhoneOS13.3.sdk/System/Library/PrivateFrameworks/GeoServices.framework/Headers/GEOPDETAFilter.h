/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDETAFilter : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _transportTypes;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _includeHistoricTravelTime;
    _Bool _includeRouteTrafficDetail;
    struct {
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeRouteTrafficDetail:1;
        unsigned int read_unknownFields:1;
        unsigned int read_transportTypes:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_transitOptions:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_transportTypes:1;
        unsigned int wrote_automobileOptions:1;
        unsigned int wrote_transitOptions:1;
        unsigned int wrote_walkingOptions:1;
        unsigned int wrote_includeHistoricTravelTime:1;
        unsigned int wrote_includeRouteTrafficDetail:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long transportTypesCount;
@property (nonatomic, readonly) int *transportTypes;
@property (nonatomic) _Bool hasIncludeHistoricTravelTime;
@property (nonatomic) _Bool includeHistoricTravelTime;
@property (nonatomic, readonly) _Bool hasAutomobileOptions;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readonly) _Bool hasTransitOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) _Bool hasWalkingOptions;
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property (nonatomic) _Bool hasIncludeRouteTrafficDetail;
@property (nonatomic) _Bool includeRouteTrafficDetail;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readAutomobileOptions;
- (void)_readTransitOptions;
- (void)_readWalkingOptions;
- (void)_readTransportTypes;
- (void)_addNoFlagsTransportType:(int)arg1;
- (void)clearTransportTypes;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (void)addTransportType:(int)arg1;
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)transportTypesAsString:(int)arg1;
- (int)StringAsTransportTypes:(id)arg1;

@end
