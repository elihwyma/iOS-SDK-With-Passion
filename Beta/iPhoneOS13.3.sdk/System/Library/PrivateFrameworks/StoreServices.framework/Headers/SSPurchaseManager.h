/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, SSXPCConnection;

@protocol OS_dispatch_queue, SSPurchaseManagerDelegate;

@interface SSPurchaseManager : NSObject

{
    NSObject<OS_dispatch_queue> *_completionBlockQueue;
    id <SSPurchaseManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_managerIdentifier;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
}

@property (readonly) NSString *managerIdentifier;
@property id <SSPurchaseManagerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)movePurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)cancelPurchases:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)addPurchases:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)getPurchasesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithManagerIdentifier:(id)arg1;
- (void)_connectToDaemon;
- (id)_requestConnection;
- (id)_responseConnection;
- (void)_sendMessage:(long long)arg1 withPurchases:(id)arg2 afterPurchase:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_sendMessage:(long long)arg1 withPurchaseIdentifiers:(id)arg2 afterPurchase:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_sendCompletionBlock:(CDUnknownBlockType)arg1 forGetPurchasesReply:(id)arg2;
- (void)_handleAuthenticateRequest:(id)arg1 fromConnection:(id)arg2;
- (void)_handlePurchasesFinished:(id)arg1 fromConnection:(id)arg2;
- (_Bool)_shouldInvalidateSubscriptionStatusForPurchaseResponse:(id)arg1;
- (void)_handleMessage:(id)arg1 fromConnection:(id)arg2;
- (_Bool)_resultForReply:(id)arg1 error:(id *)arg2;
- (id)_newEncodedArrayWithPurchaseIdentifiers:(id)arg1;
- (void)_sendCompletionBlock:(CDUnknownBlockType)arg1 forStandardReply:(id)arg2;
- (id)_newEncodedArrayWithPurchases:(id)arg1;
- (void)insertPurchases:(id)arg1 afterPurchase:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_reconnectForDaemonLaunch;

@end
