/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSString, PBDataReader, PBUnknownFields;

@interface GEORPPhotoMetadata : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_clientImageUuid;
    GEOLocation *_geotag;
    NSString *_imageDescription;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_clientImageUuid:1;
        unsigned int read_geotag:1;
        unsigned int read_imageDescription:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientImageUuid:1;
        unsigned int wrote_geotag:1;
        unsigned int wrote_imageDescription:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasClientImageUuid;
@property (retain, nonatomic) NSString *clientImageUuid;
@property (nonatomic, readonly) _Bool hasImageDescription;
@property (retain, nonatomic) NSString *imageDescription;
@property (nonatomic, readonly) _Bool hasGeotag;
@property (retain, nonatomic) GEOLocation *geotag;
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
- (void)_readClientImageUuid;
- (void)_readImageDescription;
- (void)_readGeotag;

@end
