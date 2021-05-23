/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@interface SXImageDecodingTools : NSObject

+ (id)sharedInstance;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (_Bool)dataIsAnimatedImage:(id)arg1;
- (id)loadAnimatedImageFromImageData:(id)arg1 size:(struct CGSize)arg2;
- (id)imageFromData:(id)arg1 size:(struct CGSize)arg2;
- (struct CGImage *)newImageByDecodingImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
- (struct CGColorSpace *)RGBColorSpace;
- (struct CGColorSpace *)P3ColorSpace;
- (struct __CFString *)contentTypeForImageData:(id)arg1;
- (id)imageFromData:(id)arg1;
- (id)decodeImage:(struct CGImage *)arg1;

@end
