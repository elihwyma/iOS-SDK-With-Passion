/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSString, PKPrinter, UINavigationController, UIPopoverController, UIPrinterBrowserViewController, UIPrinterPickerController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPrinterPickerViewController : UIViewController

{
    UIViewController *_parentController;
    UIPrinterPickerController *_printerPickerController;
    UINavigationController *_navigationController;
    UIPrinterBrowserViewController *_printerBrowserViewController;
    UIViewController *_originalViewControllerInNav;
    id _originalNavControllerDelegate;
    UIPopoverController *_poverController;
    UIWindow *_window;
    _Bool _dismissed;
    _Bool _animated;
    _Bool _observingRotation;
    _Bool _parentHasNoPopover;
    _Bool _userSelectedPrinter;
    PKPrinter *_printer;
}

@property (retain, nonatomic) PKPrinter *printer;
@property _Bool userSelectedPrinter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)cancelPrinting;
- (void)printerBrowserViewDidDisappear;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentInParentAnimated:(_Bool)arg1;
- (_Bool)filtersPrinters;
- (_Bool)shouldShowPrinter:(id)arg1;
- (void)_presentWindow;
- (void)dismissPrinterPickerAnimated:(_Bool)arg1;
- (id)initWithPrinterPickerController:(id)arg1 inParentController:(id)arg2;
- (void)presentPrinterPickerPanelAnimated:(_Bool)arg1;
- (void)presentPrinterPickerPanelFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)presentPrinterPickerPanelFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;

@end
