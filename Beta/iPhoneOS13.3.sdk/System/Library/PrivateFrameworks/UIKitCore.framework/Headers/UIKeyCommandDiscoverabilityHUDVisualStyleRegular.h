/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyCommandDiscoverabilityHUDVisualStyle.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDVisualStyleRegular : UIKeyCommandDiscoverabilityHUDVisualStyle

{
    UIColor *_titleColor;
    UIColor *_inputColor;
    UIColor *_dividerColor;
}

@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *inputColor;
@property (retain, nonatomic) UIColor *dividerColor;

- (id)init;
- (id)summaryFont;
- (double)summaryXPadding;
- (double)summaryYPadding;
- (double)summaryLineHeight;
- (double)summaryLineSpacing;
- (double)summaryModifiersSpacing;
- (double)summaryDescriptionToModifiersSpacing;
- (double)minimumFontScaleBeforeTruncation;
- (double)maxHUDWidthForWidth:(double)arg1;
- (double)maxHUDHeightForHeight:(double)arg1;
- (struct UIEdgeInsets)HUDViewInsets;
- (double)columnDividerWidth;
- (double)HUDPageControlBottomMargin;
- (double)columnDividerHeightForHUDHeight:(double)arg1;

@end
