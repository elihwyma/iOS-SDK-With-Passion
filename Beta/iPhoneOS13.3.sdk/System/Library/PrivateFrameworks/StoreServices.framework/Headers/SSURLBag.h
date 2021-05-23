/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSMutableArray, NSString, SSURLBagContext, SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSURLBag : NSObject

{
    SSXPCConnection *_connection;
    SSURLBagContext *_context;
    NSDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _expirationTime;
    _Bool _ignoreCacheForNextLookup;
    NSMutableArray *_pendingLookups;
    NSString *_storeFrontIdentifier;
}

@property (readonly) NSDictionary *existingBagDictionary;
@property (readonly) NSString *storeFrontIdentifier;
@property (readonly) SSURLBagContext *URLBagContext;

+ (id)URLBagForContext:(id)arg1;
+ (void)setURLBag:(id)arg1 forContext:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_connection;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (id)valueForKey:(id)arg1 error:(id *)arg2;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithURLBagContext:(id)arg1;
- (void)loadValueForKey:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_drainPendingLookupsWithError:(id)arg1;
- (void)_loadURLBag;
- (void)getTrustForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
