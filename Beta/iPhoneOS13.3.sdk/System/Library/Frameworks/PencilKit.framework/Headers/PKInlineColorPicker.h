/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

#import <PencilKit/Swift-Protocol.h>

@class NSArray, NSString, PKColorPicker, UIColor, UIScrollView;

@protocol PKInlineColorPickerContentsHiddenDelegate, PKInlineColorPickerDelegate, PKInlineColorPickerSerialViewControllerTransitionDelegate, _PKInlineColorPickerAllowDrawingWithPopoverDelegate;

@interface PKInlineColorPicker : UIView <Swift>

{
    _Bool _isUsedOnDarkBackground;
    _Bool _shouldEmboss;
    _Bool _didSelectColorUsingSpringLoadedSelection;
    unsigned long long _sizeState;
    unsigned long long _selectionState;
    id <PKInlineColorPickerDelegate> _delegate;
    unsigned long long _colorSet;
    NSArray *_colors;
    unsigned long long _selectedColorIndex;
    double _selectedColorAlpha;
    NSArray *_buttonItems;
    UIScrollView *_scrollView;
    UIView *_leftOverflowView;
    UIView *_rightOverflowView;
    PKColorPicker *_presentedColorPicker;
    UIColor *__pickerColor;
    UIColor *_selectedColorBeforeSpringLoadedSelection;
    UIColor *_aggd_initialColorOnPopoverOpen;
    long long _aggd_colorsChangedCount;
    id <_PKInlineColorPickerAllowDrawingWithPopoverDelegate> __allowDrawingWithPopoverDelegate;
    id <PKInlineColorPickerContentsHiddenDelegate> __contentsHiddenDelegate;
    id <PKInlineColorPickerSerialViewControllerTransitionDelegate> _serialViewControllerTransitionDelegate;
}

@property (nonatomic) unsigned long long selectedColorIndex;
@property (nonatomic) double selectedColorAlpha;
@property (retain, nonatomic) NSArray *buttonItems;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *leftOverflowView;
@property (retain, nonatomic) UIView *rightOverflowView;
@property (nonatomic) _Bool shouldEmboss;
@property (retain, nonatomic) PKColorPicker *presentedColorPicker;
@property (retain, nonatomic) UIColor *_pickerColor;
@property (retain, nonatomic) UIColor *selectedColorBeforeSpringLoadedSelection;
@property (nonatomic) _Bool didSelectColorUsingSpringLoadedSelection;
@property (retain, nonatomic) UIColor *aggd_initialColorOnPopoverOpen;
@property (nonatomic) long long aggd_colorsChangedCount;
@property (weak, nonatomic) id <_PKInlineColorPickerAllowDrawingWithPopoverDelegate> _allowDrawingWithPopoverDelegate;
@property (weak, nonatomic) id <PKInlineColorPickerContentsHiddenDelegate> _contentsHiddenDelegate;
@property (weak, nonatomic) id <PKInlineColorPickerSerialViewControllerTransitionDelegate> serialViewControllerTransitionDelegate;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic) unsigned long long selectionState;
@property (weak, nonatomic) id <PKInlineColorPickerDelegate> delegate;
@property (nonatomic) unsigned long long colorSet;
@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) _Bool isUsedOnDarkBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_commonInit;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)_allowDrawingWhilePresentingPopoverViewDidBeginDrawing:(id)arg1;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;
- (id)_representableColorForColor:(id)arg1;
- (void)_colorPickerUserDidTouchUpInside:(id)arg1;
- (void)_forceSetColorSet:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3;
- (long long)defaultColorIndex;
- (id)colorForIndex:(long long)arg1;
- (void)showOverflowViewsIfNeeded;
- (long long)colorPickerButtonIndex;
- (unsigned long long)colorIndexMatchingColor:(id)arg1;
- (id)colorsForColorSet:(unsigned long long)arg1;
- (id)createColorPickerButtonShouldEmboss:(_Bool)arg1;
- (id)createColorButtonItemWithColor:(id)arg1 shouldEmboss:(_Bool)arg2;
- (id)_effectiveViewControllerForPopoverPresentation;
- (_Bool)_isInkPickerContentsHidden;
- (id)_effectiveBarButtonItemForPopoverPresentation;
- (struct CGRect)_effectiveRectForPopoverPresentation;
- (void)_colorPickerWillDismiss:(id)arg1;
- (void)_dismissColorPickerPopover:(_Bool)arg1;
- (void)_presentColorPickerPopover:(_Bool)arg1;
- (void)notifyDelegateDidSelectColorInCompactChooseToolState;
- (void)notifyDelegateDidSelectColor:(_Bool)arg1;
- (void)_selectColorWithButton:(id)arg1;
- (void)_axHandleLongPressOnColorButtonForLargeTextHUD:(id)arg1;
- (void)colorButtonTapHandler:(id)arg1;
- (void)springLoadingGestureHandler:(id)arg1;
- (id)_axLabelForColorButton:(id)arg1;
- (id)initWithEmbossing:(_Bool)arg1;
- (void)_toggleColorPickerPopoverPresentation:(_Bool)arg1;

@end
