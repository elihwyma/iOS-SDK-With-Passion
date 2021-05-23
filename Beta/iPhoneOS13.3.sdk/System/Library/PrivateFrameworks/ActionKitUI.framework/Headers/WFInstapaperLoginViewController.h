/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UITableViewController.h>

@class IKEngine, NSString, UIBarButtonItem, UITextField;

@protocol WFInstapaperLoginViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFInstapaperLoginViewController : UITableViewController

{
    id <WFInstapaperLoginViewControllerDelegate> _delegate;
    IKEngine *_engine;
    UITextField *_usernameField;
    UITextField *_passwordField;
    UIBarButtonItem *_loginItem;
    UIBarButtonItem *_loadingItem;
}

@property (retain, nonatomic) IKEngine *engine;
@property (weak, nonatomic) UITextField *usernameField;
@property (weak, nonatomic) UITextField *passwordField;
@property (retain, nonatomic) UIBarButtonItem *loginItem;
@property (retain, nonatomic) UIBarButtonItem *loadingItem;
@property (weak, nonatomic) id <WFInstapaperLoginViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)login;
- (void)engine:(id)arg1 didFailConnection:(id)arg2 error:(id)arg3;
- (void)engine:(id)arg1 connection:(id)arg2 didReceiveAuthToken:(id)arg3 andTokenSecret:(id)arg4;
- (void)updateLoginButton;

@end
