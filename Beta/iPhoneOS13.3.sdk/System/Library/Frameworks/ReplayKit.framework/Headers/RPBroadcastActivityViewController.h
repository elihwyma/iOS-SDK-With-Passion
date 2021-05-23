/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/UIViewController.h>

@class RPBroadcastActivityHostViewController, UIPopoverPresentationController;

@protocol RPBroadcastActivityViewControllerDelegate;

@interface RPBroadcastActivityViewController : UIViewController

{
    id <RPBroadcastActivityViewControllerDelegate> _delegate;
    UIPopoverPresentationController *_popoverPresentationControllerProxy;
    RPBroadcastActivityHostViewController *_hostViewController;
    CDUnknownBlockType _didFinishHandler;
}

@property (retain, nonatomic) UIPopoverPresentationController *popoverPresentationControllerProxy;
@property (retain, nonatomic) RPBroadcastActivityHostViewController *hostViewController;
@property (copy, nonatomic) CDUnknownBlockType didFinishHandler;
@property (weak, nonatomic) id <RPBroadcastActivityViewControllerDelegate> delegate;

+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg1 handler:(CDUnknownBlockType)arg2 broadcastActivitiesNotInstalledAlertTitle:(id)arg3 broadcastActivitiesNotInstalledAlertMessage:(id)arg4;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)loadBroadcastActivityViewControllerWithHandler:(CDUnknownBlockType)arg1;

- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setModalPresentationStyle:(long long)arg1;
- (id)popoverPresentationController;
- (void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(_Bool)arg4;

@end
