/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSSet, TDTexturePixelFormat, TDThemeCompressionType;

@interface TDTextureRenditionSpec : TDRenditionSpec

@property (nonatomic) _Bool cubeMap;
@property (retain, nonatomic) NSSet *mipLevels;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (retain, nonatomic) TDTexturePixelFormat *pixelFormat;

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)canBePackedWithDocument:(id)arg1;

@end
