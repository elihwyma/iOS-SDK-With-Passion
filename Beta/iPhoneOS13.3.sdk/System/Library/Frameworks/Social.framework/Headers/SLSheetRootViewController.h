/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SLComposeServiceViewController, SLSheetTitleView, UIImage, UINavigationItem, UITableView, UITableViewController, UIView;

__attribute__((visibility("hidden")))
@interface SLSheetRootViewController : UIViewController

{
    NSArray *_configurationItems;
    UITableViewController *_tableViewController;
    SLSheetTitleView *_titleView;
    UINavigationItem *_navItem;
    UIViewController *_autoCompletionViewController;
    SLComposeServiceViewController *_delegate;
    UIView *_contentView;
    UIImage *_serviceIconImage;
}

@property (weak, nonatomic) SLComposeServiceViewController *delegate;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImage *serviceIconImage;
@property (nonatomic, readonly) UITableView *tableView;
@property (copy, nonatomic) NSArray *configurationItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (id)navigationItem;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)resetConfigurationItems;
- (double)_preferredTableViewHeight;
- (void)_updateCellForConfigurationItem:(id)arg1;
- (void)observeConfigurationItems:(id)arg1;
- (void)_updateCell:(id)arg1 withConfigurationItem:(id)arg2;
- (void)configurationItemDidChange:(id)arg1;
- (void)setPostButtonTitle:(id)arg1;
- (void)setPostButtonEnabled:(_Bool)arg1;
- (void)updateContentViewSize:(struct CGSize)arg1;
- (void)presentAutoCompletionViewController:(id)arg1 apparentContentHeight:(double)arg2 contentViewChangeBlock:(CDUnknownBlockType)arg3;
- (void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(CDUnknownBlockType)arg1;

@end
