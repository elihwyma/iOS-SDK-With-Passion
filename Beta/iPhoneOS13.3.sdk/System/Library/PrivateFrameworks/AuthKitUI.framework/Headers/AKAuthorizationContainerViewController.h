/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UIViewController.h>

@class AKAuthorizationPresentationContext, NSString;

@protocol AKAuthorizationContainerViewControllerDelegate, AKAuthorizationPaneViewControllerDelegate;

@interface AKAuthorizationContainerViewController : UIViewController

{
    UIViewController *_rootViewController;
    AKAuthorizationPresentationContext *_presentationContext;
    id <AKAuthorizationContainerViewControllerDelegate> _delegate;
    id <AKAuthorizationPaneViewControllerDelegate> _paneDelegate;
}

@property (retain, nonatomic) UIViewController *rootViewController;
@property (nonatomic, readonly) AKAuthorizationPresentationContext *presentationContext;
@property (weak, nonatomic) id <AKAuthorizationContainerViewControllerDelegate> delegate;
@property (weak, nonatomic) id <AKAuthorizationPaneViewControllerDelegate> paneDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)initWithRootViewController:(id)arg1 authorizationContext:(id)arg2;
- (void)_setPaneDelegateForTopViewController;
- (void)_setPaneDelegateForViewController:(id)arg1;
- (void)_setPaneDelegate:(id)arg1 forViewController:(id)arg2;
- (void)_clearPaneDelegateForViewController:(id)arg1;

@end
