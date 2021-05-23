/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <UIKit/UIViewController.h>

@class BFFPaneHeaderView, NSString, UITableView, UIView;

@interface CDPTableViewController : UIViewController

{
    NSString *_headerTitle;
    NSString *_headerSubTitle;
    CDUnknownBlockType _completionHandler;
    UIView *_containerView;
    UITableView *_tableView;
    BFFPaneHeaderView *_headerView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) BFFPaneHeaderView *headerView;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *headerSubTitle;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) _Bool isIPad;
@property (nonatomic, readonly) _Bool isiPhone5OrSmaller;
@property (nonatomic, readonly) _Bool uiTestMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)heightForHeaderInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2;

@end
