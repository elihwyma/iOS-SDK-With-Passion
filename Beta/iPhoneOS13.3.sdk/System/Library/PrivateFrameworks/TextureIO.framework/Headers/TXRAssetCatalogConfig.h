/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSMutableSet, NSSet, TXRAssetCatalogFileAttributes, TXRTexture;

@interface TXRAssetCatalogConfig : NSObject

{
    TXRTexture *_texture;
    TXRAssetCatalogFileAttributes *_baseFileAttributes;
    NSMutableSet *_fileAttributesList;
    unsigned long long _pixelFormat;
    unsigned long long _mipmapOption;
    unsigned long long _memory;
    unsigned long long _graphicsFeatureSet;
    unsigned long long _idiom;
    unsigned long long _displayColorSpace;
    unsigned long long _scaleFactor;
}

@property (retain, nonatomic) TXRAssetCatalogFileAttributes *baseFileAttributes;
@property (nonatomic, readonly) NSSet *fileAttributesList;
@property (nonatomic, readonly) TXRTexture *texture;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long mipmapOption;
@property (nonatomic) unsigned long long memory;
@property (nonatomic) unsigned long long graphicsFeatureSet;
@property (nonatomic) unsigned long long idiom;
@property (nonatomic) unsigned long long displayColorSpace;
@property (nonatomic) unsigned long long scaleFactor;

- (id)initWithTexture:(id)arg1;
- (void)addFileAttributesForLevel:(unsigned long long)arg1;
- (void)addFileAttributesForLevel:(unsigned long long)arg1 face:(unsigned long long)arg2;
- (void)addFileAttributesForLevel:(unsigned long long)arg1 fileFormat:(unsigned long long)arg2 colorSpace:(struct CGColorSpace *)arg3 exifOrientation:(unsigned char)arg4;
- (void)addFileAttributesForLevel:(unsigned long long)arg1 face:(unsigned long long)arg2 fileFormat:(unsigned long long)arg3 colorSpace:(struct CGColorSpace *)arg4 exifOrientation:(unsigned char)arg5;

@end
