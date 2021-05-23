/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSString, TXRImageInfo, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface TXRParserImageIO : NSObject

{
    TXRTextureInfo *_textureInfo;
    TXRImageInfo *_imageInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) TXRTextureInfo *textureInfo;

+ (_Bool)exportTexture:(id)arg1 url:(id)arg2 error:(id *)arg3;
+ (_Bool)handlesData:(id)arg1;
+ (_Bool)exportImage:(id)arg1 url:(id)arg2 uttype:(const struct __CFString *)arg3 colorSpace:(struct CGColorSpace *)arg4 orientation:(unsigned char)arg5 error:(id *)arg6;
+ (id)decodeCGImage:(struct CGImage *)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (id)decodeCGImageNonIndexed:(struct CGImage *)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (int)determineColorSpaceClass:(struct CGImage *)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3;
+ (struct CGImage *)newCGImageFromImage:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 error:(id *)arg3;

- (_Bool)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;

@end
