/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@interface TXRDataConverter : NSObject

+ (id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 gammaDegamma:(_Bool)arg4 error:(id *)arg5;
+ (id)newPixelFormatSetForCGImage:(struct CGImage *)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3;
+ (id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 multiplyAlpha:(_Bool)arg4 gammaDegamma:(_Bool)arg5 error:(id *)arg6;

@end
