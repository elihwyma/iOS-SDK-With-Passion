/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation;

@interface GEOLogMsgStateLookAroundView : PBCodable

{
    GEOLocation *_location;
    double _zoomLevel;
    unsigned int _heading;
    unsigned int _numberPoisInView;
    _Bool _isLabelingShown;
    struct {
        unsigned int has_zoomLevel:1;
        unsigned int has_heading:1;
        unsigned int has_numberPoisInView:1;
        unsigned int has_isLabelingShown:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) _Bool hasHeading;
@property (nonatomic) unsigned int heading;
@property (nonatomic) _Bool hasZoomLevel;
@property (nonatomic) double zoomLevel;
@property (nonatomic) _Bool hasNumberPoisInView;
@property (nonatomic) unsigned int numberPoisInView;
@property (nonatomic) _Bool hasIsLabelingShown;
@property (nonatomic) _Bool isLabelingShown;

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
