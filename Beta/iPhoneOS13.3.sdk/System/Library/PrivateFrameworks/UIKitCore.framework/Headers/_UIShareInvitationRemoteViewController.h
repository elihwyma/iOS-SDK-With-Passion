/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString, UIViewController;

@protocol _UISharingPublicController;

__attribute__((visibility("hidden")))
@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController

{
    UIViewController<_UISharingPublicController> *_publicController;
}

@property (weak, nonatomic) UIViewController<_UISharingPublicController> *publicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)_dismissViewController;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(_Bool)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(_Bool)arg1;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_shareDidChange:(id)arg1;
- (void)_shareWasMadePrivate;
- (void)_performAuxiliaryActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performHeaderActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestSavedShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissForActivityRepresentation:(CDUnknownBlockType)arg1;
- (void)_representFullscreenAfterActivityDismissal:(CDUnknownBlockType)arg1;
- (void)_requestContentSize:(struct CGSize)arg1;
- (void)_updateTraitCollectionForPopoverStatus;
- (void)_dismissAndRepresentForActivity:(CDUnknownBlockType)arg1;

@end
