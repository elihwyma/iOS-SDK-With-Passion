/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface CPLSuggestionAssetList : PBCodable

{
    NSMutableArray *_assets;
    unsigned int _version;
    CDStruct_f20694ce _has;
}

@property (retain, nonatomic) NSMutableArray *assets;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;

+ (Class)assetType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)assetsCount;
- (void)addAsset:(id)arg1;
- (void)clearAssets;
- (id)assetAtIndex:(unsigned long long)arg1;

@end
