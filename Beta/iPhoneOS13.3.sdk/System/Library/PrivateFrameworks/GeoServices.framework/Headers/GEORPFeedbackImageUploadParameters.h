/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackImageUploadParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_images;
}

@property (retain, nonatomic) NSMutableArray *images;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)imageType;
+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)addImage:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearImages;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (unsigned long long)imagesCount;
- (id)imageAtIndex:(unsigned long long)arg1;

@end
