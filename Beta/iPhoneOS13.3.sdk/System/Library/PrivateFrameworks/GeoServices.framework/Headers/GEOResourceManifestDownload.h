/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEODownloadMetadata, GEOResources, PBDataReader, PBUnknownFields;

@interface GEOResourceManifestDownload : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEODownloadMetadata *_metadata;
    GEOResources *_resources;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_metadata:1;
        unsigned int read_resources:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_metadata:1;
        unsigned int wrote_resources:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasResources;
@property (retain, nonatomic) GEOResources *resources;
@property (retain, nonatomic) GEODownloadMetadata *metadata;
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
- (void)_readMetadata;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readResources;
- (id)initWithResourceManifestData:(id)arg1;

@end
