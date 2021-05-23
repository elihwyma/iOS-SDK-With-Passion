/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOResource, PBDataReader, PBUnknownFields;

@interface GEOStaleResource : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOResource *_desiredResource;
    GEOResource *_fallbackResource;
    double _originalTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_originalTimestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_desiredResource:1;
        unsigned int read_fallbackResource:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_desiredResource:1;
        unsigned int wrote_fallbackResource:1;
        unsigned int wrote_originalTimestamp:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDesiredResource;
@property (retain, nonatomic) GEOResource *desiredResource;
@property (nonatomic, readonly) _Bool hasFallbackResource;
@property (retain, nonatomic) GEOResource *fallbackResource;
@property (nonatomic) _Bool hasOriginalTimestamp;
@property (nonatomic) double originalTimestamp;
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
- (void)_readDesiredResource;
- (void)_readFallbackResource;

@end
