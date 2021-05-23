/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class PKPrinter, UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupPINViewController : UIViewController

{
    PKPrinter *_printer;
    UIPrinterSetupConnectingView *_connectingView;
    UIPrinterSetupPINView *_PINView;
    UIScrollView *_scrollView;
}

@property (retain, nonatomic) PKPrinter *printer;
@property (retain, nonatomic) UIPrinterSetupConnectingView *connectingView;
@property (retain, nonatomic) UIPrinterSetupPINView *PINView;
@property (retain, nonatomic) UIScrollView *scrollView;

- (void)dealloc;
- (void)connected:(_Bool)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)initWithPrinter:(id)arg1;
- (void)connectToPrinter;
- (void)showSetup;
- (void)showFailure;

@end
