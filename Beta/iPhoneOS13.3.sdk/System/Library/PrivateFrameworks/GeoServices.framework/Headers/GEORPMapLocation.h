/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOPDViewportInfo, NSData, NSString, PBDataReader;

@interface GEORPMapLocation : PBCodable

{
    PBDataReader *_reader;
    GEOLatLng *_coordinate;
    NSData *_image;
    NSString *_mapScreenshotId;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    float _zoomLevel;
    struct {
        unsigned int has_zoomLevel:1;
        unsigned int read_coordinate:1;
        unsigned int read_image:1;
        unsigned int read_mapScreenshotId:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_image:1;
        unsigned int wrote_mapScreenshotId:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_zoomLevel:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasImage;
@property (retain, nonatomic) NSData *image;
@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) _Bool hasZoomLevel;
@property (nonatomic) float zoomLevel;
@property (nonatomic, readonly) _Bool hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic, readonly) _Bool hasMapScreenshotId;
@property (retain, nonatomic) NSString *mapScreenshotId;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readViewportInfo;
- (void)_readCoordinate;
- (void)_readImage;
- (void)_readMapScreenshotId;
- (void)_setMapMode:(int)arg1 region:(id)arg2;

@end
