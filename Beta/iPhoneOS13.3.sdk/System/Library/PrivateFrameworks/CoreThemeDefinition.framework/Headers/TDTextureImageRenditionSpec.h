/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDTextureAsset, TDTextureMipLevel, TDTextureRenditionSpec, TDThemeCompressionType;

@interface TDTextureImageRenditionSpec : TDRenditionSpec

@property (nonatomic) _Bool flipped;
@property (retain, nonatomic) TDTextureAsset *asset;
@property (retain, nonatomic) TDTextureMipLevel *textureLevelAssignment;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (nonatomic, readonly) TDTextureRenditionSpec *texture;
@property (nonatomic, readonly) long long textureFormat;

- (_Bool)isCubeMap;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)updatePackingPropertiesWithDocument:(id)arg1;
- (_Bool)canBePackedWithDocument:(id)arg1;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (int)_pixelFormatOfCGImage:(struct CGImage *)arg1;
- (struct CGImage *)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned int *)arg3;
- (id)textureFacesWithDocument:(id)arg1;

@end
