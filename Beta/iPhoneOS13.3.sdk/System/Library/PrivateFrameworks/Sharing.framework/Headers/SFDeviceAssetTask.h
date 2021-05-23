/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSError, NSMutableArray, SFDeviceAssetQuery, SFDeviceAssetRequestConfiguration;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SFDeviceAssetTask : NSObject

{
    _Bool _useProcessLocalCache;
    _Bool _queryResultCalled;
    _Bool _downloadCompletionCalled;
    SFDeviceAssetQuery *_deviceAssetQuery;
    SFDeviceAssetRequestConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_deviceQueryParameters;
    NSObject<OS_dispatch_source> *_timer;
    NSBundle *_matchBundle;
    NSBundle *_imperfectMatchBundle;
    NSBundle *_fallbackBundle;
    NSBundle *_cachedBundle;
    NSError *_error;
}

@property (nonatomic, readonly) SFDeviceAssetQuery *deviceAssetQuery;
@property (nonatomic, readonly) SFDeviceAssetRequestConfiguration *configuration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) _Bool useProcessLocalCache;
@property (nonatomic, readonly) NSMutableArray *deviceQueryParameters;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, readonly) NSBundle *matchBundle;
@property (nonatomic, readonly) NSBundle *imperfectMatchBundle;
@property (nonatomic, readonly) NSBundle *fallbackBundle;
@property (nonatomic, readonly) NSBundle *cachedBundle;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) _Bool queryResultCalled;
@property (nonatomic) _Bool downloadCompletionCalled;

- (void)cancelTimeout;
- (_Bool)completeIfPossible;
- (void)completeWithBundle:(id)arg1 isFallback:(_Bool)arg2 isCached:(_Bool)arg3;
- (void)createQueryParameters;
- (id)bundleURLFromAssetURL:(id)arg1;
- (_Bool)updateTaskWithAssetBundleURL:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3 isImperfectMatch:(_Bool)arg4 isCached:(_Bool)arg5;
- (id)bundleAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)updateTaskWithBundle:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3 isImperfectMatch:(_Bool)arg4 isCached:(_Bool)arg5;
- (id)initWithDeviceQuery:(id)arg1 requestConfiguration:(id)arg2 dispatchQueue:(id)arg3 useProcessLocalCache:(_Bool)arg4;
- (_Bool)updateTaskWithAssetURL:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3 isImperfectMatch:(_Bool)arg4 isCached:(_Bool)arg5;

@end
