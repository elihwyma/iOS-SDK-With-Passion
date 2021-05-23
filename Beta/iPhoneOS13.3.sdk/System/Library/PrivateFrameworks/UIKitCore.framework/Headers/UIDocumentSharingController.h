/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSString, UIImage, _UIRemoteViewController, _UIResilientRemoteViewContainerViewController, _UIShareInvitationRemoteViewController;

@protocol _UIDocumentSharingControllerDelegate_Private;

@interface UIDocumentSharingController : UIViewController

{
    _Bool _collaborationUIEnabled;
    _Bool _showOnlyAddPeople;
    _Bool _showRootFolder;
    _Bool _legacyAppearance;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    UIViewController *_originalPresentingViewController;
    UIViewController *_strongReferenceToOurself;
    id _delegate;
    UIImage *_thumbnail;
    NSString *_auxiliaryActionTitle;
    NSString *_mailTemplate;
    NSString *_messageTemplate;
    NSString *_mailSubject;
    NSString *_initialHeaderSubtitle;
    NSString *_headerSubtitle;
    NSString *_headerActionTitle;
    NSString *_appName;
    id <_UIDocumentSharingControllerDelegate_Private> __privateDelegate;
}

@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController;
@property (nonatomic, readonly, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController;
@property (weak, nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) UIViewController *originalPresentingViewController;
@property (retain, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic, getter=_thumbnail, setter=_setThumbnail:) UIImage *thumbnail;
@property (copy, nonatomic, getter=_auxiliaryActionTitle, setter=_setAuxiliaryActionTitle:) NSString *auxiliaryActionTitle;
@property (copy, nonatomic, getter=_mailTemplate, setter=_setMailTemplate:) NSString *mailTemplate;
@property (copy, nonatomic, getter=_messageTemplate, setter=_setMessageTemplate:) NSString *messageTemplate;
@property (copy, nonatomic, getter=_mailSubject, setter=_setMailSubject:) NSString *mailSubject;
@property (nonatomic, getter=_collaborationUIEnabled, setter=_setCollaborationUIEnabled:) _Bool collaborationUIEnabled;
@property (nonatomic, getter=_showOnlyAddPeople, setter=_setShowOnlyAddPeople:) _Bool showOnlyAddPeople;
@property (nonatomic, getter=_showRootFolder, setter=_setShowRootFolder:) _Bool showRootFolder;
@property (copy, nonatomic, getter=_initialHeaderSubtitle, setter=_setInitialHeaderSubtitle:) NSString *initialHeaderSubtitle;
@property (copy, nonatomic, getter=_headerSubtitle, setter=_setHeaderSubtitle:) NSString *headerSubtitle;
@property (copy, nonatomic, getter=_headerActionTitle, setter=_setHeaderActionTitle:) NSString *headerActionTitle;
@property (copy, nonatomic, getter=_appName, setter=_setAppName:) NSString *appName;
@property (weak, nonatomic, getter=_privateDelegate, setter=_setPrivateDelegate:) id <_UIDocumentSharingControllerDelegate_Private> _privateDelegate;
@property (nonatomic, getter=_legacyAppearance, setter=_setLegacyAppearance:) _Bool legacyAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

- (void)dealloc;
- (_Bool)_requiresCustomPresentationController;
- (void)_presentationControllerDidDismiss:(id)arg1;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithFileURL:(id)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_didDismiss;
- (id)_sharingViewPresentationController;
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
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (void)_setMailSubject:(id)arg1 template:(id)arg2;
- (void)_updatePresentationStyleForLegacyAppearance;

@end
