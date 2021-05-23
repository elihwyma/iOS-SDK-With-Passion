/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewController.h>

@class NSArray, PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrinterUtilityTableViewController : UITableViewController

{
    PKPrinter *_printer;
    _Bool _showSupplyDataUnderPrinterName;
    long long _mainPrinterCellSection;
    long long _printerNameAndLocationSection;
    long long _identifyPrinterSection;
    long long _removeKeychainItemSection;
    NSArray *_supplyData;
}

@property (retain, nonatomic) NSArray *supplyData;

- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)setShowContactingPrinter:(_Bool)arg1;
- (id)initWithPrinter:(id)arg1;

@end
