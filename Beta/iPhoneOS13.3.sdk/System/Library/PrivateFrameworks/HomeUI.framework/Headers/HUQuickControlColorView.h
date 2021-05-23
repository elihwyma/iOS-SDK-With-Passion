/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HFColorPalette, HFColorPaletteColor, HUColorLinearPaletteView, HUColorPickerView, HUQuickControlColorViewProfile, NSIndexPath, NSString, UISegmentedControl;

@protocol HUQuickControlColorViewInteractionDelegate, HUQuickControlInteractiveView;

@interface HUQuickControlColorView : UIView

{
    _Bool _showPickerModeControl;
    _Bool _userInteractionActive;
    HUQuickControlColorViewProfile *_profile;
    unsigned long long _reachabilityState;
    id <HUQuickControlColorViewInteractionDelegate> _interactionDelegate;
    HFColorPalette *_colorPalette;
    HFColorPaletteColor *_selectedColor;
    id _originalValue;
    HFColorPalette *_originalPalette;
    NSIndexPath *_originalSelectedColorIndexPath;
    HUColorLinearPaletteView *_colorLinearPaletteView;
    HUColorPickerView *_colorPickerView;
    UISegmentedControl *_colorPickerModeSegmentedControl;
}

@property (retain, nonatomic) HFColorPalette *colorPalette;
@property (retain, nonatomic) HFColorPaletteColor *selectedColor;
@property (retain, nonatomic) id originalValue;
@property (retain, nonatomic) HFColorPalette *originalPalette;
@property (retain, nonatomic) NSIndexPath *originalSelectedColorIndexPath;
@property (nonatomic) _Bool showPickerModeControl;
@property (retain, nonatomic) HUColorLinearPaletteView *colorLinearPaletteView;
@property (retain, nonatomic) HUColorPickerView *colorPickerView;
@property (nonatomic, readonly) UIView<HUQuickControlInteractiveView> *activeView;
@property (retain, nonatomic) UISegmentedControl *colorPickerModeSegmentedControl;
@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (weak, nonatomic) id <HUQuickControlColorViewInteractionDelegate> interactionDelegate;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly, getter=isSelectedColorInPalette) _Bool selectedColorInPalette;
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile;
@property (nonatomic, readonly) NSIndexPath *linearPaletteViewSelectedColorIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

- (id)initWithProfile:(id)arg1;
- (void)layoutSubviews;
- (void)_updateLayout;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (id)initWithProfile:(id)arg1 colorPalette:(id)arg2;
- (void)storeCurrentColorInformationAsOriginalValues;
- (void)updateSelectedColorIndexPathToIndexPath:(id)arg1;
- (void)controlView:(id)arg1 interactionStateDidChange:(_Bool)arg2 forFirstTouch:(_Bool)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (void)presentFullColorViewForControlView:(id)arg1 selectedColorIndexPath:(id)arg2;
- (void)controlView:(id)arg1 didSelectColorAtIndexPath:(id)arg2;
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_updateColorPicker;
- (void)_updateVisibleViews;
- (void)controlView:(id)arg1 colorPickerModeDidChange:(unsigned long long)arg2;
- (void)cancelColorPicking;

@end
