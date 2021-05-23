/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocalizedString, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPerformer : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_itunesId;
    NSString *_itunesUrl;
    GEOLocalizedString *_name;
    NSString *_performerId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_itunesId:1;
        unsigned int read_itunesUrl:1;
        unsigned int read_name:1;
        unsigned int read_performerId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_itunesId:1;
        unsigned int wrote_itunesUrl:1;
        unsigned int wrote_name:1;
        unsigned int wrote_performerId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) GEOLocalizedString *name;
@property (nonatomic, readonly) _Bool hasPerformerId;
@property (retain, nonatomic) NSString *performerId;
@property (nonatomic, readonly) _Bool hasItunesId;
@property (retain, nonatomic) NSString *itunesId;
@property (nonatomic, readonly) _Bool hasItunesUrl;
@property (retain, nonatomic) NSString *itunesUrl;
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
- (void)_readName;
- (void)_readPerformerId;
- (void)_readItunesId;
- (void)_readItunesUrl;

@end
