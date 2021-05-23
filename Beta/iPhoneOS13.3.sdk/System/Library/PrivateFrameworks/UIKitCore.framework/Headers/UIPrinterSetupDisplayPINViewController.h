/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupDisplayPINViewController : UIViewController

{
    PKPrinter *_printer;
}

@property (retain, nonatomic) PKPrinter *printer;

- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)initWithPrinter:(id)arg1;
- (void)enterPIN;
- (void)showDisplayMessage:(long long)arg1;

@end
