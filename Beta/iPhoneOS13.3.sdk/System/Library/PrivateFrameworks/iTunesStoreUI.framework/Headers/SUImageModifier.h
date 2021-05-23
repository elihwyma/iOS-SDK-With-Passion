/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@interface SUImageModifier : NSObject

@property (nonatomic, readonly) _Bool scalesImage;

- (id)newImageForImage:(id)arg1;
- (void)drawBeforeImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (struct CGSize)finalSizeForSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;

@end
