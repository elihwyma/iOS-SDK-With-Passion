/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOStructuredAddress, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocalizedSpokenStructuredAddress : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_language;
    GEOStructuredAddress *_spokenStructuredAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_language:1;
        unsigned int read_spokenStructuredAddress:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_language:1;
        unsigned int wrote_spokenStructuredAddress:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasSpokenStructuredAddress;
@property (retain, nonatomic) GEOStructuredAddress *spokenStructuredAddress;
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
- (void)_readSpokenStructuredAddress;
- (void)_readLanguage;

@end
