/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface MDLTexture : NSObject

{
    NSString *_name;
    struct MDLTextureData _textureData;
    long long _channelEncoding;
    NSData *_topLeftOriginData[14];
    NSData *_bottomLeftOriginData[14];
    _Bool _selfCreating;
    _Bool _alphaValuesSet;
    _Bool _hasAlphaValues;
}

@property (nonatomic, readonly) MISSING_TYPE *dimensions;
@property (nonatomic, readonly) long long rowStride;
@property (nonatomic, readonly) unsigned long long channelCount;
@property (nonatomic, readonly) unsigned long long mipLevelCount;
@property (nonatomic, readonly) long long channelEncoding;
@property (nonatomic) _Bool isCube;
@property (nonatomic) _Bool hasAlphaValues;
@property (copy, nonatomic) NSString *name;

+ (id)textureNamed:(id)arg1;
+ (id)textureNamed:(id)arg1 assetResolver:(id)arg2;
+ (id)textureWithURL:(id)arg1;
+ (id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 dimensions:(float)arg3 roughness: /* Error: Ran out of types for this method. */;
+ (id)textureWithURL:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3;
+ (id)textureNamed:(id)arg1 bundle:(id)arg2;
+ (id)_textureCubeWithSingleImageNamed:(id)arg1 bundle:(id)arg2;
+ (id)textureCubeWithImagesNamed:(id)arg1 bundle:(id)arg2;
+ (id)textureResourceNamed:(id)arg1 assetResolver:(id)arg2;
+ (id)textureFromResource:(id)arg1;
+ (id)textureCubeWithImagesNamed:(id)arg1;
+ (id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 dimensions: /* Error: Ran out of types for this method. */;

- (id)init;
- (_Bool)writeToURL:(id)arg1;
- (id)initWithData:(id)arg1 topLeftOrigin:(_Bool)arg2 name:(id)arg3 dimensions:(long long)arg4 rowStride:(unsigned long long)arg5 channelCount:(long long)arg6 channelEncoding:(_Bool)arg7 isCube: /* Error: Ran out of types for this method. */;
- (id)texelDataWithBottomLeftOrigin;
- (struct MDLTextureData *)textureData;
- (id)allocateDataAtLevel:(long long)arg1;
- (void)clearTexelData;
- (id)texelDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(_Bool)arg2;
- (id)generateDataAtLevel:(long long)arg1;
- (id)texelDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(_Bool)arg2;
- (void)loadDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(_Bool)arg2;
- (void)loadDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(_Bool)arg2;
- (_Bool)writeToURL:(id)arg1 level:(unsigned long long)arg2;
- (_Bool)writeToURL:(id)arg1 type:(struct __CFString *)arg2;
- (_Bool)writeToURL:(id)arg1 type:(struct __CFString *)arg2 level:(unsigned long long)arg3;
- (struct CGImage *)imageFromTextureAtLevel:(unsigned long long)arg1;
- (id)texelDataWithTopLeftOrigin:(unsigned long long)arg1;
- (id)texelDataWithTopLeftOrigin;
- (void)setTexelDataWithTopLeftOrigin:(id)arg1 atMipLevel:(long long)arg2;
- (void)setTexelDataWithBottomLeftOrigin:(id)arg1 atMipLevel:(long long)arg2;
- (struct CGImage *)imageFromTexture;

@end
