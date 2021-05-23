/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDEntity, GEOPDPlaceInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedService : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDEntity *_entity;
    NSMutableArray *_hours;
    GEOPDPlaceInfo *_placeInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_entity:1;
        unsigned int read_hours:1;
        unsigned int read_placeInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entity:1;
        unsigned int wrote_hours:1;
        unsigned int wrote_placeInfo:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasEntity;
@property (retain, nonatomic) GEOPDEntity *entity;
@property (nonatomic, readonly) _Bool hasPlaceInfo;
@property (retain, nonatomic) GEOPDPlaceInfo *placeInfo;
@property (retain, nonatomic) NSMutableArray *hours;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)hoursType;
+ (id)linkedServicesForPlaceData:(id)arg1;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readHours;
- (void)_readPlaceInfo;
- (void)_readEntity;
- (void)_addNoFlagsHours:(id)arg1;
- (unsigned long long)hoursCount;
- (void)clearHours;
- (id)hoursAtIndex:(unsigned long long)arg1;
- (void)addHours:(id)arg1;

@end
