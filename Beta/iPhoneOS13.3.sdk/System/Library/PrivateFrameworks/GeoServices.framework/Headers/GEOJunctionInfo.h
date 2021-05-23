/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOJunctionInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    struct GEOJunctionElement *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    int _drivingSide;
    int _junctionType;
    int _maneuverType;
    struct {
        unsigned int has_drivingSide:1;
        unsigned int has_junctionType:1;
        unsigned int has_maneuverType:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long junctionElementsCount;
@property (nonatomic, readonly) struct GEOJunctionElement *junctionElements;
@property (nonatomic) _Bool hasJunctionType;
@property (nonatomic) int junctionType;
@property (nonatomic) _Bool hasManeuverType;
@property (nonatomic) int maneuverType;
@property (nonatomic) _Bool hasDrivingSide;
@property (nonatomic) int drivingSide;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
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
- (id)drivingSideAsString:(int)arg1;
- (int)StringAsDrivingSide:(id)arg1;
- (void)clearJunctionElements;
- (struct GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1;
- (void)addJunctionElement:(struct GEOJunctionElement)arg1;
- (id)maneuverTypeAsString:(int)arg1;
- (int)StringAsManeuverType:(id)arg1;
- (id)junctionTypeAsString:(int)arg1;
- (int)StringAsJunctionType:(id)arg1;
- (void)setJunctionElements:(struct GEOJunctionElement *)arg1 count:(unsigned long long)arg2;

@end
