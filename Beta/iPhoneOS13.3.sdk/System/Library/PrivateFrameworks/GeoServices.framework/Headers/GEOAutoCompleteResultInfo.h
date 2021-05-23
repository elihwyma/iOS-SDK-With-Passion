/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOAutoCompleteResultInfo : PBCodable

{
    int _suggestionsAcType;
    struct {
        unsigned int has_suggestionsAcType:1;
    } _flags;
}

@property (nonatomic) _Bool hasSuggestionsAcType;
@property (nonatomic) int suggestionsAcType;

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
- (id)suggestionsAcTypeAsString:(int)arg1;
- (int)StringAsSuggestionsAcType:(id)arg1;

@end
