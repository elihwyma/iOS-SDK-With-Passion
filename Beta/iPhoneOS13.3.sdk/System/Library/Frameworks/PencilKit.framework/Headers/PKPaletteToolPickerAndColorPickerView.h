/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PKPaletteColorPickerView, PKPaletteToolPickerContainerView, PKPaletteToolPickerView, UIStackView;

@protocol PKPaletteViewStateObservable;

@interface PKPaletteToolPickerAndColorPickerView : UIView

{
    unsigned long long _edgeLocation;
    double _scalingFactor;
    PKPaletteToolPickerContainerView *_toolPickerContainerView;
    PKPaletteColorPickerView *_colorPickerView;
    long long _contextEditingMode;
    id <PKPaletteViewStateObservable> _paletteViewState;
    UIStackView *_stackView;
    NSLayoutConstraint *_toolPickerContainerViewWidthConstraint;
    NSLayoutConstraint *_toolPickerContainerViewHeightConstraint;
    NSLayoutConstraint *_compactToolPickerContainerViewWidthConstraint;
}

@property (weak, nonatomic) id <PKPaletteViewStateObservable> paletteViewState;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteToolPickerContainerView *toolPickerContainerView;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *compactToolPickerContainerViewWidthConstraint;
@property (nonatomic, readonly) PKPaletteToolPickerView *toolPickerView;
@property (nonatomic, readonly) PKPaletteColorPickerView *colorPickerView;
@property (nonatomic) long long contextEditingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (void)traitCollectionDidChange:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateUI;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPaletteViewStateObservable:(id)arg1;
- (void)didChangeAnnotationSupport:(id)arg1;

@end
