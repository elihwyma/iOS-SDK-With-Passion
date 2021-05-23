/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

#import <PencilKit/Swift-Protocol.h>

@class NSArray, NSString, PKColorPicker, UICollectionView, UIColor, UILongPressGestureRecognizer;

@protocol PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate;

@interface PKPaletteColorPickerView : UIView <Swift>

{
    unsigned long long _edgeLocation;
    double _scalingFactor;
    id <PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate> _delegate;
    long long _colorUserInterfaceStyle;
    long long _colorPickerMode;
    UICollectionView *_collectionView;
    NSArray *_swatches;
    NSArray *_swatchColors;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    PKColorPicker *_colorPickerPopover;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *swatches;
@property (retain, nonatomic) NSArray *swatchColors;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) PKColorPicker *colorPickerPopover;
@property (weak, nonatomic) id <PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate> delegate;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) long long colorPickerMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

+ (id)collectionViewFlowLayoutWithItemSize:(struct CGSize)arg1 minimumLineSpacing:(double)arg2 minimumInteritemSpacing:(double)arg3;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didChangePreferredContentSize:(id)arg1;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)toggleColorSelectionPopover;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;
- (struct CGSize)swatchSize;
- (id)_swatchColorsForTraitCollection:(id)arg1;
- (void)_swatchLongPressHandler:(id)arg1;
- (void)_enableOrDisableLongPressGesture;
- (id)_multicolorSwatch;
- (void)_showColorSelectionPopover;
- (void)_reloadSwatchColorsForTraitCollection:(id)arg1;
- (_Bool)_isSwatchMulticolorSwatch:(id)arg1;
- (_Bool)_shouldDisplayExtendedColorPickerPopoverFromColorSwatch:(id)arg1;
- (id)_selectedSwatch;
- (_Bool)_colorPickerAllowsColorSelection;
- (id)swatchWithColor:(id)arg1;
- (struct CGRect)_popoverPresentingSourceRect;
- (id)_popoverPresentingSourceview;
- (void)reloadColorsForCurrentColorPickerMode;
- (id)swatchWithIdentifier:(id)arg1;
- (id)traitCollectionWithCurrentInterfaceStyle;
- (id)colorAtPoint:(struct CGPoint)arg1;

@end
