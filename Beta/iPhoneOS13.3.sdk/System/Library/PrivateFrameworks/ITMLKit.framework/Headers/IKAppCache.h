/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSArray, NSString, NSURL;

@protocol IKAppCacheDelegate, IKAppContextDelegate, IKApplication, OS_dispatch_queue;

@interface IKAppCache : NSObject

{
    NSObject<OS_dispatch_queue> *_appCacheQueue;
    _Bool _shouldIgnoreHTTPCache;
    id <IKAppContextDelegate> _appContextDelegate;
    id <IKAppCacheDelegate> _delegate;
    NSURL *_currentAppJSURL;
    NSString *_currentAppJSChecksum;
    NSURL *_appLocalJSFileURL;
    NSString *_appLocalJSChecksum;
    NSURL *_appJSFileURL;
    NSString *_appJSChecksum;
    NSArray *_appJSChecksumHistory;
    id <IKApplication> _app;
    unsigned long long _status;
    IKAppContext *_validationContext;
    CDUnknownBlockType _validationCompletionHandler;
}

@property (nonatomic, readonly) NSURL *currentAppJSURL;
@property (nonatomic, readonly) NSString *currentAppJSChecksum;
@property (copy, nonatomic, readonly) NSURL *appLocalJSFileURL;
@property (nonatomic, readonly) NSString *appLocalJSChecksum;
@property (copy, nonatomic, readonly) NSURL *appJSFileURL;
@property (nonatomic, readonly) NSString *appJSChecksum;
@property (nonatomic, readonly) NSArray *appJSChecksumHistory;
@property (weak, nonatomic) id <IKApplication> app;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) IKAppContext *validationContext;
@property (copy, nonatomic) CDUnknownBlockType validationCompletionHandler;
@property (nonatomic) _Bool shouldIgnoreHTTPCache;
@property (weak, nonatomic) id <IKAppContextDelegate> appContextDelegate;
@property (weak, nonatomic) id <IKAppCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_appContextDelegateSelectors;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithApplication:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)navigationControllerForContext:(id)arg1;
- (id)modalControllerForContext:(id)arg1;
- (id)tabBarForContext:(id)arg1;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)_loadManifest;
- (void)_performAsync:(CDUnknownBlockType)arg1;
- (void)_checkManifest;
- (void)_storeManifest;
- (id)_validatedChecksumForScript:(id)arg1 error:(id *)arg2;
- (void)updateCacheWithValidatedJS:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cleanupValidationContext;
- (_Bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (id)objectForPlayer:(id)arg1;
- (id)objectForPlaylist:(id)arg1;
- (id)objectForMediaItem:(id)arg1;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3;
- (id)_cacheFileURLForAppJS:(id)arg1 checksum:(id)arg2 error:(id *)arg3;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (_Bool)shouldForceIgnoreHTTPCacheForAppContext:(id)arg1;
- (_Bool)appContext:(id)arg1 shouldStartWithScript:(id)arg2 scriptURL:(id)arg3 loadedFromFallback:(_Bool)arg4;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2 validatedJSString:(id)arg3;
- (_Bool)isOurDispatchQueue;
- (void)appJSURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)cleanBlobStorageWithCompletion:(CDUnknownBlockType)arg1;

@end
