/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CSITextureHelper : NSObject

{
    struct _csibitmap *bmp;
    struct CGColorSpace *colorspaceHint;
    unsigned long long sourceRowbytes;
    unsigned int width;
    unsigned int height;
    unsigned int imageBytes;
    int pixelFormat;
}

- (void)dealloc;
- (_Bool)expandIntoBuffer:(id)arg1 error:(id *)arg2;

@end
