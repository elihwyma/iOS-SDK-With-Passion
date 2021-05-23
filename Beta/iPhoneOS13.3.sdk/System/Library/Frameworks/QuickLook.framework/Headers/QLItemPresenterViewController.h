/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLItemAggregatedViewController.h>

@class DMFApplicationPolicyMonitor, DMFCategoryPolicyMonitor, NSString, QLDownloadingItemViewController, QLErrorItemViewController, QLItem, QLItemViewController, QLLoadingItemViewController, QLPreviewContext, QLScreenTimeItemViewController;

__attribute__((visibility("hidden")))
@interface QLItemPresenterViewController : QLItemAggregatedViewController

{
    _Bool _shouldDeferAppearanceUpdates;
    _Bool _isPeekingSession;
    _Bool _failureOccurred;
    _Bool _isReadyForDisplay;
    _Bool _shouldHandleLoadingView;
    CDUnknownBlockType _readyBlock;
    _Bool _printing;
    QLItemViewController *_previewProvider;
    QLErrorItemViewController *_errorViewController;
    QLLoadingItemViewController *_loadingViewController;
    QLDownloadingItemViewController *_downloadingController;
    QLScreenTimeItemViewController *_screenTimeController;
    CDUnknownBlockType _loadingCompletionHandler;
    QLItem *_previewItem;
    id _contents;
    QLPreviewContext *_context;
    NSString *_hostApplicationBundleIdentifier;
    DMFApplicationPolicyMonitor *_screenTimeApplicationMonitor;
    DMFCategoryPolicyMonitor *_screenTimeCategoryMonitor;
}

@property (retain, nonatomic) QLItemViewController *previewProvider;
@property (retain, nonatomic) QLErrorItemViewController *errorViewController;
@property (retain, nonatomic) QLLoadingItemViewController *loadingViewController;
@property (retain, nonatomic) QLDownloadingItemViewController *downloadingController;
@property (retain, nonatomic) QLScreenTimeItemViewController *screenTimeController;
@property (copy, nonatomic) CDUnknownBlockType loadingCompletionHandler;
@property (retain, nonatomic) QLItem *previewItem;
@property (retain) id contents;
@property (retain) QLPreviewContext *context;
@property (nonatomic) _Bool printing;
@property (copy, nonatomic) NSString *hostApplicationBundleIdentifier;
@property (retain, nonatomic) DMFApplicationPolicyMonitor *screenTimeApplicationMonitor;
@property (retain, nonatomic) DMFCategoryPolicyMonitor *screenTimeCategoryMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) QLItemPresenterViewController *itemPresenterViewController;

- (id)init;
- (_Bool)isLoaded;
- (struct CGSize)preferredContentSize;
- (_Bool)isLoading;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)transitionWillFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (void)showPreviewViewController:(id)arg1;
- (void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(_Bool)arg2;
- (void)_setupScreenTimeHandling;
- (void)_showReadyToDisplayPreviewViewControllerDeferredIfNeeded:(id)arg1;
- (void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(_Bool)arg2 updatingIsReadyForDisplay:(_Bool)arg3;
- (void)_showLoadingViewControllerDeferredIfNeeded;
- (void)_startLoadingPreviewWithContents:(id)arg1;
- (void)_performReadyBlockIfNedded;
- (_Bool)canAnimateFromDetailViewToFullScreenPreview;
- (void)_performLoadingCompletionHandlerWithError:(id)arg1;
- (_Bool)loadingFailed;
- (void)_cancelAllDeferredApperanceUpdates;
- (void)previewWillAppear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)showErrorViewController;
- (id)additionalItemViewControllerDescription;
- (_Bool)_processIsEntitledToCheckScreenTimePolicy;
- (_Bool)_processIsEntitledToConfigureScreenTime;
- (_Bool)_shouldApplyScreenTimeMoviePolicyForItem:(id)arg1;
- (void)_setupScreenTimeCategoryHandling;
- (id)screenTimePolicyBundleIdentifier;
- (void)_setupScreenTimeApplicationHandling;
- (void)_queryScreenTimeCategoryPolicy;
- (void)_queryScreenTimePolicyForBundleIdentifier:(id)arg1;
- (void)_didReceiveNewScreenTimeApplicationPolicies:(id)arg1 error:(id)arg2;
- (void)_didReceiveNewScreenTimeCategoryPolicy:(id)arg1 error:(id)arg2;
- (void)_didReceiveNewScreenTimePolicy:(long long)arg1;
- (void)_hideScreenTimeViewControllerIfNeeded;
- (void)_showScreenTimeViewController;
- (void)showPreviewProviderViewController;
- (void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(id)arg1 withContents:(id)arg2;
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
- (id)initWithHostApplicationBundleIdentifier:(id)arg1;
- (id)initForPrinting:(_Bool)arg1;
- (void)isReadyForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
