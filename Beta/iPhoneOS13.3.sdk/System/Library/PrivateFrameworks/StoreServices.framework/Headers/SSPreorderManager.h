/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSPreorderManager : NSObject

{
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemKinds;
    SSXPCConnection *_observerConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    struct __CFArray *_observers;
    NSArray *_preorders;
}

@property (readonly) NSArray *itemKinds;
@property (readonly) NSArray *preorders;

+ (id)bookStoreItemKinds;
+ (id)musicStoreItemKinds;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)reloadFromServer;
- (void)_connectAsObserver;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_sendMessageToObservers:(SEL)arg1;
- (id)initWithItemKinds:(id)arg1;
- (void)_registerAsObserver;
- (void)cancelPreorders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end
