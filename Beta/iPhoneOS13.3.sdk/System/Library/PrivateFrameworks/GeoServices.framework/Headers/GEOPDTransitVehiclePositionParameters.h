/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitVehiclePositionParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _tripIds;
}

@property (nonatomic, readonly) unsigned long long tripIdsCount;
@property (nonatomic, readonly) unsigned long long *tripIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
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
- (void)clearTripIds;
- (unsigned long long)tripIdAtIndex:(unsigned long long)arg1;
- (void)addTripId:(unsigned long long)arg1;
- (void)setTripIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;

@end
