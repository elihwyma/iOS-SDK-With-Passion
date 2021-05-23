/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, PBDataReader;

@interface GEOImageServiceImage : PBCodable

{
    PBDataReader *_reader;
    NSData *_imageId;
    NSData *_image;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_imageId:1;
        unsigned int read_image:1;
        unsigned int wrote_imageId:1;
        unsigned int wrote_image:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasImageId;
@property (retain, nonatomic) NSData *imageId;
@property (nonatomic, readonly) _Bool hasImage;
@property (retain, nonatomic) NSData *image;

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
- (void)_readImageId;
- (void)_readImage;

@end
