/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <UIKitCore/UIViewController.h>

#import <DocumentManager/Swift-Protocol.h>

@class DOCAppearance, DOCConfiguration, DOCDocBrowserVC_UIActivityViewController, NSArray, NSOperationQueue, NSString, UIColor, UIPresentationController, UIView, _UIRemoteViewController, _UIResilientRemoteViewContainerViewController;

@protocol DOCServiceDocumentBrowserViewControllerInterface, UIDocumentBrowserViewControllerDelegate;

@interface UIDocumentBrowserViewController : UIViewController <Swift>

{
    _Bool _isDisplayingRemoteViewController;
    UIView *_trackingViewsContainer;
    DOCAppearance *_appearance;
    _Bool _allowsDocumentCreation;
    _Bool _allowsPickingMultipleItems;
    _Bool _shouldShowFileExtensions;
    _Bool _shouldDelayRemoteViewController;
    id <UIDocumentBrowserViewControllerDelegate> _delegate;
    NSArray *_additionalLeadingNavigationBarButtonItems;
    NSArray *_additionalTrailingNavigationBarButtonItems;
    NSArray *_customActions;
    NSArray *_leadingBarButtonTrackingViews;
    NSArray *_trailingBarButtonTrackingViews;
    NSArray *_remoteAdditionalLeadingNavigationBarButtonItems;
    NSArray *_remoteAdditionalTrailingNavigationBarButtonItems;
    _UIResilientRemoteViewContainerViewController *_remoteViewController;
    DOCDocBrowserVC_UIActivityViewController *_activityViewController;
    UIPresentationController *_adaptivePresentationController;
    id <DOCServiceDocumentBrowserViewControllerInterface> _serviceProxy;
    NSOperationQueue *_serviceQueue;
    DOCConfiguration *_configuration;
    UIColor *_createButtonColor;
    UIColor *_badgeTintColor;
    UIColor *_inBrowserTintColor;
    UIColor *_sortingBackgroundColor;
    UIColor *_backgroundColor;
    UIColor *_itemTitleColor;
    UIColor *_itemSubtitleColor;
}

@property (retain, nonatomic) NSArray *leadingBarButtonTrackingViews;
@property (retain, nonatomic) NSArray *trailingBarButtonTrackingViews;
@property (retain, nonatomic) NSArray *remoteAdditionalLeadingNavigationBarButtonItems;
@property (retain, nonatomic) NSArray *remoteAdditionalTrailingNavigationBarButtonItems;
@property (nonatomic) _Bool shouldDelayRemoteViewController;
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewController;
@property (weak, nonatomic) DOCDocBrowserVC_UIActivityViewController *activityViewController;
@property (weak, nonatomic) UIPresentationController *adaptivePresentationController;
@property (retain, nonatomic) id <DOCServiceDocumentBrowserViewControllerInterface> serviceProxy;
@property (retain, nonatomic) NSOperationQueue *serviceQueue;
@property (retain, nonatomic) DOCConfiguration *configuration;
@property (retain, nonatomic) NSArray *additionalToolbarButtonItems;
@property (copy, nonatomic) UIColor *createButtonColor;
@property (copy, nonatomic) UIColor *badgeTintColor;
@property (copy, nonatomic) UIColor *inBrowserTintColor;
@property (copy, nonatomic) UIColor *sortingBackgroundColor;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *itemTitleColor;
@property (copy, nonatomic) UIColor *itemSubtitleColor;
@property (nonatomic) double createButtonAspectRatio;
@property (copy, nonatomic) NSString *createButtonTitle;
@property (retain, nonatomic) UIColor *backgroundTintColor;
@property (weak, nonatomic) id <UIDocumentBrowserViewControllerDelegate> delegate;
@property (nonatomic) _Bool allowsDocumentCreation;
@property (nonatomic) _Bool allowsPickingMultipleItems;
@property (copy, nonatomic, readonly) NSArray *allowedContentTypes;
@property (copy, nonatomic, readonly) NSArray *recentDocumentsContentTypes;
@property (nonatomic) _Bool shouldShowFileExtensions;
@property (retain, nonatomic) NSArray *additionalLeadingNavigationBarButtonItems;
@property (retain, nonatomic) NSArray *additionalTrailingNavigationBarButtonItems;
@property (copy, nonatomic) NSArray *customActions;
@property (nonatomic) unsigned long long browserUserInterfaceStyle;
@property (copy, nonatomic) NSString *localizedCreateDocumentActionTitle;
@property (nonatomic) double defaultDocumentAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) DOCAppearance *effectiveAppearance;

+ (id)placeholderURLForDownloadsFolder;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)becomeFirstResponder;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (long long)preferredStatusBarStyle;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (id)keyCommands;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateBackgroundColor;
- (void)_didTriggerCustomActionWithIdentifier:(id)arg1 onItems:(id)arg2;
- (void)_didTriggerBarButtonWithUUID:(id)arg1;
- (void)_didPickItems:(id)arg1;
- (void)_commitDocumentURLPreview:(id)arg1;
- (void)_didRequestDocumentCreationWithHandler:(CDUnknownBlockType)arg1;
- (void)_didImportDocumentAtURL:(id)arg1 toDestinationItem:(id)arg2;
- (void)_failedToImportDocumentAtURL:(id)arg1 error:(id)arg2;
- (void)_updateRemoteBarButtonFrames:(id)arg1 forUUID:(id)arg2;
- (void)_presentActivityViewControllerForItems:(id)arg1 withPopoverTracker:(id)arg2 isContentManaged:(_Bool)arg3 additionalActivities:(id)arg4 activityProxy:(id)arg5;
- (id)initForOpeningFilesWithContentTypes:(id)arg1;
- (_Bool)supportsRemovableFileProvidersForConfiguration:(id)arg1;
- (id)recentDocumentsTypesFromInfoPlist;
- (void)__commonInit;
- (void)_showDocumentBrowserViewController:(_Bool)arg1;
- (void)effectiveAppearanceDidChange:(id)arg1;
- (void)remoteViewController:(id)arg1 didTerminateViewServiceWithError:(id)arg2;
- (void)_displayRemoteControllerIfNeeded;
- (void)_embedViewController:(id)arg1;
- (void)forwardHostSceneIdentifier:(id)arg1;
- (void)addOperationToServiceQueue:(CDUnknownBlockType)arg1;
- (id)_symbolicDownloadsURLWrapper;
- (id)_sandboxingURLWrapperForURL:(id)arg1 readonly:(_Bool)arg2 error:(id *)arg3;
- (void)dismissAllPresentedViewControllers:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearCurrentOpenInteraction;
- (id)transitionControllerForDocumentAtURL:(id)arg1;
- (void)_importDocumentAtURL:(id)arg1 neighbourURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)importDocumentAtURL:(id)arg1 nextToDocumentAtURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(CDUnknownBlockType)arg3;
- (void)_showErrorViewController;
- (void)_clearShownViewControllers;
- (void)getTrackingViews:(id *)arg1 remoteButtons:(id *)arg2 fromBarButtons:(id)arg3;
- (void)_embedDocumentBrowserViewController;
- (void)prepareItems:(id)arg1 forMode:(unsigned long long)arg2 usingBookmark:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)_displayActivityControllerWithItems:(id)arg1 popoverTracker:(id)arg2 isContentManaged:(_Bool)arg3 additionalActivities:(id)arg4 activityProxy:(id)arg5;
- (void)prepareItems:(id)arg1 usingBookmark:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (id)trackingViewForUUID:(id)arg1;
- (id)remoteBarButtonForUUID:(id)arg1;
- (void)didTapTryAgainInErrorViewController:(id)arg1;
- (void)dismissingKeyCommandWasPerformed:(id)arg1;
- (void)revealDocumentAtURL:(id)arg1 shouldImport:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)transitionControllerForDocumentURL:(id)arg1;
- (void)importDocumentAtURL:(id)arg1 byMoving:(_Bool)arg2 toCurrentBrowserLocationWithCompletion:(CDUnknownBlockType)arg3;
- (void)setshouldShowFileExtensions:(_Bool)arg1;
- (void)_renameDocumentAtURL:(id)arg1 newName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
