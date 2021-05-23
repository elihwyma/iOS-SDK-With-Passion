/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBrowserViewController.h>

@class CKAppManagerViewController, NSString, UINavigationController;

@protocol CKBrowserAppManagerViewControllerDelegate;

@interface CKBrowserAppManagerViewController : CKBrowserViewController

{
    UINavigationController *_navController;
    CKAppManagerViewController *_appViewController;
    id <CKBrowserAppManagerViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <CKBrowserAppManagerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isLoaded;
- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (long long)preferredStatusBarStyle;
- (_Bool)isDismissing;
- (_Bool)shouldShowChatChrome;
- (id)parentTransitioningDelegate;
- (long long)browserPresentationStyle;
- (_Bool)wantsDarkUI;
- (_Bool)wantsOpaqueUI;
- (_Bool)supportsQuickView;
- (_Bool)mayBeKeptInViewHierarchy;
- (long long)parentModalPresentationStyle;
- (void)browserAppManagerDidSelectPlugin:(id)arg1;
- (void)appManagerViewControllerDidFinish:(id)arg1;
- (_Bool)appAllowedByScreenTimeWithBundleIdentifier:(id)arg1;
- (void)delegate_BrowserAppManagerDidSelectPlugin:(id)arg1;

@end
