/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLDevice, MTLTexture;

@interface NTKSiderealCachedMTLTexture : NSObject

{
    NSString *_cacheKey;
    id <MTLTexture> _mtlTexture;
    _Bool _isAlphaOnly;
    id <MTLDevice> _device;
    CDUnknownBlockType _generateImageBlock;
}

@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) id <MTLTexture> texture;

- (id)_alphaOnlyTextureWithCommandBuffer:(id)arg1;
- (id)_rgbaTextureWithCommandBuffer:(id)arg1;
- (id)initWithCachedImageKey:(id)arg1 isAlphaOnly:(_Bool)arg2 imageGenerationBlock:(CDUnknownBlockType)arg3;
- (void)loadTextureWithCommandBuffer:(id)arg1;

@end
