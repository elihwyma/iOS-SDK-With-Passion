/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSString;

@interface WFDiagnosticsViewController : UITableViewController

{
    _Bool _saving;
    CDUnknownBlockType _saveHandler;
    NSString *_comment;
}

@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) CDUnknownBlockType saveHandler;
@property (nonatomic) _Bool saving;

- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
