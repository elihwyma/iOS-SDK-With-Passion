/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, GEOStyleAttributes, NSString, PBDataReader, PBUnknownFields;

@interface GEOURLExtraStorage : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_mapRegion;
    NSString *_phoneNumber;
    GEOStyleAttributes *_styleAttributes;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_mapRegion:1;
        unsigned int read_phoneNumber:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_url:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_phoneNumber:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_url:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) _Bool hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic, readonly) _Bool hasUrl;
@property (retain, nonatomic) NSString *url;
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
- (void)_readMapRegion;
- (void)_readStyleAttributes;
- (void)_readPhoneNumber;
- (void)_readUrl;

@end
