/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUImageModifier.h>

@class UIGradient;

@interface SUReflectionImageModifier : SUImageModifier

{
    UIGradient *_gradient;
    double _reflectionHeight;
}

@property (retain, nonatomic) UIGradient *gradient;
@property (nonatomic) double reflectionHeight;

- (void)dealloc;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (struct CGSize)finalSizeForSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;

@end
