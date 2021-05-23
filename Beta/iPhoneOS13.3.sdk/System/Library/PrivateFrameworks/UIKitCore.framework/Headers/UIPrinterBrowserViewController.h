/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSMutableArray, NSString, PKPrinter, PKPrinterBrowser, UIPrinterSearchingView;

@protocol UIPrinterBrowserOwner;

__attribute__((visibility("hidden")))
@interface UIPrinterBrowserViewController : UITableViewController

{
    id <UIPrinterBrowserOwner> _ownerPanelViewController;
    PKPrinterBrowser *_printerBrowser;
    NSMutableArray *_preferredPrinters;
    NSMutableArray *_otherPrinters;
    NSMutableArray *_filteredOutPrinters;
    NSArray *_lastUsedPrinters;
    PKPrinter *_lockedPrinter;
    _Bool _loaded;
    UIPrinterSearchingView *_searchingView;
    _Bool _searchingViewConstraintsSet;
    _Bool _shouldFilterPrinters;
    double _rowHeight;
    double _maximumPopoverHeight;
}

@property double maximumPopoverHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willEnterForeground;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)updateViewConstraints;
- (void)showCancelButton;
- (id)initWithOwnerViewController:(id)arg1;
- (void)adjustPopoverSize;
- (void)printerInfoButtonTapped:(id)arg1;
- (void)stopPrinterBrowser;
- (void)didChangePreferredContentSize;
- (void)startPrinterBrowser;
- (void)updateSearching;
- (id)printerAtIndexPath:(id)arg1;
- (void)addPrinter:(id)arg1 moreComing:(_Bool)arg2;
- (void)removePrinter:(id)arg1 moreGoing:(_Bool)arg2;
- (void)selectPrinter:(id)arg1;

@end
