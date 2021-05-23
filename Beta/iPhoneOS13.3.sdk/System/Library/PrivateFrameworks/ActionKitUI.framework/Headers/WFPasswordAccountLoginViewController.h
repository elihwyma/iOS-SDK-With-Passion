/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKitUI/WFAccountLoginViewController.h>

@class NSDictionary, NSString, NSURL, UIBarButtonItem, UITableView, UITextField;

__attribute__((visibility("hidden")))
@interface WFPasswordAccountLoginViewController : WFAccountLoginViewController

{
    UITableView *_tableView;
    NSDictionary *_textFieldsByIndexPath;
    UITextField *_usernameField;
    UITextField *_passwordField;
    UIBarButtonItem *_loginItem;
    UIBarButtonItem *_loadingItem;
}

@property (weak, nonatomic, readonly) UITextField *usernameField;
@property (weak, nonatomic, readonly) UITextField *passwordField;
@property (retain, nonatomic) UIBarButtonItem *loginItem;
@property (retain, nonatomic) UIBarButtonItem *loadingItem;
@property (weak, nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) NSURL *loginURL;
@property (copy, nonatomic) NSDictionary *textFieldsByIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (id)initWithAccountClass:(Class)arg1;
- (_Bool)usernameIsEmail;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)configureTextField:(id)arg1 forKey:(id)arg2;
- (_Bool)canAttemptLogin;
- (void)loginPressed:(id)arg1;

@end
