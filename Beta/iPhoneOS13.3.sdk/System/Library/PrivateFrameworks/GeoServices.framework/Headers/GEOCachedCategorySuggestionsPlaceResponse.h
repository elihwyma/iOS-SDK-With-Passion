/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPlaceResponse, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_countryCode;
    NSString *_language;
    GEOPDPlaceResponse *_response;
    NSString *_sourceURL;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_timestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_countryCode:1;
        unsigned int read_language:1;
        unsigned int read_response:1;
        unsigned int read_sourceURL:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_countryCode:1;
        unsigned int wrote_language:1;
        unsigned int wrote_response:1;
        unsigned int wrote_sourceURL:1;
        unsigned int wrote_timestamp:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasResponse;
@property (retain, nonatomic) GEOPDPlaceResponse *response;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasSourceURL;
@property (retain, nonatomic) NSString *sourceURL;
@property (nonatomic, readonly) _Bool hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
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
- (void)clearSensitiveFields;
- (void)_readLanguage;
- (void)_readResponse;
- (void)_readCountryCode;
- (void)_readSourceURL;

@end
