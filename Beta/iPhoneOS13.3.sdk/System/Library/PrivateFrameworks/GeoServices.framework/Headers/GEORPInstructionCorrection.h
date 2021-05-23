/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPPhotoWithMetadata, NSData, NSString, PBDataReader;

@interface GEORPInstructionCorrection : PBCodable

{
    PBDataReader *_reader;
    NSString *_comments;
    NSString *_photoId;
    GEORPPhotoWithMetadata *_photo;
    NSData *_routeStepScreenshotImageData;
    NSString *_routeStepScreenshotImageId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _routeStepIndex;
    unsigned int _routeStepSubstepIndex;
    struct {
        unsigned int has_routeStepIndex:1;
        unsigned int has_routeStepSubstepIndex:1;
        unsigned int read_comments:1;
        unsigned int read_photoId:1;
        unsigned int read_photo:1;
        unsigned int read_routeStepScreenshotImageData:1;
        unsigned int read_routeStepScreenshotImageId:1;
        unsigned int wrote_comments:1;
        unsigned int wrote_photoId:1;
        unsigned int wrote_photo:1;
        unsigned int wrote_routeStepScreenshotImageData:1;
        unsigned int wrote_routeStepScreenshotImageId:1;
        unsigned int wrote_routeStepIndex:1;
        unsigned int wrote_routeStepSubstepIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasRouteStepIndex;
@property (nonatomic) unsigned int routeStepIndex;
@property (nonatomic, readonly) _Bool hasComments;
@property (retain, nonatomic) NSString *comments;
@property (nonatomic, readonly) _Bool hasPhoto;
@property (retain, nonatomic) GEORPPhotoWithMetadata *photo;
@property (nonatomic) _Bool hasRouteStepSubstepIndex;
@property (nonatomic) unsigned int routeStepSubstepIndex;
@property (nonatomic, readonly) _Bool hasRouteStepScreenshotImageData;
@property (retain, nonatomic) NSData *routeStepScreenshotImageData;
@property (nonatomic, readonly) _Bool hasPhotoId;
@property (retain, nonatomic) NSString *photoId;
@property (nonatomic, readonly) _Bool hasRouteStepScreenshotImageId;
@property (retain, nonatomic) NSString *routeStepScreenshotImageId;

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
- (void)_readPhotoId;
- (void)_readComments;
- (void)_readPhoto;
- (void)_readRouteStepScreenshotImageData;
- (void)_readRouteStepScreenshotImageId;

@end
