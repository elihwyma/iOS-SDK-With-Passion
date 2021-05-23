/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUImageModifier.h>

@class NSArray;

@interface SUArrayImageModifier : SUImageModifier

{
    NSArray *_modifiers;
}

@property (retain, nonatomic) NSArray *modifiers;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)drawBeforeImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (_Bool)scalesImage;
- (struct CGSize)finalSizeForSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;

@end
