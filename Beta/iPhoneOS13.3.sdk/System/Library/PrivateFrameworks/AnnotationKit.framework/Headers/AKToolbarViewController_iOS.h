/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKToolbarViewController.h>

@class AKColorPickerViewController, AKFloatingAttributePickerViewController, AKLineStylesViewController, AKSignaturesViewController_iOS, AKTextAttributesViewController, NSArray, NSLayoutConstraint, NSString, UIAlertController, UIBarButtonItem, UIColor, UIView;

@interface AKToolbarViewController_iOS : AKToolbarViewController

{
    UIColor *_barTintColor;
    UIColor *_tintColor;
    UIView *_floatingAttributeToolbarContainer;
    UIBarButtonItem *_richSketchButton;
    UIBarButtonItem *_sketchButton;
    UIBarButtonItem *_inkButton;
    UIBarButtonItem *_textButton;
    UIBarButtonItem *_loupeButton;
    UIBarButtonItem *_signatureButton;
    UIBarButtonItem *_undoButton;
    UIBarButtonItem *_redoButton;
    UIBarButtonItem *_textStyleButton;
    UIBarButtonItem *_lineStyleButton;
    UIBarButtonItem *_strokeColorButton;
    NSArray *_staticToolbarItems;
    UIAlertController *_signaturesAlertController;
    UIAlertController *_undoAlertController;
    AKSignaturesViewController_iOS *_signaturesSheetViewController;
    AKLineStylesViewController *_lineStylesViewController;
    AKTextAttributesViewController *_textAttributesViewController;
    AKColorPickerViewController *_colorPickerPopoverViewController;
    AKFloatingAttributePickerViewController *_attributeToolbarViewController;
    NSLayoutConstraint *_attributeToolbarViewControllerConstraint;
}

@property (retain, nonatomic) UIBarButtonItem *richSketchButton;
@property (retain, nonatomic) UIBarButtonItem *sketchButton;
@property (retain, nonatomic) UIBarButtonItem *inkButton;
@property (retain, nonatomic) UIBarButtonItem *textButton;
@property (retain, nonatomic) UIBarButtonItem *loupeButton;
@property (retain, nonatomic) UIBarButtonItem *signatureButton;
@property (retain, nonatomic) UIBarButtonItem *undoButton;
@property (retain, nonatomic) UIBarButtonItem *redoButton;
@property (retain, nonatomic) UIBarButtonItem *textStyleButton;
@property (retain, nonatomic) UIBarButtonItem *lineStyleButton;
@property (retain, nonatomic) UIBarButtonItem *strokeColorButton;
@property (retain, nonatomic) NSArray *staticToolbarItems;
@property (retain, nonatomic) UIAlertController *signaturesAlertController;
@property (retain, nonatomic) UIAlertController *undoAlertController;
@property (retain, nonatomic) AKSignaturesViewController_iOS *signaturesSheetViewController;
@property (retain, nonatomic) AKLineStylesViewController *lineStylesViewController;
@property (retain, nonatomic) AKTextAttributesViewController *textAttributesViewController;
@property (retain, nonatomic) AKColorPickerViewController *colorPickerPopoverViewController;
@property (retain, nonatomic) AKFloatingAttributePickerViewController *attributeToolbarViewController;
@property (retain, nonatomic) NSLayoutConstraint *attributeToolbarViewControllerConstraint;
@property (retain, nonatomic) UIView *floatingAttributeToolbarContainer;
@property (nonatomic, readonly) double visibleHeightOfAttributeBar;
@property (nonatomic, readonly) double heightIncludingAdditionalVisibleBars;
@property (retain, nonatomic) UIColor *barTintColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)_undoManagerNotification:(id)arg1;
- (void)revalidateItems;
- (void)_dismissCurrentlyPresentedPopoverAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_showTextStylePopover:(id)arg1;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (_Bool)isPresentingPopovers;
- (_Bool)isPresentingPopover;
- (void)dismissPresentedPopovers;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)_buildBasicItems;
- (void)_peripheralAvailabilityDidUpdate:(id)arg1;
- (void)dismissAttributeToolbarForSelectedAnnotations;
- (_Bool)_legacyDoodlesEnabled;
- (id)_barButtonForToolbarType:(unsigned long long)arg1;
- (void)_layoutToolbarForTraitCollection:(id)arg1;
- (void)_updateToggleButton:(id)arg1 withTraitCollection:(id)arg2;
- (id)_doodleModeToolbarImage;
- (void)dismissAttributeToolbarImmediately;
- (void)showAttributeToolbarForSelectedAnnotations:(id)arg1 andToolMode:(unsigned long long)arg2;
- (void)syncUIToSelectedColor;
- (id)_createNewToggleToolbarButtonWithImage:(id)arg1 tag:(long long)arg2 target:(id)arg3 selector:(SEL)arg4 autoUpdatesColor:(_Bool)arg5;
- (void)_showSignaturesPopover:(id)arg1;
- (void)_undoLongPressAction:(id)arg1;
- (id)_createNewCustomViewToolbarButtonWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)_showLineStylePopover:(id)arg1;
- (void)_showColorPickerPopover:(id)arg1;
- (id)_createNewColorPickerToolbarButtonWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)_showUndoAlert:(id)arg1;
- (id)_buildUndoAlertController;
- (void)_undoButtonAction:(id)arg1;
- (void)_undoAllButtonAction:(id)arg1;
- (void)signaturesViewControllerEnterSignatureMode:(id)arg1;
- (void)_setupPassthroughViewsForViewController:(id)arg1;
- (long long)_attributeTagForCurrentSelectionState;
- (void)_layoutAttributeContainer;
- (unsigned long long)_workaroundToolbarPopoverPositioningBug26744300;
- (void)_deleteSelectedItems:(id)arg1;
- (id)_toolbarButtonItemOfType:(unsigned long long)arg1;
- (void)_redoButtonAction:(id)arg1;
- (_Bool)_validateUndoButton;

@end
