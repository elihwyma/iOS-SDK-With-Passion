/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOSource : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sourceId;
    NSString *_sourceName;
    NSString *_sourceVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_sourceId:1;
        unsigned int read_sourceName:1;
        unsigned int read_sourceVersion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_sourceId:1;
        unsigned int wrote_sourceName:1;
        unsigned int wrote_sourceVersion:1;
    } _flags;
}

@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *sourceId;
@property (nonatomic, readonly) _Bool hasSourceVersion;
@property (retain, nonatomic) NSString *sourceVersion;
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
- (void)_readSourceId;
- (void)_readSourceVersion;
- (void)_readSourceName;
- (id)initWithAttributionID:(id)arg1;

@end
