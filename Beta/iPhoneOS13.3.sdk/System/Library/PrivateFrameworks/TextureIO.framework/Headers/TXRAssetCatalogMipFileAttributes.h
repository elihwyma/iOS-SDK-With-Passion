/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <TextureIO/TXRAssetCatalogFileAttributes.h>

@interface TXRAssetCatalogMipFileAttributes : TXRAssetCatalogFileAttributes

{
    unsigned long long _level;
    unsigned long long _face;
}

@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long face;

- (id)init;
- (void)specifyAllFaces;
- (_Bool)doesSpecifyAllFaces;

@end
