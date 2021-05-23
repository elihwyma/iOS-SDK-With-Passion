/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIAccessibilityHUDLayoutManager : NSObject

- (id)labelFontForHUD:(id)arg1;
- (struct CGSize)unscaledSizeForHUD:(id)arg1 containingSize:(struct CGSize)arg2;
- (void)layoutSubviewsOfHUD:(id)arg1;
- (struct CGSize)preferredSizeForLabelInHUD:(id)arg1 maximumWidth:(double)arg2;
- (struct CGSize)minimumUnscaledSizeForHUD:(id)arg1 preferredLabelSize:(struct CGSize)arg2;
- (id)containerViewForHUD:(id)arg1;
- (struct CGRect)layoutBoundsForHUD:(id)arg1;
- (struct CGSize)imageViewSizeForHUD:(id)arg1;
- (double)_imageCenterToTopForHUD:(id)arg1 preferredSizeForLabel:(struct CGSize)arg2;
- (struct UIEdgeInsets)imageInsetsForHUD:(id)arg1;
- (id)itemContainerViewForHUD:(id)arg1;
- (struct CGRect)imageViewFrameForHUD:(id)arg1 preferredSizeForLabel:(struct CGSize)arg2;
- (struct CGRect)labelFrameForHUD:(id)arg1 preferredSize:(struct CGSize)arg2;
- (unsigned long long)_actualNumberOfLinesForLabelInHUD:(id)arg1 preferredSize:(struct CGSize)arg2;

@end
