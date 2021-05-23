/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOCameraFrame, GEOLocationInfo, PBDataReader, PBUnknownFields;

@interface GEOMuninViewState : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOCameraFrame *_cameraFrame;
    GEOLocationInfo *_locationInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_cameraFrame:1;
        unsigned int read_locationInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_cameraFrame:1;
        unsigned int wrote_locationInfo:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCameraFrame;
@property (retain, nonatomic) GEOCameraFrame *cameraFrame;
@property (nonatomic, readonly) _Bool hasLocationInfo;
@property (retain, nonatomic) GEOLocationInfo *locationInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readCameraFrame;
- (void)_readLocationInfo;

@end
