/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIViewController.h>

@class NSString;

@protocol SBSUIUserNotificationContentProviding;

@interface _SBSUICFUserNotificationContentRemoteContainerViewController : UIViewController

{
    _Bool _isLegacyContentViewController;
    UIViewController<SBSUIUserNotificationContentProviding> *_extensionViewController;
}

@property (retain, nonatomic) UIViewController<SBSUIUserNotificationContentProviding> *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (_Bool)_isSecureForRemoteViewService;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updatePreferredContentSize;
- (_Bool)_canShowWhileLocked;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)configureWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_trackChildViewController:(id)arg1;
- (id)userNotificationContentExtensionContext;

@end
