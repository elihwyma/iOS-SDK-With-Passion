/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDRelatedSearchSuggestion, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDisplayHeaderSubstitute : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_interpretedQuery;
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _substituteType;
    struct {
        unsigned int has_substituteType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_interpretedQuery:1;
        unsigned int read_relatedSearchSuggestion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_interpretedQuery:1;
        unsigned int wrote_relatedSearchSuggestion:1;
        unsigned int wrote_substituteType:1;
    } _flags;
}

@property (nonatomic) _Bool hasSubstituteType;
@property (nonatomic) int substituteType;
@property (nonatomic, readonly) _Bool hasInterpretedQuery;
@property (retain, nonatomic) NSString *interpretedQuery;
@property (nonatomic, readonly) _Bool hasRelatedSearchSuggestion;
@property (retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion;
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
- (void)_readInterpretedQuery;
- (void)_readRelatedSearchSuggestion;
- (id)substituteTypeAsString:(int)arg1;
- (int)StringAsSubstituteType:(id)arg1;

@end
