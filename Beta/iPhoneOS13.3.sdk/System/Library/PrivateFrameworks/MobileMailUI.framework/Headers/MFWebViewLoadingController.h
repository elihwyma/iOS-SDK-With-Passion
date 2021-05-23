/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

#import <MobileMailUI/Swift-Protocol.h>

@class EMContentRepresentation, MFWebViewDictionary, NSError, NSString, NSURL, WKWebView, _WKRemoteObjectInterface;

@protocol MFMailWebProcessDelegate;

@interface MFWebViewLoadingController : NSObject <Swift>

{
    _Bool _webProcessPluginNeedsUpdate;
    WKWebView *_webView;
    MFWebViewDictionary *_webViewConstants;
    id <MFMailWebProcessDelegate> _webProcessDelegate;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    EMContentRepresentation *_contentRepresentation;
    NSURL *_loadingURL;
    NSError *_error;
}

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface;
@property (retain, nonatomic) EMContentRepresentation *contentRepresentation;
@property (retain, nonatomic) NSURL *loadingURL;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) _Bool webProcessPluginNeedsUpdate;
@property (nonatomic, readonly) MFWebViewDictionary *webViewConstants;
@property (weak, nonatomic) id <MFMailWebProcessDelegate> webProcessDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reload;
- (void)stopLoading;
- (void)requestWebViewLoadWithError:(id)arg1;
- (void)requestWebViewLoadWithContentRepresentation:(id)arg1;
- (void)requestWebViewLoadWithContext:(id)arg1;
- (void)requestWebViewLoadWithoutShowingMessageWithContext:(id)arg1;
- (void)requestWebViewLoadWithoutShowingMessageWithRepresentation:(id)arg1;
- (void)webProcessBrowserContextControllerDidBecomeAvailable;
- (void)slapWebView;
- (void)_reconveneWebProcessBundle;
- (void)_unregisterWebProcessDelegate:(id)arg1;
- (void)_registerWebProcessDelegate:(id)arg1;
- (void)_doIssueLoadRequest;

@end
