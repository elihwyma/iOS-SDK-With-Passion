/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDVenueLabel, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueLevel : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOPDVenueLabel *_label;
    unsigned long long _levelId;
    int _ordinal;
    struct {
        unsigned int has_levelId:1;
        unsigned int has_ordinal:1;
    } _flags;
}

@property (nonatomic) _Bool hasLevelId;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic) _Bool hasOrdinal;
@property (nonatomic) int ordinal;
@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) GEOPDVenueLabel *label;
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
