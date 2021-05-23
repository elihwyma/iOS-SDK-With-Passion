/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class CKContainer, CKContainerSetupInfo, CKShare, NSDictionary, NSObject, NSString, UIImage, _UIRemoteViewController, _UIResilientRemoteViewContainerViewController, _UIShareInvitationRemoteViewController;

@protocol OS_dispatch_semaphore, UICloudSharingControllerDelegate, _UICloudSharingControllerDelegate_Internal;

@interface UICloudSharingController : UIViewController

{
    _Bool _isDelayingPresentation;
    NSObject<OS_dispatch_semaphore> *_viewServiceValidSema;
    _Bool _shareNeedsDeletion;
    _Bool _primaryAuxiliarySwitchState;
    _Bool _secondaryAuxiliarySwitchState;
    id <UICloudSharingControllerDelegate> _delegate;
    CKShare *_share;
    unsigned long long _availablePermissions;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    _UIShareInvitationRemoteViewController *_remoteViewController;
    CKContainer *_container;
    CKContainerSetupInfo *_containerSetupInfo;
    NSDictionary *_participantDetails;
    CDUnknownBlockType _preparationHandler;
    UIViewController *_originalPresentingViewController;
    UIViewController *_strongReferenceToOurself;
    NSString *_primaryAuxiliarySwitchTitle;
    NSString *_secondaryAuxiliarySwitchTitle;
    NSString *_rootFolderTitle;
    NSString *_folderSubitemName;
    UIImage *_headerPrimaryImage;
    UIImage *_headerSecondaryImage;
    id <_UICloudSharingControllerDelegate_Internal> _internalDelegate;
}

@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController;
@property (nonatomic, readonly, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController;
@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (retain, nonatomic, getter=_participantDetails, setter=_setParticipantDetails:) NSDictionary *participantDetails;
@property (copy, nonatomic) CDUnknownBlockType preparationHandler;
@property (weak, nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) UIViewController *originalPresentingViewController;
@property (retain, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself;
@property (retain, nonatomic, getter=_primaryAuxiliarySwitchTitle, setter=_setPrimaryAuxiliarySwitchTitle:) NSString *primaryAuxiliarySwitchTitle;
@property (nonatomic, getter=_primaryAuxiliarySwitchState, setter=_setPrimaryAuxiliarySwitchState:) _Bool primaryAuxiliarySwitchState;
@property (retain, nonatomic, getter=_secondaryAuxiliarySwitchTitle, setter=_setSecondaryAuxiliarySwitchTitle:) NSString *secondaryAuxiliarySwitchTitle;
@property (nonatomic, getter=_secondaryAuxiliarySwitchState, setter=_setSecondaryAuxiliarySwitchState:) _Bool secondaryAuxiliarySwitchState;
@property (retain, nonatomic, getter=_rootFolderTitle, setter=_setRootFolderTitle:) NSString *rootFolderTitle;
@property (retain, nonatomic, getter=_folderSubitemName, setter=_setFolderSubitemName:) NSString *folderSubitemName;
@property (retain, nonatomic, getter=_headerPrimaryImage, setter=_setHeaderPrimaryImage:) UIImage *headerPrimaryImage;
@property (retain, nonatomic, getter=_headerSecondaryImage, setter=_setHeaderSecondaryImage:) UIImage *headerSecondaryImage;
@property (weak, nonatomic) id <_UICloudSharingControllerDelegate_Internal> internalDelegate;
@property (weak, nonatomic) id <UICloudSharingControllerDelegate> delegate;
@property (nonatomic) unsigned long long availablePermissions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

- (void)dealloc;
- (_Bool)_commonInit;
- (_Bool)_requiresCustomPresentationController;
- (void)__viewControllerWillBePresented:(_Bool)arg1;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithShare:(id)arg1 container:(id)arg2;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_deleteShareAfterDismissalWithoutSave:(CDUnknownBlockType)arg1;
- (void)_sendDidStopSharingDelegate;
- (void)_didDismiss;
- (id)_sharingViewPresentationController;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(_Bool)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(_Bool)arg1;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_callPreparationHandler:(CDUnknownBlockType)arg1;
- (void)_shareDidChange:(id)arg1;
- (void)_shareWasMadePrivate;
- (void)_performAuxiliaryActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performHeaderActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestSavedShareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissForActivityRepresentation:(CDUnknownBlockType)arg1;
- (void)_representFullscreenAfterActivityDismissal:(CDUnknownBlockType)arg1;
- (id)initWithShare:(id)arg1 preparationHandler:(CDUnknownBlockType)arg2;
- (id)initWithPreparationHandler:(CDUnknownBlockType)arg1;
- (id)activityItemSource;

@end
