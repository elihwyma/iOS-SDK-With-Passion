/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchPlaceContextMetadata : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_interpretedCategory;
    NSString *_matchedDisplayName;
    NSString *_normalizedQuery;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isDefaultName;
    struct {
        unsigned int has_isDefaultName:1;
        unsigned int read_unknownFields:1;
        unsigned int read_interpretedCategory:1;
        unsigned int read_matchedDisplayName:1;
        unsigned int read_normalizedQuery:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_interpretedCategory:1;
        unsigned int wrote_matchedDisplayName:1;
        unsigned int wrote_normalizedQuery:1;
        unsigned int wrote_isDefaultName:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMatchedDisplayName;
@property (retain, nonatomic) NSString *matchedDisplayName;
@property (nonatomic) _Bool hasIsDefaultName;
@property (nonatomic) _Bool isDefaultName;
@property (nonatomic, readonly) _Bool hasNormalizedQuery;
@property (retain, nonatomic) NSString *normalizedQuery;
@property (nonatomic, readonly) _Bool hasInterpretedCategory;
@property (retain, nonatomic) NSString *interpretedCategory;
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
- (void)_readMatchedDisplayName;
- (void)_readNormalizedQuery;
- (void)_readInterpretedCategory;

@end
