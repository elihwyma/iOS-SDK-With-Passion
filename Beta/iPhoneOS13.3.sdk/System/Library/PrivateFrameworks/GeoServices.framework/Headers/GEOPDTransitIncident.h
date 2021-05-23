/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitIncident : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_transitIncidents;
}

@property (retain, nonatomic) NSMutableArray *transitIncidents;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)transitIncidentsForPlaceData:(id)arg1 hasTransitIncidentComponent:(_Bool *)arg2;
+ (id)transitIncidentsTTLExpirationDateForPlaceData:(id)arg1;
+ (Class)transitIncidentType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)addTransitIncident:(id)arg1;
- (unsigned long long)transitIncidentsCount;
- (void)clearTransitIncidents;
- (id)transitIncidentAtIndex:(unsigned long long)arg1;

@end
