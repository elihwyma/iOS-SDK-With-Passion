/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@interface CPLSuggestionAssetFlag : PBCodable

{
    _Bool _isKeyAsset;
    _Bool _isRepresentative;
    struct {
        unsigned int isKeyAsset:1;
        unsigned int isRepresentative:1;
    } _has;
}

@property (nonatomic) _Bool hasIsRepresentative;
@property (nonatomic) _Bool isRepresentative;
@property (nonatomic) _Bool hasIsKeyAsset;
@property (nonatomic) _Bool isKeyAsset;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
