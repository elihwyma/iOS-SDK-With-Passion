/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKitUI/WFPasswordAccountLoginViewController.h>

@class UITextField;

__attribute__((visibility("hidden")))
@interface WFWordPressLoginViewController : WFPasswordAccountLoginViewController

{
    UITextField *_blogField;
}

@property (weak, nonatomic, readonly) UITextField *blogField;

- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)loginURL;
- (id)initWithAccountClass:(Class)arg1;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)configureTextField:(id)arg1 forKey:(id)arg2;
- (_Bool)canAttemptLogin;

@end
