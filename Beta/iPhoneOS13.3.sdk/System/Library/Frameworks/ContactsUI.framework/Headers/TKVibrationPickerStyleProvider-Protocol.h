/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class UIColor, UIFont;

@protocol TKVibrationPickerStyleProvider <Swift>

@property (nonatomic, readonly) _Bool vibrationPickerUsesOpaqueBackground;
@property (nonatomic, readonly) long long vibrationPickerTableViewSeparatorStyle;
@property (nonatomic, readonly) UIFont *vibrationPickerCellTextFont;
@property (nonatomic, readonly) UIColor *vibrationPickerCellTextColor;
@property (nonatomic, readonly) UIColor *vibrationPickerCellHighlightedTextColor;
@property (nonatomic, readonly) UIColor *vibrationPickerCellBackgroundColor;
@property (nonatomic, readonly) _Bool wantsCustomVibrationPickerHeaderView;
@property (nonatomic, readonly) UIFont *vibrationPickerHeaderTextFont;
@property (nonatomic, readonly) UIColor *vibrationPickerHeaderTextColor;
@property (nonatomic, readonly) UIColor *vibrationPickerHeaderTextShadowColor;
@property (nonatomic, readonly) struct UIOffset vibrationPickerHeaderTextShadowOffset;
@property (nonatomic, readonly) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;
@property (nonatomic, readonly) UIColor *vibrationPickerCustomBackgroundColor;
@property (nonatomic, readonly) UIColor *vibrationPickerCustomTableSeparatorColor;
@property (nonatomic, readonly) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (nonatomic, readonly) _Bool vibrationPickerHeaderTextShouldBeUppercase;

- (unsigned short)newBackgroundViewForSelectedVibrationPickerCell: /* Error: Ran out of types for this method. */;
- (unsigned short)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;

@end
