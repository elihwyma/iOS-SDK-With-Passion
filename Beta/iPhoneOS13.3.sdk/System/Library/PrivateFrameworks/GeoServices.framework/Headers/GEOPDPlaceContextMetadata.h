/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAutocompletePlaceContextMetadata, GEOPDSearchPlaceContextMetadata, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceContextMetadata : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompletePlaceContextMetadata *_autocompletePlaceContextMetadata;
    unsigned long long _muid;
    GEOPDSearchPlaceContextMetadata *_searchPlaceContextMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _placeContextMetadataType;
    struct {
        unsigned int has_muid:1;
        unsigned int has_placeContextMetadataType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_autocompletePlaceContextMetadata:1;
        unsigned int read_searchPlaceContextMetadata:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_autocompletePlaceContextMetadata:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_searchPlaceContextMetadata:1;
        unsigned int wrote_placeContextMetadataType:1;
    } _flags;
}

@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) _Bool hasPlaceContextMetadataType;
@property (nonatomic) int placeContextMetadataType;
@property (nonatomic, readonly) _Bool hasSearchPlaceContextMetadata;
@property (retain, nonatomic) GEOPDSearchPlaceContextMetadata *searchPlaceContextMetadata;
@property (nonatomic, readonly) _Bool hasAutocompletePlaceContextMetadata;
@property (retain, nonatomic) GEOPDAutocompletePlaceContextMetadata *autocompletePlaceContextMetadata;
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
- (void)_readSearchPlaceContextMetadata;
- (void)_readAutocompletePlaceContextMetadata;
- (id)placeContextMetadataTypeAsString:(int)arg1;
- (int)StringAsPlaceContextMetadataType:(id)arg1;

@end
