/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <MobileTimerUI/Swift-Protocol.h>

@class UIColor, UIFont;

@protocol TKTonePickerStyleProvider <Swift>

@property (nonatomic, readonly) _Bool tonePickerUsesOpaqueBackground;
@property (nonatomic, readonly) long long tonePickerTableViewSeparatorStyle;
@property (nonatomic, readonly) UIFont *tonePickerCellTextFont;
@property (nonatomic, readonly) UIColor *tonePickerCellTextColor;
@property (nonatomic, readonly) UIColor *tonePickerCellHighlightedTextColor;
@property (nonatomic, readonly) UIColor *tonePickerCellBackgroundColor;
@property (nonatomic, readonly) _Bool wantsCustomTonePickerHeaderView;
@property (nonatomic, readonly) UIFont *tonePickerHeaderTextFont;
@property (nonatomic, readonly) UIColor *tonePickerHeaderTextColor;
@property (nonatomic, readonly) UIColor *tonePickerHeaderTextShadowColor;
@property (nonatomic, readonly) struct UIOffset tonePickerHeaderTextShadowOffset;
@property (nonatomic, readonly) struct UIEdgeInsets tonePickerHeaderTextPaddingInsets;
@property (nonatomic, readonly) UIColor *tonePickerCustomTableSeparatorColor;
@property (nonatomic, readonly) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (nonatomic, readonly) _Bool tonePickerHeaderTextShouldBeUppercase;

- (unsigned short)newBackgroundViewForSelectedTonePickerCell: /* Error: Ran out of types for this method. */;
- (unsigned short)newAccessoryDisclosureIndicatorViewForTonePickerCell;

@end
