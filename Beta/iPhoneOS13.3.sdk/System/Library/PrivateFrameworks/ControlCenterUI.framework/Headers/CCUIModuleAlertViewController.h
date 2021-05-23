/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIViewController.h>

@class CCSModulePresentationOptions, CCUIContentModuleContainerViewController, CCUIModuleInstance, MTMaterialView, NSString, UIView;

@protocol CCUIModuleAlertViewControllerDelegate;

@interface CCUIModuleAlertViewController : UIViewController

{
    CCUIContentModuleContainerViewController *_moduleContainerViewController;
    CCUIModuleInstance *_moduleInstance;
    UIView *_contentView;
    MTMaterialView *_blurView;
    CCSModulePresentationOptions *_presentationOptions;
    NSString *_moduleIdentifier;
    id <CCUIModuleAlertViewControllerDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSString *moduleIdentifier;
@property (copy, nonatomic, readonly) CCSModulePresentationOptions *presentationOptions;
@property (weak, nonatomic) id <CCUIModuleAlertViewControllerDelegate> delegate;
@property (nonatomic, readonly) UIView *moduleAlertView;
@property (nonatomic) double backgroundViewWeighting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGRect)compactModeFrameForContentModuleContainerViewController:(id)arg1;
- (_Bool)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1;
- (void)dismissModulePresentedContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2;

@end
