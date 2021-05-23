/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

#import <PencilKit/Swift-Protocol.h>

@class NSLayoutConstraint, NSString, PKColorPicker, PKPaletteToolView, UIColor, UILayoutGuide;

@protocol PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate;

@interface PKPaletteToolPreview : UIView <Swift>

{
    _Bool _toolViewVisible;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    id <PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate> _delegate;
    long long _colorUserInterfaceStyle;
    PKPaletteToolView *_tool;
    PKColorPicker *_colorPickerPopover;
    NSLayoutConstraint *_toolViewTopAnchor;
    NSLayoutConstraint *_toolViewHeightAnchor;
    UILayoutGuide *_layoutGuide;
    NSLayoutConstraint *_layoutGuideTopConstraint;
    NSLayoutConstraint *_layoutGuideWidthConstraint;
    NSLayoutConstraint *_layoutGuideHeightConstraint;
    NSLayoutConstraint *_layoutGuideCenterXConstraint;
}

@property (retain, nonatomic) PKPaletteToolView *tool;
@property (retain, nonatomic) PKColorPicker *colorPickerPopover;
@property (retain, nonatomic) NSLayoutConstraint *toolViewTopAnchor;
@property (retain, nonatomic) NSLayoutConstraint *toolViewHeightAnchor;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *layoutGuideCenterXConstraint;
@property (nonatomic, getter=isToolViewVisible) _Bool toolViewVisible;
@property (weak, nonatomic) id <PKPalettePopoverPresenting><PKPaletteToolPreviewDelegate> delegate;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic, readonly) UIColor *toolColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)showPreviewForToolWithInk:(id)arg1 animated:(_Bool)arg2;
- (void)toggleColorSelectionPopover;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;
- (void)_showColorSelectionPopover;
- (struct CGRect)_popoverPresentingSourceRect;
- (id)_popoverPresentingSourceview;
- (void)_updateLayoutGuideConstraints;
- (void)_replaceCurrentToolWithToolWithInkIdentifier:(id)arg1;
- (void)_updateInkingToolAttributesFromInk:(id)arg1;
- (void)_animateToolViewToVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (double)_toolViewTopSpacing;
- (void)showPreviewForToolWithInk:(id)arg1;

@end
