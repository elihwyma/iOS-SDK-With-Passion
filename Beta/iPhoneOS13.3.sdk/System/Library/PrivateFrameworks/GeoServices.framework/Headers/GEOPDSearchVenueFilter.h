/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDVenueIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchVenueFilter : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOPDVenueIdentifier *_venueFilter;
    int _venueSearchType;
    struct {
        unsigned int has_venueSearchType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasVenueFilter;
@property (retain, nonatomic) GEOPDVenueIdentifier *venueFilter;
@property (nonatomic) _Bool hasVenueSearchType;
@property (nonatomic) int venueSearchType;
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
- (id)venueSearchTypeAsString:(int)arg1;
- (int)StringAsVenueSearchType:(id)arg1;

@end
