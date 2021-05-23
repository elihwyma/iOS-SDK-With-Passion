/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, PBUnknownFields;

@interface GEOArrivalRegion : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_arrivalRegion;
    int _arrivalRegionAction;
    unsigned int _endNavigationTimeoutThreshold;
    struct {
        unsigned int has_arrivalRegionAction:1;
        unsigned int has_endNavigationTimeoutThreshold:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasArrivalRegion;
@property (retain, nonatomic) GEOMapRegion *arrivalRegion;
@property (nonatomic) _Bool hasArrivalRegionAction;
@property (nonatomic) int arrivalRegionAction;
@property (nonatomic) _Bool hasEndNavigationTimeoutThreshold;
@property (nonatomic) unsigned int endNavigationTimeoutThreshold;
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
- (id)arrivalRegionActionAsString:(int)arg1;
- (int)StringAsArrivalRegionAction:(id)arg1;

@end
