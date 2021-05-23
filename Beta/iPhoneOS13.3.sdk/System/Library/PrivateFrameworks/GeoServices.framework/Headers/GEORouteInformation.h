/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEORouteInformation : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_detail;
    GEOFormattedString *_duration;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_detail:1;
        unsigned int read_duration:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_detail:1;
        unsigned int wrote_duration:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDuration;
@property (retain, nonatomic) GEOFormattedString *duration;
@property (nonatomic, readonly) _Bool hasDetail;
@property (retain, nonatomic) GEOFormattedString *detail;
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
- (void)_readDuration;
- (void)_readDetail;

@end
