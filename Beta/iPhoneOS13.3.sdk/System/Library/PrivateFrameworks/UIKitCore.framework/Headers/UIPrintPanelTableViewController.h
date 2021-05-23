/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

@class NSString, UIPrintPanelViewController, UIPrintPreviewViewController, UIPrinterBrowserViewController, _UIPrintMessageAndSpinnerView;

__attribute__((visibility("hidden")))
@interface UIPrintPanelTableViewController : UITableViewController

{
    UIPrintPanelViewController *_printPanelViewController;
    long long _settingsRow;
    long long _rangeRow;
    long long _copiesRow;
    long long _duplexRow;
    long long _grayscaleRow;
    long long _stapleRow;
    long long _punchRow;
    long long _paperRow;
    long long _jobAccountIDRow;
    long long _settingsSection;
    _Bool _contactingPrinter;
    _Bool _printerWarningWasShown;
    _Bool _settingsExpanded;
    UIPrintPreviewViewController *_printPreviewViewController;
    long long _previousPageIndexInCenterOfPreview;
    UIPrinterBrowserViewController *_browserController;
    _UIPrintMessageAndSpinnerView *_messageAndSpinner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_update:(_Bool)arg1;
- (_Bool)accessibilityPerformMagicTap;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)keyCommands;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateStaple:(id)arg1;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)showCancelButton;
- (void)cancelButtonPressed:(id)arg1;
- (_Bool)shouldEnablePrintButton;
- (void)showContacting;
- (double)heightOfPreviewView;
- (void)showPreviewGenerating;
- (void)setShowPreviewGenerating:(_Bool)arg1;
- (void)printButtonPressed:(id)arg1;
- (void)_updateSize;
- (void)updateCopies:(id)arg1;
- (void)updateDuplex:(id)arg1;
- (void)updateGrayscale:(id)arg1;
- (void)updatePunch:(id)arg1;
- (void)updateJobAccountID:(id)arg1;
- (id)textForSettings;
- (void)updateSettingsSummaryText;
- (id)jobAccountTextField;
- (void)selectJobAccountID;
- (void)dismissKeyboardIfNeccessary;
- (void)promptForJobAccountID;
- (void)setShowContactingPrinter:(_Bool)arg1;
- (void)setPdfFileURL:(id)arg1 destinationPaper:(id)arg2 pdfPassword:(id)arg3;
- (id)pdfFileURL;
- (void)clearPrintPanelViewController;
- (void)moreButtonPushed:(id)arg1;
- (void)updatePageRange:(struct _NSRange)arg1;
- (void)updatePageRangeText;

@end
