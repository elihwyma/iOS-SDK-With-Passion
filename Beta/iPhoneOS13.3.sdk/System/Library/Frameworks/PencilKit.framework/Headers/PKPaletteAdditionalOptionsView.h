/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, PKPaletteButton, PKPaletteMoreOptionsViewController, UIStackView, UIViewController;

@protocol PKPalettePopoverPresenting><PKPaletteAdditionalOptionsViewDelegate;

@interface PKPaletteAdditionalOptionsView : UIView

{
    _Bool _supportsAnnotationEditing;
    _Bool _autoHideOn;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    id <PKPalettePopoverPresenting><PKPaletteAdditionalOptionsViewDelegate> _delegate;
    UIStackView *_stackView;
    PKPaletteButton *_plusButton;
    PKPaletteButton *_ellipsisButton;
    PKPaletteMoreOptionsViewController *_moreOptionsViewController;
    UIViewController *_presentedPopoverViewController;
    NSLayoutConstraint *_plusButtonWidthConstraint;
    NSLayoutConstraint *_plusButtonHeightConstraint;
    NSLayoutConstraint *_ellipsisButtonWidthConstraint;
    NSLayoutConstraint *_ellipsisButtonHeightConstraint;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteButton *plusButton;
@property (retain, nonatomic) PKPaletteButton *ellipsisButton;
@property (retain, nonatomic) PKPaletteMoreOptionsViewController *moreOptionsViewController;
@property (retain, nonatomic) UIViewController *presentedPopoverViewController;
@property (retain, nonatomic) NSLayoutConstraint *plusButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *plusButtonHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *ellipsisButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *ellipsisButtonHeightConstraint;
@property (weak, nonatomic) id <PKPalettePopoverPresenting><PKPaletteAdditionalOptionsViewDelegate> delegate;
@property (nonatomic) _Bool supportsAnnotationEditing;
@property (nonatomic, getter=isAutoHideOn) _Bool autoHideOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)_updateUI;
- (struct CGRect)plusButtonFrame;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)moreOptionsViewControllerDidToggleAutoHide:(id)arg1;
- (void)_didSelectPlusButton:(id)arg1;
- (void)_didSelectEllipsisButton:(id)arg1;
- (double)_contentSizeWidth;

@end
