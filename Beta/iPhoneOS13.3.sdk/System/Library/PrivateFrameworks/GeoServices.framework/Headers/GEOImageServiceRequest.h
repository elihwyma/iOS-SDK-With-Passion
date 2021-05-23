/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class NSMutableArray;

@interface GEOImageServiceRequest : PBRequest

{
    NSMutableArray *_imageIds;
    unsigned int _height;
    unsigned int _width;
    CDStruct_a1cdbaa7 _flags;
}

@property (retain, nonatomic) NSMutableArray *imageIds;
@property (nonatomic) _Bool hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) _Bool hasHeight;
@property (nonatomic) unsigned int height;

+ (_Bool)isValid:(id)arg1;
+ (Class)imageIdType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)readAll:(_Bool)arg1;
- (void)addImageId:(id)arg1;
- (unsigned long long)imageIdsCount;
- (void)clearImageIds;
- (id)imageIdAtIndex:(unsigned long long)arg1;

@end
