/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOLaneInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_arrows;
    _Bool _hov;
    _Bool _preferredForMultipleManeuvers;
    _Bool _supportsManeuver;
    struct {
        unsigned int has_hov:1;
        unsigned int has_preferredForMultipleManeuvers:1;
        unsigned int has_supportsManeuver:1;
    } _flags;
}

@property (nonatomic) _Bool hasSupportsManeuver;
@property (nonatomic) _Bool supportsManeuver;
@property (nonatomic) _Bool hasPreferredForMultipleManeuvers;
@property (nonatomic) _Bool preferredForMultipleManeuvers;
@property (nonatomic) _Bool hasHov;
@property (nonatomic) _Bool hov;
@property (retain, nonatomic) NSMutableArray *arrows;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)arrowType;

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
- (unsigned long long)arrowsCount;
- (id)arrowAtIndex:(unsigned long long)arg1;
- (void)addArrow:(id)arg1;
- (void)clearArrows;

@end
