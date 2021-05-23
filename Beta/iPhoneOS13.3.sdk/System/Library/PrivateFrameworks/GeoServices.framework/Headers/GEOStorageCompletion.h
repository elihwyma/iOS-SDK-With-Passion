/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDAutocompleteEntry, PBUnknownFields;

@interface GEOStorageCompletion : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteEntry *_autocompleteEntry;
}

@property (nonatomic, readonly) _Bool hasAutocompleteEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)storageForCompletionItem:(id)arg1;

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
- (void)applyToUserSearchInput:(id)arg1;

@end
