/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, QLPreviewController, UIBarButtonItem, UIPopoverController, UIView, UIViewController, _UIDICActivityViewController, _UIDICPreviewItem;

@protocol UIDocumentInteractionControllerDelegate;

@interface UIDocumentInteractionController : NSObject

{
    NSArray *_gestureRecognizers;
    NSArray *_icons;
    QLPreviewController *_previewController;
    UIViewController *_presentingViewController;
    struct CGRect _presentRect;
    UIView *_presentView;
    UIBarButtonItem *_presentItem;
    NSURL *_tmpURLToDeleteOnDealloc;
    NSURL *_decompressedArchiveDocumentURL;
    _Bool _shouldDecompressArchiveIfNecessary;
    struct {
        unsigned int delegateViewControllerForPreview:1;
        unsigned int delegateRectForPreview:1;
        unsigned int delegateViewForPreview:1;
        unsigned int delegateWillBeginPreview:1;
        unsigned int delegateDidEndPreviewPreview:1;
        unsigned int delegateWillPresentOptionsMenu:1;
        unsigned int delegateDidDismissOptionsMenu:1;
        unsigned int delegateWillPresentOpenInMenu:1;
        unsigned int delegateDidDismissOpenInMenu:1;
        unsigned int delegateWillBeginSendingToApplication:1;
        unsigned int delegateDidEndSendingToApplication:1;
        unsigned int delegateCanPerformAction:1;
        unsigned int delegatePerformAction:1;
        unsigned int delegateExcludesActivities:1;
        unsigned int delegateAddsActivities:1;
        unsigned int delegateProvidesActivityItem:1;
        unsigned int delegateProvidesPrintInfo:1;
        unsigned int transitionImageForPreview:1;
        unsigned int showingOptionsMenu:1;
        unsigned int showingOpenInMenu:1;
    } _documentInteractionControllerFlags;
    _Bool _isContentManaged;
    _Bool _previewsPresentWithMarkup;
    _Bool _excludeDotFilesFromArchiveListings;
    id <UIDocumentInteractionControllerDelegate> _delegate;
    _UIDICPreviewItem *_previewControllerItem;
    id _annotation;
    CDUnknownBlockType _completionWithItemsHandler;
    _UIDICActivityViewController *_activityViewController;
    UIPopoverController *_popoverController;
    NSURL *__customExtactionRootURL;
    NSString *_uniqueIdentifier;
}

@property (retain, nonatomic) _UIDICActivityViewController *activityViewController;
@property (nonatomic, readonly) QLPreviewController *previewController;
@property (nonatomic, readonly) _UIDICPreviewItem *previewControllerItem;
@property (retain, nonatomic) UIPopoverController *popoverController;
@property (copy, nonatomic, getter=_customExtactionRootURL, setter=_setCustomExtactionRootURL:) NSURL *_customExtactionRootURL;
@property (copy, nonatomic, getter=_completionWithItemsHandler, setter=_setCompletionWithItemsHandler:) CDUnknownBlockType _completionWithItemsHandler;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) _Bool isContentManaged;
@property (nonatomic) _Bool previewsPresentWithMarkup;
@property (nonatomic, readonly, getter=isArchive) _Bool archive;
@property (nonatomic) _Bool shouldUnzipDocument;
@property (nonatomic) _Bool excludeDotFilesFromArchiveListings;
@property (nonatomic) _Bool sourceIsManaged;
@property (weak, nonatomic) id <UIDocumentInteractionControllerDelegate> delegate;
@property (retain) NSURL *URL;
@property (copy, nonatomic) NSString *UTI;
@property (copy) NSString *name;
@property (nonatomic, readonly) NSArray *icons;
@property (retain, nonatomic) id annotation;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (id)initWithURL:(id)arg1;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (id)_documentProxy;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (_Bool)presentPreviewAnimated:(_Bool)arg1;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (_Bool)previewController:(id)arg1 canEditItem:(id)arg2;
- (_Bool)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
- (id)excludedActivityTypesForPreviewController:(id)arg1;
- (id)dismissActionsForPreviewController:(id)arg1;
- (void)dismissMenuAnimated:(_Bool)arg1;
- (void)_updateURLIsContentManaged;
- (_Bool)_isFilenameValidForDecompressing:(id)arg1 allowsPreviewingArchive:(_Bool)arg2;
- (void)_presentPreview:(id)arg1;
- (void)_presentOptionsMenu:(id)arg1;
- (id)_documentProxyWithIsContentManaged:(_Bool)arg1;
- (_Bool)_shouldAutoDecompressIfArchive;
- (_Bool)_shouldReturnDefaultApplication;
- (id)_preferredApplicationForDocumentOpening;
- (_Bool)_isPackageArchive:(id)arg1;
- (id)_pathsInArchive:(CDUnknownBlockType)arg1;
- (id)__decompressArchiveAndSetupPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_clearPreviousPresentationContext;
- (_Bool)_setupForOptionsMenu;
- (void)_decompressArchiveAndSetupPayload:(CDUnknownBlockType)arg1;
- (_Bool)_presentOptionsMenuAnimated:(_Bool)arg1 willPresentBlock:(CDUnknownBlockType)arg2;
- (_Bool)__presentPreviewAnimated:(_Bool)arg1;
- (_Bool)_setupPreviewController;
- (_Bool)_setupForOpenInMenu;
- (_Bool)_presentOpenInMenuAnimated:(_Bool)arg1 willPresentBlock:(CDUnknownBlockType)arg2;
- (void)_dismissEverythingWithExtremePrejudiceAnimated:(_Bool)arg1;
- (_Bool)presentOptionsMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)_openDocumentWithApplication:(id)arg1;
- (void)__openUsingInPlaceMechanismToTransferDocumentToApplication:(id)arg1;
- (void)__openUsingDefaultCopyMechanismToTransferDocumentToApplication:(id)arg1;
- (void)_invokeDelegateWillBeginOpenWithApplicationIdentifier:(id)arg1;
- (void)__performLaunchServiceDocumentOpenWithApplication:(id)arg1 launchServiceOptions:(id)arg2;
- (void)_invokeDelegateDidFinishOpenWithApplicationIdentifier:(id)arg1;
- (void)_fixupFileExtensionIfNeeded;
- (_Bool)_shouldIncludePreviewActivity;
- (id)_newPreviewActivity;
- (id)_newActivityIfNecessaryForLegacyActionDelegatingWithAction:(SEL)arg1;
- (_Bool)_isImage;
- (id)_preparedActivityViewControllerWithItems:(id)arg1 activities:(id)arg2 options:(unsigned long long)arg3;
- (_Bool)_delegateImplementsLegacyActions;
- (_Bool)_delegateExistsAndImplementsRequiredMethods:(id *)arg1;
- (_Bool)_delegateCanPerformAction:(SEL)arg1;
- (_Bool)_shouldIncludeActivityForLegacyDelegatingWithAction:(SEL)arg1;
- (_Bool)_delegatePerformAction:(SEL)arg1;
- (unsigned long long)_archiveExtractionOptions;
- (void)activityViewController:(id)arg1 openActivityWillBeginSendingToApplication:(id)arg2;
- (void)activityViewController:(id)arg1 openActivityDidEndSendingToApplication:(id)arg2;
- (void)activityViewController:(id)arg1 didFinishPresentingActivityType:(id)arg2;
- (void)activityViewController:(id)arg1 didFinishPerformingActivityType:(id)arg2 completed:(_Bool)arg3 items:(id)arg4 error:(id)arg5;
- (id)activityViewController:(id)arg1 mailSubjectForActivityType:(id)arg2;
- (void)setPreviewURLOverride:(id)arg1;
- (id)_defaultApplication;
- (id)subitemsInArchive:(CDUnknownBlockType)arg1;
- (id)extractSubitemFromArchive:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)previewController:(id)arg1 updatedContentsURL:(id)arg2 forEditedItem:(id)arg3;
- (void)markupAction:(id)arg1;
- (id)additionalActivitiesTypesForPreviewController:(id)arg1;
- (_Bool)_canPreviewDecompressedArchive;
- (_Bool)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (id)presentingNavigationController;
- (_Bool)presentOpenInMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (_Bool)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)dismissPreviewAnimated:(_Bool)arg1;
- (void)openDocumentWithDefaultApplication;
- (void)_setDecompressedArchiveDocumentURL:(id)arg1;
- (id)_decompressedArchiveDocumentURL;
- (_Bool)_shouldAutoDecompressIfArchiveForPreview;
- (_Bool)_documentNeedsHelpDecompressingArchiveForPreview;
- (_Bool)_isValidURL:(id)arg1;
- (_Bool)_canSaveToCameraRollForType;

@end
