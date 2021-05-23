/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@class NSMutableArray, NSString;

@interface CPLMomentSharePreviewData : PBCodable

{
    NSString *_cropRectString;
    NSString *_keyAssetIdentifier;
    NSMutableArray *_previewImageDatas;
}

@property (retain, nonatomic) NSMutableArray *previewImageDatas;
@property (nonatomic, readonly) _Bool hasKeyAssetIdentifier;
@property (retain, nonatomic) NSString *keyAssetIdentifier;
@property (nonatomic, readonly) _Bool hasCropRectString;
@property (retain, nonatomic) NSString *cropRectString;

+ (Class)previewImageDataType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPreviewImageData:(id)arg1;
- (void)clearPreviewImageDatas;
- (unsigned long long)previewImageDatasCount;
- (id)previewImageDataAtIndex:(unsigned long long)arg1;

@end
