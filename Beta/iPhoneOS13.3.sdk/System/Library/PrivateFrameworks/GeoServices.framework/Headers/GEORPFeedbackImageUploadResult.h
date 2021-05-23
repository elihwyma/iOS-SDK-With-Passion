/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackImageUploadResult : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_imageUploadInfos;
}

@property (retain, nonatomic) NSMutableArray *imageUploadInfos;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)imageUploadInfoType;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)addImageUploadInfo:(id)arg1;
- (unsigned long long)imageUploadInfosCount;
- (void)clearImageUploadInfos;
- (id)imageUploadInfoAtIndex:(unsigned long long)arg1;

@end
