/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

#import <SafariServices/Swift-Protocol.h>

@class NSMutableDictionary, NSString, NSTimer, WBSReaderConfigurationManager, WBSReaderFontManager, WKWebView, _WKRemoteObjectInterface;

@protocol SFReaderWebProcessControllerProtocol, WKUIDelegatePrivate, _SFReaderControllerDelegate;

@interface _SFReaderController : NSObject <Swift>

{
    id <SFReaderWebProcessControllerProtocol> _readerControllerProxy;
    _WKRemoteObjectInterface *_eventsListenerInterface;
    WBSReaderFontManager *_fontManager;
    WBSReaderConfigurationManager *_configurationManager;
    CDUnknownBlockType _readerMailContentCompletionHandler;
    CDUnknownBlockType _readerPrintContentCompletionHandler;
    NSMutableDictionary *_bookmarkIdentifierToReadingListItemInfoCompletionMap;
    CDUnknownBlockType _actionsDelayedUntilReaderWebViewIsReady;
    NSTimer *_actionsDelayedUntilReaderWebViewIsReadyTimer;
    _Bool _readerAvailable;
    _Bool _contentIsReady;
    WKWebView *_webView;
    WKWebView *_readerWebView;
    id <_SFReaderControllerDelegate> _delegate;
    id <WKUIDelegatePrivate> _webViewUIDelegate;
    NSString *_articleText;
}

@property (weak, readonly) WKWebView *webView;
@property (weak, readonly) WKWebView *readerWebView;
@property (weak) id <_SFReaderControllerDelegate> delegate;
@property (getter=isReaderAvailable) _Bool readerAvailable;
@property (nonatomic) _Bool contentIsReady;
@property (weak, nonatomic) id <WKUIDelegatePrivate> webViewUIDelegate;
@property (nonatomic, readonly) NSString *articleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)initWithWebView:(id)arg1;
- (id)_webView:(id)arg1 actionsForElement:(id)arg2 defaultActions:(id)arg3;
- (void)_webView:(id)arg1 getAlternateURLFromImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_webView:(id)arg1 dataInteractionOperationWasHandled:(_Bool)arg2 forSession:(id)arg3 itemProviders:(id)arg4;
- (void)_webView:(id)arg1 dataInteraction:(id)arg2 sessionWillBegin:(id)arg3;
- (void)_webView:(id)arg1 dataInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4;
- (unsigned long long)_webView:(id)arg1 willUpdateDataInteractionOperationToOperation:(unsigned long long)arg2 forSession:(id)arg3;
- (_Bool)_webView:(id)arg1 performDataInteractionOperationWithItemProviders:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (void)clearAvailability;
- (void)loadNewArticle;
- (void)setReaderIsActive:(_Bool)arg1;
- (_Bool)isLoadingNextPage;
- (void)prepareReaderPrintingIFrameWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setUpReaderActivityListener;
- (void)_updateJavaScriptEnabled;
- (void)didDetermineReaderAvailability:(_Bool)arg1 dueToSameDocumentNavigation:(_Bool)arg2;
- (void)didDetermineReaderAvailabilityForDynamicCheck:(_Bool)arg1;
- (void)contentDidBecomeReadyWithDetectedLanguage:(id)arg1;
- (void)didSetReaderConfiguration:(id)arg1;
- (void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
- (void)didCollectReaderContentForMail:(id)arg1;
- (void)didPrepareReaderContentForPrinting:(id)arg1;
- (void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailabilility:(_Bool)arg3;
- (void)didCollectArticleContent:(id)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(_Bool)arg3;
- (void)activateFont:(id)arg1;
- (void)didFinishPresentationUpdateAfterTransitioningToReader;
- (void)checkReaderAvailability;
- (void)collectArticleContent;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(_Bool)arg3 scrollOffsetDictionary:(id)arg4;
- (id)readerControllerProxy;
- (void)setUpReaderWebViewIfNeededAndPerformBlock:(CDUnknownBlockType)arg1;
- (_Bool)_readerWebViewIsReady;
- (void)_performActionsDelayedUntilReaderWebViewIsReady;
- (void)_performActionsDelayedUntilReaderWebViewIsReadyDidTimeout:(id)arg1;
- (void)createArticleFinder;
- (void)_collectReaderContentForMailWithCompletion:(CDUnknownBlockType)arg1;
- (void)_saveConfigurationAndSendToWebProcess;
- (void)sendConfigurationToWebProcess;
- (void)_sendReaderAvailabilityNotificationForReason:(long long)arg1;
- (void)setReaderLanguageTag:(id)arg1;
- (void)stopLoadingNextPage;
- (void)clearReaderWebView;
- (_Bool)shouldCreateArticleFinder;
- (void)activateReader;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (id)scrollPositionInformation;
- (void)clearUnusedReaderResourcesSoon;
- (id)readerURL;
- (id)configurationManager;
- (id)fontManager;
- (void)collectReaderContentForMailWithCompletion:(CDUnknownBlockType)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderTheme:(long long)arg1 forAppearance:(long long)arg2;
- (_Bool)canIncreaseReaderTextSize;
- (_Bool)canDecreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)decreaseReaderTextSize;
- (void)resetReaderTextSize;
- (void)collectReadingListInfoWithBookmarkID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didCreateReaderWebView:(id)arg1;
- (void)owningWebViewDidCommitNavigation;

@end
