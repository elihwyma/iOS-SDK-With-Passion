/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@class NSMutableArray, NSString, NSTimer, WBSSVGImageRenderingRequest, _WKRemoteObjectInterface;

@interface WBSSVGImageRenderingFetchOperation

{
    NSMutableArray *_remainingURLs;
    NSTimer *_loadingTimeoutTimer;
    _WKRemoteObjectInterface *_svgImageRenderingObserverInterface;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) WBSSVGImageRenderingRequest *request;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithRequest:(id)arg1;
- (id)webViewConfiguration;
- (void)didCreateWebView;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_htmlStringWithImageElementString:(id)arg1;
- (void)didRenderImage:(id)arg1;
- (id)_htmlStringWithSVGContent:(id)arg1;
- (void)_loadingTimerDidTimeout:(id)arg1;
- (id)_htmlStringWithURL:(id)arg1;
- (void)_loadSVGFileURL:(id)arg1;
- (void)_renderNextImage;
- (void)_didCompleteWithImage:(id)arg1;
- (void)willClearWebView;
- (void)didFailFetch;
- (struct CGSize)webViewSize;
- (void)startOffscreenFetching;

@end
