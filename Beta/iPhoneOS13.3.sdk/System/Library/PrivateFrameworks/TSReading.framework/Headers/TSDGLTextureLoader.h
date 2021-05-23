/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDGLTextureLoader : NSObject

+ (id)textureWithCGImage:(struct CGImage *)arg1 generateMipmaps:(_Bool)arg2 error:(id *)arg3;
+ (id)p_textureInfoFromCGImage:(struct CGImage *)arg1 generateMipmaps:(_Bool)arg2;
+ (id)textureWithContentsOfFile:(id)arg1 generateMipmaps:(_Bool)arg2 error:(id *)arg3;

@end
