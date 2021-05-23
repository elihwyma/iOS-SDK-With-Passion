/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

#import <PencilKit/Swift-Protocol.h>

@class CAShapeLayer, NSString, PKSwatchColor;

@interface PKPaletteColorSwatch : UIView <Swift>

{
    _Bool _selected;
    _Bool _showsSelectionHighlight;
    PKSwatchColor *_swatchColor;
    long long _colorUserInterfaceStyle;
    UIView *_colorBackgroundView;
    CAShapeLayer *_selectionRingMaskLayer;
    UIView *_colorBulletView;
}

@property (retain, nonatomic) UIView *colorBackgroundView;
@property (retain, nonatomic) CAShapeLayer *selectionRingMaskLayer;
@property (retain, nonatomic) UIView *colorBulletView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic) _Bool showsSelectionHighlight;
@property (retain, nonatomic) PKSwatchColor *swatchColor;
@property (nonatomic) long long colorUserInterfaceStyle;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_updateBackgroundView;
- (void)_updateUI;
- (long long)_uiColorUserInterfaceStyle;
- (void)_updateColorBulletView;
- (void)_updateSelectionHighlight;
- (id)newColorBackgroundView;
- (_Bool)wantsBackgroundViewColor;
- (id)_uiColor;
- (_Bool)wantsColorBulletVisible;

@end
