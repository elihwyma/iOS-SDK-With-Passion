/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSource : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sourceId;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _resultProviderId;
    struct {
        unsigned int has_resultProviderId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_sourceId:1;
        unsigned int read_version:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_sourceId:1;
        unsigned int wrote_version:1;
        unsigned int wrote_resultProviderId:1;
    } _flags;
}

@property (nonatomic) _Bool hasResultProviderId;
@property (nonatomic) int resultProviderId;
@property (nonatomic, readonly) _Bool hasSourceId;
@property (retain, nonatomic) NSString *sourceId;
@property (nonatomic, readonly) _Bool hasVersion;
@property (retain, nonatomic) NSString *version;
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
- (void)_readVersion;

@end
