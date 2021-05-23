/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, PKPrinter, UIButton, UIPrinterSetupConnectingView;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupConfigureViewController : UITableViewController <Swift>

{
    _Bool _addToNetwork;
    _Bool _directPrinting;
    PKPrinter *_printer;
    NSString *_directPasscode;
    UIButton *_finishButton;
    UIPrinterSetupConnectingView *_connectingView;
}

@property (retain, nonatomic) PKPrinter *printer;
@property (nonatomic) _Bool addToNetwork;
@property (nonatomic) _Bool directPrinting;
@property (copy, nonatomic) NSString *directPasscode;
@property (retain, nonatomic) UIButton *finishButton;
@property (retain, nonatomic) UIPrinterSetupConnectingView *connectingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)finish;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)textDidChange:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)initWithPrinter:(id)arg1;
- (void)finished:(_Bool)arg1;
- (void)toggleAddToNetwork:(id)arg1;
- (void)toggleDirectPrinting:(id)arg1;

@end
