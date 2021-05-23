/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <UIKit/UIView.h>

@class NSString, PDFKitPopupViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFKitPopupView : UIView

{
    PDFKitPopupViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)removeFromSuperview;
- (_Bool)becomeFirstResponder;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)doneButton:(id)arg1;
- (id)initWithParentAnnotation:(id)arg1 owningPageView:(id)arg2 owningPDFView:(id)arg3;
- (void)_setupPopupView;
- (void)_presentPopupView;
- (void)_presentPopupView_iOS;
- (struct CGRect)_popoverControllerSourceRect;
- (void)_presentViewController:(id)arg1;
- (void)_removeControlForAnnotation;
- (void)_updateParentContents;

@end
