/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class IKAppCache, IKAppReloadContext, IKJSApplication, IKJSArrayBufferStore, IKJSFoundation, IKJSInspectorController, IKJSViewModelService, IKJSWeakMap, IKViewElementRegistry, JSContext, NSError, NSMutableArray, NSNumber, NSString, NSURL;

@protocol IKAppContextDelegate, IKAppScriptFallbackHandler, IKApplication, OS_dispatch_source;

@interface IKAppContext : NSObject <Swift>

{
    IKJSArrayBufferStore *_arrayBufferStore;
    struct __CFRunLoop *_jsThreadRunLoop;
    struct __CFRunLoopSource *_jsThreadRunLoopSource;
    NSObject<OS_dispatch_source> *_lowMemoryWarningSource;
    _Bool _respondsToTraitCollection;
    _Bool _isAirplaneModeEnabled;
    struct {
        _Bool respondsToHighlightViewForOneElement;
        _Bool respondsToHighlightViewsForManyElements;
        _Bool respondsToCancelHighlightForAppContext;
        _Bool respondsToDidInspectElementModeChanged;
    } _delegateFlags;
    _Bool _isValid;
    _Bool _remoteInspectionEnabled;
    _Bool _mescalPrimeEnabledForXHRRequests;
    _Bool _trusted;
    _Bool _canAccessPendingQueue;
    _Bool _running;
    _Bool _privileged;
    _Bool _appUsesDefaultStyleSheets;
    id <IKApplication> _app;
    unsigned long long _mode;
    id <IKAppContextDelegate> _delegate;
    id <IKAppScriptFallbackHandler> _appScriptFallbackHandler;
    double _appScriptTimeoutInterval;
    JSContext *_jsContext;
    IKAppCache *_appCache;
    NSString *_nextJSChecksum;
    NSMutableArray *_onStartQueue;
    NSString *_responseScript;
    NSError *_responseError;
    IKAppReloadContext *_reloadContext;
    NSMutableArray *_pendingQueue;
    NSURL *_resolvedBootURL;
    NSMutableArray *_postEvaluationBlocks;
    IKJSApplication *_jsApp;
    IKJSFoundation *_jsFoundation;
    IKJSWeakMap *_jsWeakMap;
    IKJSViewModelService *_jsViewModelService;
    IKViewElementRegistry *_viewElementRegistry;
    IKJSInspectorController *_webInspectorController;
}

@property (nonatomic, readonly) IKAppCache *appCache;
@property (copy, nonatomic) NSString *nextJSChecksum;
@property (nonatomic, readonly) NSMutableArray *onStartQueue;
@property (nonatomic, getter=isTrusted) _Bool trusted;
@property (nonatomic) _Bool canAccessPendingQueue;
@property (copy, nonatomic) NSString *responseScript;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) IKAppReloadContext *reloadContext;
@property (getter=isRunning) _Bool running;
@property (retain, nonatomic) NSMutableArray *pendingQueue;
@property (copy, nonatomic, readonly) NSURL *resolvedBootURL;
@property (retain, nonatomic) JSContext *jsContext;
@property (retain, nonatomic) NSMutableArray *postEvaluationBlocks;
@property (retain, nonatomic) IKJSApplication *jsApp;
@property (retain, nonatomic) IKJSFoundation *jsFoundation;
@property (retain, nonatomic) IKJSWeakMap *jsWeakMap;
@property (retain, nonatomic) IKJSViewModelService *jsViewModelService;
@property _Bool isValid;
@property (nonatomic, getter=isPrivileged) _Bool privileged;
@property (nonatomic, readonly) IKViewElementRegistry *viewElementRegistry;
@property (nonatomic, readonly) _Bool appUsesDefaultStyleSheets;
@property (retain, nonatomic) IKJSInspectorController *webInspectorController;
@property (weak, nonatomic, readonly) id <IKApplication> app;
@property (nonatomic, readonly) unsigned long long mode;
@property (weak, nonatomic, readonly) id <IKAppContextDelegate> delegate;
@property (nonatomic) _Bool remoteInspectionEnabled;
@property (nonatomic) _Bool mescalPrimeEnabledForXHRRequests;
@property (retain, nonatomic) id <IKAppScriptFallbackHandler> appScriptFallbackHandler;
@property (nonatomic) double appScriptTimeoutInterval;
@property (nonatomic, readonly) IKJSArrayBufferStore *arrayBufferStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

+ (id)currentAppContext;
+ (_Bool)isInFactoryMode;
+ (void)registerPrivateProtocols:(id)arg1 forClass:(Class)arg2;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)reload;
- (void)_sourcePerform;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)handleReloadWithUrgencyType:(unsigned long long)arg1 minInterval:(double)arg2 data:(id)arg3;
- (void)handleCacheUpdate;
- (id)_appTraitCollection;
- (void)evaluateDelegateBlockSync:(CDUnknownBlockType)arg1;
- (void)launchAppWithOptions:(id)arg1;
- (void)openURLWithOptions:(id)arg1;
- (void)exitAppWithOptions:(id)arg1;
- (void)_evaluateFoundationWithDeviceConfig:(id)arg1 addPrivateInterfaces:(_Bool)arg2;
- (void)setException:(id)arg1 withErrorMessage:(id)arg2;
- (void)evaluateFoundationJS;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 cache:(_Bool)arg3 delegate:(id)arg4;
- (void)appCache:(id)arg1 didUpdateWithChecksum:(id)arg2;
- (void)evaluate:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addPostEvaluateBlock:(CDUnknownBlockType)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (_Bool)validateDOMDocument:(id)arg1 error:(id *)arg2;
- (void)unregisterLoaderWithIdentifier:(id)arg1;
- (id)registerLoaderWithIdentifier:(id)arg1;
- (id)_preferredLaunchURL;
- (void)contextDidFailWithError:(id)arg1;
- (_Bool)_prepareStartWithURL:(id)arg1;
- (void)_networkPropertiesChanged:(id)arg1;
- (void)_enqueueOnStartOrExecute:(CDUnknownBlockType)arg1;
- (void)_addStopRecordToPendingQueueWithReload:(_Bool)arg1;
- (void)_evaluate:(CDUnknownBlockType)arg1;
- (void)_doEvaluate:(CDUnknownBlockType)arg1;
- (id)_errorWithMessage:(id)arg1;
- (void)_dispatchError:(id)arg1;
- (void)_startWithURL:(id)arg1 urlTrusted:(_Bool)arg2;
- (void)_jsThreadMain;
- (void)_startWithScript:(id)arg1 scriptUrl:(id)arg2 wasLoadedFromFallback:(_Bool)arg3;
- (void)_invalidateJSThread;
- (void)contextDidStartWithJS:(id)arg1 options:(id)arg2;
- (void)_stopAndReload:(_Bool)arg1;
- (void)contextDidStopWithOptions:(id)arg1;
- (void)_drainOnStartQueue;
- (_Bool)isInspectElementModeEnabled;
- (void)inspectElementModeChanged:(_Bool)arg1;
- (_Bool)highlightViewForElementWithID:(long long)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (_Bool)highlightViewsForElementsWithIDs:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (_Bool)cancelHighlightView;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)suspendWithOptions:(id)arg1;
- (void)resumeWithOptions:(id)arg1;
- (void)appTraitCollectionChanged:(id)arg1;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)inspectElement:(id)arg1;

@end
