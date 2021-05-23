/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@class AKAttributePickerViewController, AKAttributesPickerButton, AKController, AKSignatureCreationViewController_iOS, AKSignaturesViewController_iOS, AKTextAttributesViewController, AKToolbarBackgroundView, AKToolsListViewController, NSLayoutConstraint, NSString, PKPaletteHostView, PKPaletteView, PKToolPicker, UIAlertController, UIBarButtonItem, UIToolbar;

@protocol AKToolbarViewOpacityEditingDelegate;

@interface AKToolbarView : UIView

{
    UIToolbar *_toolbar;
    AKToolbarBackgroundView *_backgroundView;
    PKPaletteHostView *_paletteHostView;
    PKPaletteView *_paletteView;
    UIBarButtonItem *_undoButton;
    UIBarButtonItem *_redoButton;
    UIBarButtonItem *_shareButton;
    UIBarButtonItem *_shapesPickerButton;
    UIBarButtonItem *_attributesPickerBarButton;
    UIBarButtonItem *_undoRedoFixedSpace;
    UIBarButtonItem *_attributesAddShapeFixedSpace;
    NSLayoutConstraint *_toolbarBottomConstraint;
    NSLayoutConstraint *_heightConstraint;
    UIAlertController *_signaturesAlertController;
    UIAlertController *_undoAlertController;
    AKTextAttributesViewController *_textAttributesViewController;
    AKSignaturesViewController_iOS *_signaturesSheetViewController;
    AKSignatureCreationViewController_iOS *_signaturesCreationController;
    AKToolsListViewController *_toolsListViewController;
    AKAttributePickerViewController *_attributePickerViewController;
    _Bool _showAttributePicker;
    _Bool _shouldUseCachedSafeAreaInsets;
    struct UIEdgeInsets _cachedSafeAreaInsets;
    AKAttributesPickerButton *_attributesPickerButton;
    NSLayoutConstraint *_attributesPickerButtonWidthConstraint;
    NSLayoutConstraint *_attributesPickerButtonHeigthConstraint;
    PKToolPicker *_toolPicker;
    _Bool _supportsOpacityEditing;
    _Bool _undoRedoButtonsHidden;
    _Bool _alwaysShowUndoButton;
    _Bool _shareButtonHidden;
    _Bool _translucent;
    _Bool _contentsHidden;
    _Bool _wantsClearBackgroundColorInCompactSize;
    AKController *_annotationController;
    id <AKToolbarViewOpacityEditingDelegate> _opacityEditingDelegate;
}

@property (nonatomic) _Bool undoRedoButtonsHidden;
@property (nonatomic) _Bool alwaysShowUndoButton;
@property (nonatomic, getter=isShareButtonHidden) _Bool shareButtonHidden;
@property (nonatomic) id shareButtonTarget;
@property (nonatomic) SEL shareButtonAction;
@property (nonatomic, getter=isTranslucent) _Bool translucent;
@property (nonatomic) _Bool contentsHidden;
@property (nonatomic, readonly) _Bool useNewFullscreenPalette;
@property (nonatomic) _Bool supportsOpacityEditing;
@property (weak, nonatomic) id <AKToolbarViewOpacityEditingDelegate> opacityEditingDelegate;
@property (nonatomic) _Bool wantsClearBackgroundColorInCompactSize;
@property (weak, nonatomic) AKController *annotationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)undoButtonImage;
+ (id)redoButtonImage;
+ (id)undoButtonImageWithStyle:(unsigned long long)arg1;
+ (id)redoButtonImageWithStyle:(unsigned long long)arg1;

- (void)dealloc;
- (void)setOpaque:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (id)presentedViewController;
- (void)updateConstraints;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (id)selectedAnnotations;
- (void)_undoManagerNotification:(id)arg1;
- (void)_annotationSelectionNotification:(id)arg1;
- (void)_textEffectsWindowIsHosted:(id)arg1;
- (void)_keyWindowDidBecomeActive:(id)arg1;
- (void)_undo:(id)arg1;
- (void)_undoLongPress:(id)arg1;
- (void)_redo:(id)arg1;
- (void)_showShapesPicker:(id)arg1;
- (void)_showTextAttributes:(id)arg1;
- (struct UIEdgeInsets)_safeAreaInsetsWithCachingIfNeeded;
- (void)_setupPaletteViewIfNecessary;
- (void)_forceToolPickerVisible:(_Bool)arg1;
- (void)hideModernToolbarView;
- (id)popoverPresentingController;
- (void)_updatePalette;
- (_Bool)_setToolPickerVisible:(_Bool)arg1 forResponder:(id)arg2;
- (void)_updateAttributeControllerInk:(id)arg1;
- (void)forceHideRuler;
- (_Bool)shouldHide;
- (void)revalidateItems;
- (_Bool)shouldUseCompactWidth;
- (void)setContentsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_saveCachedSafeAreaInsets;
- (void)_shouldUseCachedSafeAreaInsets:(_Bool)arg1;
- (void)_cleanupAfterUndoAlert;
- (void)_undoAll:(id)arg1;
- (void)_showShapeAttributes:(id)arg1;
- (void)_installAttributesPickerButtonInPaletteContextEditingViewIfNeeded;
- (void)_updateAttributesPickerButtonWithCurrentSelection:(id)arg1;
- (void)_showUndoAlertPopover:(id)arg1;
- (void)_showMarkupToolsPopover:(id)arg1;
- (void)_dismissCurrentlyPresentedPopoverAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_showTextStylePopover:(id)arg1;
- (void)_showShapeAttributesPopover:(id)arg1;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)_presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2;
- (void)didDismissPopover;
- (void)_updateTraitCollectionForViewController:(id)arg1;
- (id)createUndoViewController;
- (void)_showSignaturesPopover:(id)arg1 fromSourceView:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)endOpacityEditing;
- (struct CGRect)frameObscuredInView:(id)arg1;
- (void)toolsList:(id)arg1 didSelectToolWithTag:(long long)arg2;
- (void)toolsListDidSelectOpacityItem:(id)arg1;
- (void)attributePicker:(id)arg1 didSelectToolWithTag:(long long)arg2 attributeTag:(long long)arg3;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)paletteViewDidChangePosition:(id)arg1;
- (void)paletteViewDidSelectPlusButton:(id)arg1;
- (void)paletteViewDidSelectOpacityOption:(id)arg1;
- (id)paletteViewSelectedAnnotationColor:(id)arg1;
- (id)paletteViewUndoManager:(id)arg1;
- (void)paletteViewSelectedToolInkDidChange:(id)arg1;
- (void)paletteViewDidToggleRuler:(id)arg1;
- (_Bool)paletteView:(id)arg1 shouldSetSelectedToolColor:(id)arg2;
- (_Bool)setToolPickerVisible:(_Bool)arg1 forFirstResponder:(id)arg2;
- (unsigned long long)layoutForSize:(struct CGSize)arg1;
- (_Bool)shouldUseCompactHeight;
- (void)resetToLastDrawingTool;
- (void)_showColorPicker:(id)arg1;
- (_Bool)isPresentingPopovers;
- (_Bool)isPresentingPopover;
- (void)dismissPresentedPopovers;
- (long long)tagForPKPaletteAnnotationType:(long long)arg1;
- (id)inkPicker;

@end
