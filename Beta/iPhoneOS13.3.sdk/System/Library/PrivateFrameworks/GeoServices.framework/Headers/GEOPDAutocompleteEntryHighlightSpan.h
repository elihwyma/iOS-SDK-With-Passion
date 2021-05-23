/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned int _length;
    unsigned int _startIndex;
    struct {
        unsigned int has_length:1;
        unsigned int has_startIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) _Bool hasLength;
@property (nonatomic) unsigned int length;
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

@end
