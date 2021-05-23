/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDTransportHint, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchLocationParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOPDTransportHint *_searchTransportHint;
    int _searchLocationParametersType;
    struct {
        unsigned int has_searchLocationParametersType:1;
    } _flags;
}

@property (nonatomic) _Bool hasSearchLocationParametersType;
@property (nonatomic) int searchLocationParametersType;
@property (nonatomic, readonly) _Bool hasSearchTransportHint;
@property (retain, nonatomic) GEOPDTransportHint *searchTransportHint;
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
- (id)searchLocationParametersTypeAsString:(int)arg1;
- (int)StringAsSearchLocationParametersType:(id)arg1;

@end
