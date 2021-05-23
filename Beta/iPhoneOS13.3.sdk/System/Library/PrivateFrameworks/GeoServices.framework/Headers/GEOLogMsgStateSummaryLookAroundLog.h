/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgStateSummaryLookAroundLog : PBCodable

{
    unsigned int _durationSec;
    _Bool _hadMoveActions;
    _Bool _hadPanActions;
    _Bool _hadPoiTapActions;
    _Bool _hadShareActions;
    _Bool _hadZoomActions;
    struct {
        unsigned int has_durationSec:1;
        unsigned int has_hadMoveActions:1;
        unsigned int has_hadPanActions:1;
        unsigned int has_hadPoiTapActions:1;
        unsigned int has_hadShareActions:1;
        unsigned int has_hadZoomActions:1;
    } _flags;
}

@property (nonatomic) _Bool hasDurationSec;
@property (nonatomic) unsigned int durationSec;
@property (nonatomic) _Bool hasHadPanActions;
@property (nonatomic) _Bool hadPanActions;
@property (nonatomic) _Bool hasHadZoomActions;
@property (nonatomic) _Bool hadZoomActions;
@property (nonatomic) _Bool hasHadMoveActions;
@property (nonatomic) _Bool hadMoveActions;
@property (nonatomic) _Bool hasHadPoiTapActions;
@property (nonatomic) _Bool hadPoiTapActions;
@property (nonatomic) _Bool hasHadShareActions;
@property (nonatomic) _Bool hadShareActions;

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

@end
