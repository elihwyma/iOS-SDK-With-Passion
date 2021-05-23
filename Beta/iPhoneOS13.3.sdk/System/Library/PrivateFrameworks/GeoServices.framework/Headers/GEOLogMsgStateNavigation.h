/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEONavCameraState;

@interface GEOLogMsgStateNavigation : PBCodable

{
    double _distanceToDestination;
    GEONavCameraState *_navCameraState;
    int _lineType;
    int _navState;
    struct {
        unsigned int has_distanceToDestination:1;
        unsigned int has_lineType:1;
        unsigned int has_navState:1;
    } _flags;
}

@property (nonatomic) _Bool hasLineType;
@property (nonatomic) int lineType;
@property (nonatomic) _Bool hasNavState;
@property (nonatomic) int navState;
@property (nonatomic) _Bool hasDistanceToDestination;
@property (nonatomic) double distanceToDestination;
@property (nonatomic, readonly) _Bool hasNavCameraState;
@property (retain, nonatomic) GEONavCameraState *navCameraState;

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
- (id)lineTypeAsString:(int)arg1;
- (int)StringAsLineType:(id)arg1;
- (id)navStateAsString:(int)arg1;
- (int)StringAsNavState:(id)arg1;

@end
