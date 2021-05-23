/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSObject, NSString, UIAlertController, _UIResilientRemoteViewContainerViewController;

@protocol OS_dispatch_semaphore;

@interface _UIScreenRoutePickerViewController : UIViewController

{
    UIAlertController *_alertController;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    NSObject<OS_dispatch_semaphore> *_remoteViewControllerSemaphore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_containedAlertController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (long long)modalPresentationStyle;
- (void)_commonInitWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setChildViewController:(id)arg1;
- (id)remoteViewController;
- (void)disconnectRoute;
- (void)setCurrentOutputDeviceEnabled:(_Bool)arg1;

@end
