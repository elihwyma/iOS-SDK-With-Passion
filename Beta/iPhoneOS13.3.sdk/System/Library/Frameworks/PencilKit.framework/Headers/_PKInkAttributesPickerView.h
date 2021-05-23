/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSString, PKInk, _PKColorAlphaSlider, _PKInkThicknessPicker;

@protocol _PKInkAttributesPickerViewDelegate;

@interface _PKInkAttributesPickerView : UIView

{
    id <_PKInkAttributesPickerViewDelegate> _delegate;
    PKInk *_ink;
    unsigned long long _displayMode;
    _PKInkThicknessPicker *_thicknessPicker;
    _PKColorAlphaSlider *_colorAlphaSlider;
    UIView *_separatorView;
}

@property (retain, nonatomic) _PKInkThicknessPicker *thicknessPicker;
@property (retain, nonatomic) _PKColorAlphaSlider *colorAlphaSlider;
@property (retain, nonatomic) UIView *separatorView;
@property (weak, nonatomic) id <_PKInkAttributesPickerViewDelegate> delegate;
@property (retain, nonatomic) PKInk *ink;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithInk:(id)arg1;
- (void)setInk:(id)arg1 animated:(_Bool)arg2;
- (void)_thicknessValueChanged:(id)arg1;
- (void)_opacityValueChanged:(id)arg1;
- (void)_colorAlphaSliderUserDidStartDraggingSlider:(id)arg1;
- (void)_colorAlphaSliderUserDidEndDraggingSlider:(id)arg1;

@end
