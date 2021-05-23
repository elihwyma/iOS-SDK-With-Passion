/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSupportsOfflineMaps : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _offlinePlacecardSuggestion;
    _Bool _supportsOfflineMaps;
    struct {
        unsigned int has_offlinePlacecardSuggestion:1;
        unsigned int has_supportsOfflineMaps:1;
    } _flags;
}

@property (nonatomic) _Bool hasSupportsOfflineMaps;
@property (nonatomic) _Bool supportsOfflineMaps;
@property (nonatomic) _Bool hasOfflinePlacecardSuggestion;
@property (nonatomic) int offlinePlacecardSuggestion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)offlinePlacecardSuggestionAsString:(int)arg1;
- (int)StringAsOfflinePlacecardSuggestion:(id)arg1;

@end
