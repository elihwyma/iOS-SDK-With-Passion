/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, SUScriptObject;

@interface SUScriptObjectInvocationBatch : NSObject

{
    NSMutableArray *_invocationQueue;
    NSLock *_lock;
    struct __CFDictionary *_proxies;
    SUScriptObject *_rootObject;
}

@property SUScriptObject *rootObject;

- (id)init;
- (void)dealloc;
- (void)checkOutBatchTarget:(id)arg1;
- (id)copyQueuedInvocationsForObject:(id)arg1;
- (id)batchProxyForObject:(id)arg1;
- (void)dequeueInvocations;
- (void)_delayedDequeueInvocations;
- (void)enqueueInvocation:(id)arg1;

@end
