/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSString, UIBarButtonItem, UITextField, WFPinboardSessionManager;

@protocol WFPinboardLoginViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFPinboardLoginViewController : UITableViewController

{
    id <WFPinboardLoginViewControllerDelegate> _delegate;
    long long _state;
    WFPinboardSessionManager *_sessionManager;
    UITextField *_usernameField;
    UITextField *_passwordField;
    UITextField *_tokenField;
    UIBarButtonItem *_loginItem;
    UIBarButtonItem *_loadingItem;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) WFPinboardSessionManager *sessionManager;
@property (weak, nonatomic) UITextField *usernameField;
@property (weak, nonatomic) UITextField *passwordField;
@property (weak, nonatomic) UITextField *tokenField;
@property (retain, nonatomic) UIBarButtonItem *loginItem;
@property (retain, nonatomic) UIBarButtonItem *loadingItem;
@property (weak, nonatomic) id <WFPinboardLoginViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (_Bool)accessibilityPerformEscape;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)login;
- (void)updateLoginButton;

@end
