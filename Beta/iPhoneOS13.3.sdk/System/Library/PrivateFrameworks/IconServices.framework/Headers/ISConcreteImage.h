/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISImage.h>

__attribute__((visibility("hidden")))
@interface ISConcreteImage : ISImage

{
    _Bool _placeholder;
    struct CGImage *_cgImage;
    double _scale;
    struct CGSize _size;
    struct CGSize _minimumSize;
}

@property _Bool placeholder;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (struct CGSize)size;
- (double)scale;
- (struct CGSize)minimumSize;
- (void)setMinimumSize:(struct CGSize)arg1;
- (struct CGImage *)cgImage;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 minimumSize:(struct CGSize)arg3 placeholder:(_Bool)arg4;

@end
