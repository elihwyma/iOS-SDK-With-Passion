/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIColor, UIFont;

@protocol UIKeyCommandDiscoverabilityHUDVisualStyle <Swift>

@property (nonatomic, readonly) struct UIEdgeInsets HUDViewInsets;
@property (nonatomic, readonly) double HUDPageControlBottomMargin;
@property (nonatomic, readonly) double columnDividerWidth;
@property (nonatomic, readonly) double summaryXPadding;
@property (nonatomic, readonly) double summaryYPadding;
@property (nonatomic, readonly) double summaryDescriptionToModifiersSpacing;
@property (nonatomic, readonly) double summaryModifiersSpacing;
@property (nonatomic, readonly) UIFont *summaryFont;
@property (nonatomic, readonly) double summaryLineHeight;
@property (nonatomic, readonly) double summaryLineSpacing;
@property (nonatomic, readonly) double minimumFontScaleBeforeTruncation;
@property (nonatomic, readonly) UIColor *titleColor;
@property (nonatomic, readonly) UIColor *inputColor;
@property (nonatomic, readonly) UIColor *dividerColor;

- (unsigned short)maxHUDWidthForWidth: /* Error: Ran out of types for this method. */;
- (unsigned short)maxHUDHeightForHeight: /* Error: Ran out of types for this method. */;
- (unsigned short)columnDividerHeightForHUDHeight: /* Error: Ran out of types for this method. */;

@end
