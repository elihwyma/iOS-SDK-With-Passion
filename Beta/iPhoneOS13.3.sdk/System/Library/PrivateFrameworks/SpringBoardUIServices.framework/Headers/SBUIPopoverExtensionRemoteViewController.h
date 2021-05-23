/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIViewController.h>

@protocol SBUIPopoverExtension, _SBUIPopoverExtensionHostInterface;

@interface SBUIPopoverExtensionRemoteViewController : UIViewController

{
    id <_SBUIPopoverExtensionHostInterface> _hostService;
    UIViewController<SBUIPopoverExtension> *_extensionViewController;
}

@property (retain, nonatomic) id <_SBUIPopoverExtensionHostInterface> hostService;
@property (retain, nonatomic) UIViewController<SBUIPopoverExtension> *extensionViewController;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (_Bool)_isSecureForRemoteViewService;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)_updateForBundleIdentifier:(id)arg1;
- (id)popoverExtensionContext;
- (void)_setupChildViewController:(id)arg1;

@end
