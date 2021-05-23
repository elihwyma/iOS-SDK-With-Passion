/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSOperationQueue, NSString, SKUIClientContext;

@protocol SKUIResourceLoaderDelegate;

@interface SKUIResourceLoader : NSObject

{
    SKUIClientContext *_clientContext;
    NSMutableDictionary *_operationsByRequestID;
    NSMapTable *_requestsByCacheKey;
    NSCache *_resourcesByRequestID;
    _Bool _inBackground;
    long long _requestCountMap[3];
    NSOperationQueue *_operationQueue;
    id <SKUIResourceLoaderDelegate> _delegate;
    NSString *_name;
    NSOperationQueue *_delegateQueue;
}

@property (retain, nonatomic) NSOperationQueue *delegateQueue;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (weak, nonatomic) id <SKUIResourceLoaderDelegate> delegate;
@property (nonatomic, readonly, getter=isIdle) _Bool idle;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long resourceCacheLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (long long)_qualityOfService;
- (void)cancelAllRequests;
- (id)initWithClientContext:(id)arg1;
- (id)cachedResourceForRequestIdentifier:(unsigned long long)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (_Bool)trySetReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2;
- (_Bool)loadResourceWithRequest:(id)arg1 reason:(long long)arg2;
- (_Bool)isIdleForReason:(long long)arg1;
- (id)requestIdentifierForCacheKey:(id)arg1;
- (void)_sendDidLoadAllForReason:(long long)arg1;
- (void)_reprioritizeOperations;
- (long long)_queuePriorityForLoadReason:(long long)arg1;
- (void)_updateLoadReason:(long long)arg1 forOperation:(id)arg2;
- (void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2;
- (void)_sendDidBeginLoadingIfNecessary;
- (void)_sendDidIdleIfNecessary;
- (id)initWithOperationQueue:(id)arg1;
- (void)addResource:(id)arg1 forRequestIdentifier:(unsigned long long)arg2;
- (void)removeAllCachedResources;
- (void)cancelRequestWithIdentifier:(unsigned long long)arg1;
- (void)setReason:(long long)arg1 forRequestWithIdentifier:(unsigned long long)arg2;

@end
