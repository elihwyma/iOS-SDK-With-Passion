/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDMapsIdentifier, GEOPDPlace, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryBusiness : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _distance;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _muid;
    GEOPDPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _resultProviderId;
    struct {
        unsigned int has_distance:1;
        unsigned int has_muid:1;
        unsigned int has_resultProviderId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapsId:1;
        unsigned int read_place:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_place:1;
        unsigned int wrote_resultProviderId:1;
    } _flags;
}

@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) _Bool hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (nonatomic) _Bool hasDistance;
@property (nonatomic) double distance;
@property (nonatomic, readonly) _Bool hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearSensitiveFields;
- (void)_readMapsId;
- (void)_readPlace;

@end
