/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

@interface WFValueListViewController : UITableViewController

{
    NSString *_selectedTitle;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _footerHandler;
    NSArray *_titles;
}

@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) NSString *selectedTitle;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType footerHandler;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithTitles:(id)arg1;

@end
