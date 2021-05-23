/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyCommandDiscoverabilityHUDVisualStyleRegular.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDVisualStyleCompact : UIKeyCommandDiscoverabilityHUDVisualStyleRegular

{
    UIFont *_summaryFont;
}

- (id)summaryFont;
- (double)summaryXPadding;
- (double)summaryModifiersSpacing;
- (double)summaryDescriptionToModifiersSpacing;
- (double)maxHUDWidthForWidth:(double)arg1;
- (struct UIEdgeInsets)HUDViewInsets;
- (double)HUDPageControlBottomMargin;

@end
