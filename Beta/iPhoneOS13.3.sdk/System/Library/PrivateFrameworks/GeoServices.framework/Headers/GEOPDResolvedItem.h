/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResolvedItem : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_extractedTerm;
    int _resolvedItemType;
    unsigned int _resultIndex;
    struct {
        unsigned int has_resolvedItemType:1;
        unsigned int has_resultIndex:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasExtractedTerm;
@property (retain, nonatomic) NSString *extractedTerm;
@property (nonatomic) _Bool hasResolvedItemType;
@property (nonatomic) int resolvedItemType;
@property (nonatomic) _Bool hasResultIndex;
@property (nonatomic) unsigned int resultIndex;
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
- (id)resolvedItemTypeAsString:(int)arg1;
- (int)StringAsResolvedItemType:(id)arg1;

@end
