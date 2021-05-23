/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteResultSortPriorityMapping : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _resultSubtype;
    int _resultType;
    int _sortPriority;
    struct {
        unsigned int has_resultSubtype:1;
        unsigned int has_resultType:1;
        unsigned int has_sortPriority:1;
    } _flags;
}

@property (nonatomic) _Bool hasSortPriority;
@property (nonatomic) int sortPriority;
@property (nonatomic) _Bool hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) _Bool hasResultSubtype;
@property (nonatomic) int resultSubtype;
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
- (id)resultTypeAsString:(int)arg1;
- (int)StringAsResultType:(id)arg1;
- (id)resultSubtypeAsString:(int)arg1;
- (int)StringAsResultSubtype:(id)arg1;

@end
