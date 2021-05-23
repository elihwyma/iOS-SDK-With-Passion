/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CGRenderer.h>

__attribute__((visibility("hidden")))
@interface PDFRenderer : CGRenderer

{
    struct __CFDictionary *info;
    struct __CFData *data;
    struct CGDataConsumer *dataConsumer;
}

- (id)init;
- (void)dealloc;
- (void)setFileURL:(id)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setFileTitle:(id)arg1;
- (void)flushRender;
- (const struct __CFData *)pdfdata;

@end
