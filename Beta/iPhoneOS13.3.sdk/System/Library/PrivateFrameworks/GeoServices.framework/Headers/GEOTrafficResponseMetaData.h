/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTrafficTrafficIncidentsMetaData, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficResponseMetaData : PBCodable

{
    PBDataReader *_reader;
    NSString *_codeVersion;
    NSString *_dataVersion;
    NSString *_hspVersion;
    GEOTrafficTrafficIncidentsMetaData *_incidentsMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_codeVersion:1;
        unsigned int read_dataVersion:1;
        unsigned int read_hspVersion:1;
        unsigned int read_incidentsMetadata:1;
        unsigned int wrote_codeVersion:1;
        unsigned int wrote_dataVersion:1;
        unsigned int wrote_hspVersion:1;
        unsigned int wrote_incidentsMetadata:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCodeVersion;
@property (retain, nonatomic) NSString *codeVersion;
@property (nonatomic, readonly) _Bool hasDataVersion;
@property (retain, nonatomic) NSString *dataVersion;
@property (nonatomic, readonly) _Bool hasHspVersion;
@property (retain, nonatomic) NSString *hspVersion;
@property (nonatomic, readonly) _Bool hasIncidentsMetadata;
@property (retain, nonatomic) GEOTrafficTrafficIncidentsMetaData *incidentsMetadata;

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
- (void)_readDataVersion;
- (void)_readCodeVersion;
- (void)_readHspVersion;
- (void)_readIncidentsMetadata;

@end
