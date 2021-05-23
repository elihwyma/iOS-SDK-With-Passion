/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@interface TDImageColorHistogram : NSObject

{
    struct _histogram_ARGB_t {
        unsigned long long tbl[4][1024];
    } _histogram;
    struct vImage_Buffer _imageBuffer;
    struct vImage_CGImageFormat _imageFormat;
    _Bool _isMonochrome;
}

@property (readonly) _Bool isMonochrome;

- (id)initWithCGImage:(struct CGImage *)arg1;
- (double)intersection:(id)arg1;

@end
