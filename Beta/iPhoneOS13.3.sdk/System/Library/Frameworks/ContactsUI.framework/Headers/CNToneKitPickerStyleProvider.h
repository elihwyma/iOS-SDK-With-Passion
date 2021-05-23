/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface CNToneKitPickerStyleProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (id)newBackgroundViewForSelectedTonePickerCell:(_Bool)arg1;
- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(_Bool)arg1;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;

@end
