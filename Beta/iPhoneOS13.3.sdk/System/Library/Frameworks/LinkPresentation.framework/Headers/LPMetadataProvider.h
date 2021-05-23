/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPAnimatedImageTranscoder, LPFetcherGroup, LPLinkMetadata, LPMetadataProviderSpecialization, NSMutableArray, NSString, NSTimer, NSURL, WKWebView;

@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface LPMetadataProvider : NSObject

{
    unsigned int _loggingID;
    WKWebView *_webView;
    NSURL *_URL;
    NSURL *_originalURL;
    NSTimer *_watchdog;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    LPLinkMetadata *_metadata;
    _Bool _complete;
    _Bool _fetchingFromExistingWebView;
    _Bool _hasStartedFetching;
    _Bool _hasEverStartedFetchingMetadataFromWebView;
    _Bool _useSpecializedProviders;
    unsigned long long _allowedSpecializedProviders;
    NSObject<OS_dispatch_group> *_subresourceFetchGroup;
    LPFetcherGroup *_iconFetcherGroup;
    LPAnimatedImageTranscoder *_imageTranscoder;
    NSMutableArray *_pendingFetchers;
    long long _specializationState;
    LPMetadataProviderSpecialization *_specializedMetadataProvider;
    _Bool _shouldFetchSubresources;
    _Bool _cancelled;
    double _timeout;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property _Bool cancelled;
@property (nonatomic) _Bool useSpecializedProviders;
@property (nonatomic) _Bool fetchSubresources;
@property (nonatomic) unsigned long long allowedSpecializedProviders;
@property (nonatomic) _Bool shouldFetchSubresources;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_callbackQueue;
+ (id)requestMetadataForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_copyDefaultWebViewConfiguration;
+ (id)_defaultUserAgent;
+ (id)_incompleteMetadataRequests;
+ (id)requestMetadataForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)_startWatchdogTimer;
- (void)_completedWithError:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)metadataProviderSpecializationDidFail:(id)arg1;
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)startFetchingMetadataForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startFetchingMetadataForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelDueToTimeout;
- (void)_stopWatchdogTimer;
- (void)_willStartFetchingMetadata;
- (_Bool)_switchToSpecializationIfPossibleForURL:(id)arg1;
- (void)_internalStartFetchingMetadataFromURL;
- (void)_fetchImplicitIcons;
- (void)_fetchMetadataFromWebView;
- (void)_fetchSubresources;
- (_Bool)_switchToSpecializationIfPossibleForMIMEType:(id)arg1 URL:(id)arg2 hasLoadedResource:(_Bool)arg3;
- (void)_fetchedMetadata:(id)arg1;
- (void)_setMetadata:(id)arg1 onlyUpgradeFields:(_Bool)arg2;
- (_Bool)_switchToSpecializationIfPossibleForMetadata:(id)arg1 URL:(id)arg2;
- (void)_redistinguishImagesAndIcons;
- (void)_simplifyTitle;
- (id)subresourceFetcherConfiguration;
- (void)_postProcessResolvedMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_generateSpecializationIfPossibleForCompleteMetadata:(id)arg1 URL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)metadataProviderSpecialization:(id)arg1 didFetchPreliminaryMetadata:(id)arg2;
- (id)_startFetchingMetadataForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_startFetchingMetadataForWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startFetchingSubresourcesForPartialMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
