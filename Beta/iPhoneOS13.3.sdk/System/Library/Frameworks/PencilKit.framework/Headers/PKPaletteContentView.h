/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PKPaletteAdditionalOptionsView, PKPaletteColorPickerView, PKPaletteToolPickerAndColorPickerView, PKPaletteToolPickerView, PKPaletteUndoRedoView, UIStackView;

@protocol PKPaletteViewStateObservable;

@interface PKPaletteContentView : UIView

{
    _Bool _usingSmallestSupportedWidth;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    PKPaletteUndoRedoView *_undoRedoView;
    PKPaletteAdditionalOptionsView *_additionalOptionsView;
    UIView *_contextualEditingView;
    id <PKPaletteViewStateObservable> _paletteViewState;
    UIStackView *_stackView;
    NSLayoutConstraint *_stackViewTopConstraint;
    NSLayoutConstraint *_stackViewBottomConstraint;
    NSLayoutConstraint *_stackViewLeftConstraint;
    NSLayoutConstraint *_stackViewRightConstraint;
    NSLayoutConstraint *_stackViewCenterXConstraint;
    NSLayoutConstraint *_stackViewCompactLeftConstraint;
    NSLayoutConstraint *_stackViewCompactRightConstraint;
    PKPaletteToolPickerAndColorPickerView *_toolAndColorPickerContainerView;
    NSLayoutConstraint *_toolAndColorPickerContainerViewHeightConstraint;
    NSLayoutConstraint *_toolAndColorPickerContainerViewWidthConstraint;
}

@property (weak, nonatomic) id <PKPaletteViewStateObservable> paletteViewState;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewCompactLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewCompactRightConstraint;
@property (retain, nonatomic) UIView *contextualEditingView;
@property (retain, nonatomic) PKPaletteToolPickerAndColorPickerView *toolAndColorPickerContainerView;
@property (retain, nonatomic) NSLayoutConstraint *toolAndColorPickerContainerViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolAndColorPickerContainerViewWidthConstraint;
@property (nonatomic, getter=isUsingSmallestSupportedWidth) _Bool usingSmallestSupportedWidth;
@property (nonatomic, readonly) PKPaletteUndoRedoView *undoRedoView;
@property (nonatomic, readonly) PKPaletteToolPickerView *toolPickerView;
@property (nonatomic, readonly) PKPaletteColorPickerView *colorPickerView;
@property (nonatomic, readonly) PKPaletteAdditionalOptionsView *additionalOptionsView;
@property (nonatomic) long long contextEditingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateUI;
- (struct CGRect)plusButtonFrame;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)_installStackView;
- (void)_installUndoRedoButtonsView;
- (id)initWithPaletteViewStateObservable:(id)arg1;
- (void)_installContextualEditingView;
- (void)_updateContextEditingViewVisibility;
- (void)_installAdditionalOptionsView;
- (void)didChangeAnnotationSupport:(id)arg1;
- (void)_dismissPalettePopoverUsingConfirmationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
