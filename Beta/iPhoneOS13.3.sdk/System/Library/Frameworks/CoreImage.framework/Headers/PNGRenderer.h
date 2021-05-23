/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CGRenderer.h>

__attribute__((visibility("hidden")))
@interface PNGRenderer : CGRenderer

{
    struct __CFURL *fullURL;
    struct CGColor *background;
    struct CGColorSpace *colorSpace;
}

- (id)init;
- (void)dealloc;
- (void)setFileURL:(id)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)flushRender;
- (struct CGImage *)cgimage;

@end
