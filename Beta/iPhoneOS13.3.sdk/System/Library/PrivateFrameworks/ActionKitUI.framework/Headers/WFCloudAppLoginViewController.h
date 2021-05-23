/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKitUI/WFPasswordAccountLoginViewController.h>

__attribute__((visibility("hidden")))
@interface WFCloudAppLoginViewController : WFPasswordAccountLoginViewController

- (void)viewDidLoad;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)loginURL;
- (id)initWithAccountClass:(Class)arg1;
- (_Bool)usernameIsEmail;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
