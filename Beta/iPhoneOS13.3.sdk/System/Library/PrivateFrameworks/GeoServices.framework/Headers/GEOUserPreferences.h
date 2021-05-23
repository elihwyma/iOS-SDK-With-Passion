/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOUserPreferences : PBCodable

{
    PBUnknownFields *_unknownFields;
    _Bool _avoidHighways;
    _Bool _avoidTolls;
    struct {
        unsigned int has_avoidHighways:1;
        unsigned int has_avoidTolls:1;
    } _flags;
}

@property (nonatomic) _Bool hasAvoidTolls;
@property (nonatomic) _Bool avoidTolls;
@property (nonatomic) _Bool hasAvoidHighways;
@property (nonatomic) _Bool avoidHighways;
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
