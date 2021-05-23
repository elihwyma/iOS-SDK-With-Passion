/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOImageServiceResponse : PBCodable

{
    NSMutableArray *_images;
    unsigned int _height;
    int _status;
    unsigned int _width;
    struct {
        unsigned int has_height:1;
        unsigned int has_status:1;
        unsigned int has_width:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) _Bool hasHeight;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSMutableArray *images;

+ (_Bool)isValid:(id)arg1;
+ (Class)imagesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusAsString:(int)arg1;
- (void)clearImages;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)addImages:(id)arg1;
- (unsigned long long)imagesCount;
- (id)imagesAtIndex:(unsigned long long)arg1;

@end
