/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUAppleMusicAccountModuleController, NADeallocationSentinel, NAFuture, NSString, UIAlertController;

@interface HUAppleMusicAccountViewController : HUItemTableViewController

{
    HUAppleMusicAccountModuleController *_appleMusicAccountModuleController;
    NAFuture *_accountArbitrationFuture;
    NADeallocationSentinel *_appleMusicLoadingViewControllerDeallocationSentinel;
    UIAlertController *_appleMusicLoadingViewController;
}

@property (retain, nonatomic) HUAppleMusicAccountModuleController *appleMusicAccountModuleController;
@property (retain, nonatomic) NAFuture *accountArbitrationFuture;
@property (retain, nonatomic) NADeallocationSentinel *appleMusicLoadingViewControllerDeallocationSentinel;
@property (retain, nonatomic) UIAlertController *appleMusicLoadingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)itemModuleControllers;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (void)appleMusicModuleControllerPresentSignInFlow:(id)arg1;
- (void)appleMusicModuleControllerDidUpdateAuthenticationState:(id)arg1;
- (void)appleMusicModuleController:(id)arg1 willPresentContext:(id)arg2 account:(id)arg3;
- (id)_appleMusicFooterMessage;
- (_Bool)_accessorySupportsMultiUser;
- (id)_appleMusicFooterView;

@end
