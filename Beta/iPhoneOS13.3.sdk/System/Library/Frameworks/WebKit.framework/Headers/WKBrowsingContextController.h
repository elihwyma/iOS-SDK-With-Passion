/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, WKBackForwardList, WKBrowsingContextHandle, _WKRemoteObjectRegistry;

@protocol WKBrowsingContextHistoryDelegate, WKBrowsingContextLoadDelegate, WKBrowsingContextPolicyDelegate;

@interface WKBrowsingContextController : NSObject

{
    struct WeakObjCPtr<id<WKBrowsingContextHistoryDelegate>> _historyDelegate;
    RefPtr_a805eeb8 _page;
    struct unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver>> _pageLoadStateObserver;
    struct WeakObjCPtr<id<WKBrowsingContextLoadDelegate>> _loadDelegate;
    struct WeakObjCPtr<id<WKBrowsingContextPolicyDelegate>> _policyDelegate;
}

@property (readonly) struct OpaqueWKPage *_pageRef;
@property (readonly) _Bool hasOnlySecureContent;
@property unsigned long long paginationMode;
@property _Bool paginationBehavesLikeColumns;
@property double pageLength;
@property double gapBetweenPages;
@property _Bool paginationLineGridEnabled;
@property (readonly) unsigned long long pageCount;
@property (nonatomic, readonly) WKBrowsingContextHandle *handle;
@property (nonatomic, readonly) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property (nonatomic, readonly) int processIdentifier;
@property (weak) id <WKBrowsingContextLoadDelegate> loadDelegate;
@property (weak) id <WKBrowsingContextPolicyDelegate> policyDelegate;
@property (weak) id <WKBrowsingContextHistoryDelegate> historyDelegate;
@property (copy) NSString *applicationNameForUserAgent;
@property (copy) NSString *customUserAgent;
@property (readonly) _Bool canGoForward;
@property (readonly) _Bool canGoBack;
@property (readonly) WKBackForwardList *backForwardList;
@property (readonly, getter=isLoading) _Bool loading;
@property (readonly) NSURL *activeURL;
@property (readonly) NSURL *provisionalURL;
@property (readonly) NSURL *committedURL;
@property (readonly) NSURL *unreachableURL;
@property (readonly) double estimatedProgress;
@property (readonly) NSString *title;
@property (readonly) NSArray *certificateChain;
@property double textZoom;
@property double pageZoom;

+ (void)registerSchemeForCustomProtocol:(id)arg1;
+ (void)unregisterSchemeForCustomProtocol:(id)arg1;
+ (id)customSchemes;
+ (id)_browsingContextControllerForPageRef:(struct OpaqueWKPage *)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (void)reload;
- (void)stopLoading;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)goBack;
- (void)goForward;
- (_Bool)_webProcessIsResponsive;
- (void)loadRequest:(id)arg1 userData:(id)arg2;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)reloadFromOrigin;
- (void)goToBackForwardListItem:(id)arg1;
- (id)_initWithPageRef:(struct OpaqueWKPage *)arg1;

@end
