/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISImage.h>

__attribute__((visibility("hidden")))
@interface ISPlaceholderImage : ISImage

{
    ISImage *_image;
}

@property (readonly) ISImage *image;

- (struct CGSize)size;
- (double)scale;
- (id)initWithImage:(id)arg1;
- (struct CGSize)minimumSize;
- (_Bool)placeholder;
- (struct CGImage *)cgImage;

@end
