/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@class CUIThemeRendition, NSArray;

@interface CUINamedLayerStack : CUINamedLookup

{
    NSArray *_layers;
    CUIThemeRendition *_flattenedImageRendition;
    CUIThemeRendition *_radiosityImageRendition;
}

@property (retain, nonatomic) NSArray *layers;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct CGImage *flattenedImage;
@property (nonatomic, readonly) struct CGImage *radiosityImage;

+ (void)radiosityImageWithImage:(struct CGImage *)arg1 displayScale:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (struct vImage_Buffer)_doRadiosityBlurOnPixelBuffer:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bitsPerPixel:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 scaleFactor:(unsigned long long)arg6 usesGaussianBlur:(_Bool *)arg7 adjustedSize:(struct CGSize *)arg8;
+ (struct CGImage *)createRadiosityImageWithImage:(struct CGImage *)arg1 displayScale:(long long)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 resolvingWithBlock:(CDUnknownBlockType)arg4;
- (id)layerImageAtIndex:(unsigned long long)arg1;

@end
