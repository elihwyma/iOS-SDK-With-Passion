/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOAddress, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocalizedAddress : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAddress *_address;
    NSString *_language;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_language:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_address:1;
        unsigned int wrote_language:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasAddress;
@property (retain, nonatomic) GEOAddress *address;
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
- (void)_readLanguage;
- (void)_readAddress;

@end
