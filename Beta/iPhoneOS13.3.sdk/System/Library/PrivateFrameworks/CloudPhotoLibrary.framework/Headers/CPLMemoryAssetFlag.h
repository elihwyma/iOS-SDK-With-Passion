/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@interface CPLMemoryAssetFlag : PBCodable

{
    _Bool _isCurated;
    _Bool _isExtendedCurated;
    _Bool _isKeyAsset;
    _Bool _isMovieCurated;
    _Bool _isRepresentative;
    struct {
        unsigned int isCurated:1;
        unsigned int isExtendedCurated:1;
        unsigned int isKeyAsset:1;
        unsigned int isMovieCurated:1;
        unsigned int isRepresentative:1;
    } _has;
}

@property (nonatomic) _Bool hasIsRepresentative;
@property (nonatomic) _Bool isRepresentative;
@property (nonatomic) _Bool hasIsCurated;
@property (nonatomic) _Bool isCurated;
@property (nonatomic) _Bool hasIsMovieCurated;
@property (nonatomic) _Bool isMovieCurated;
@property (nonatomic) _Bool hasIsKeyAsset;
@property (nonatomic) _Bool isKeyAsset;
@property (nonatomic) _Bool hasIsExtendedCurated;
@property (nonatomic) _Bool isExtendedCurated;

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
