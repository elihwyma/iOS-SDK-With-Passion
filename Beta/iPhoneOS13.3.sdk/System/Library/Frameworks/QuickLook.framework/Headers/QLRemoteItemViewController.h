/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSDictionary, NSExtension, NSLayoutConstraint, NSString, QLCustomItemViewControllerHostProxy, QLRemotePreviewHostContext, QLRemotePreviewHostViewController;

@protocol QLPrintingProtocol, QLRemotePopoverTracker;

__attribute__((visibility("hidden")))
@interface QLRemoteItemViewController

{
    NSExtension *_extension;
    QLRemotePreviewHostContext *_hostContext;
    NSDictionary *_hostConfiguration;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    id <QLPrintingProtocol> _printer;
    id <QLRemotePopoverTracker> _popoverTracker;
    QLCustomItemViewControllerHostProxy *_hostViewControllerProxy;
    _Bool _isVisible;
    _Bool _isAppearing;
    _Bool _fullScreen;
    _Bool _needsSetup;
    _Bool _readyToLoad;
    CDUnknownBlockType _readyToDisplay;
    CDUnknownBlockType _loadHandler;
    QLRemotePreviewHostViewController *_remoteViewController;
}

@property (retain, nonatomic) QLRemotePreviewHostViewController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)printer;
- (void)setFullScreen:(_Bool)arg1;
- (_Bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPinchToDismiss;
- (_Bool)canEnterFullScreen;
- (id)fullscreenBackgroundColor;
- (void)dismissQuickLook;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (_Bool)canShowNavBar;
- (_Bool)presenterShouldHandleLoadingView:(id)arg1 readyToDisplay:(CDUnknownBlockType)arg2;
- (void)preloadViewControllerForContext:(id)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1 ofSize:(struct CGSize)arg2;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)canShowToolBar;
- (void)getFrameWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)presentShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(CDUnknownBlockType)arg3;
- (void)forwardMessageToHostOfCustomViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)previewControllerWantsFullScreen:(_Bool)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)_loadRemoteViewControllerForContext:(id)arg1;
- (void)_registerLoadingHandler:(CDUnknownBlockType)arg1;
- (void)_performSetUpWithRemoteViewController:(id)arg1 extension:(id)arg2 request:(id)arg3 hostContext:(id)arg4;
- (void)_performLoadHandlerIfNeeded;

@end
