/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSVSubscriptionEntitlements, SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSVSubscriptionEntitlementsCoordinator : NSObject

{
    SSVSubscriptionEntitlements *_cachedEntitlements;
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedCoordinator;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 entitlementsBlock:(CDUnknownBlockType)arg2;
- (id)_cachedSubscriptionEntitlements;
- (id)_loadSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 error:(id *)arg2;
- (void)_setCachedSubscriptionEntitlements:(id)arg1;
- (void)getSubscriptionEntitlements:(CDUnknownBlockType)arg1;

@end
