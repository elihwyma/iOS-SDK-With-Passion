/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSLock, SKUIClientContext, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation

{
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    CDUnknownBlockType _outputBlock;
    SKUIResourceRequest *_request;
    long long __loadReason;
}

@property (nonatomic, setter=_setLoadReason:) long long _loadReason;
@property (copy, readonly) SKUIResourceRequest *resourceRequest;
@property (retain) SKUIClientContext *clientContext;
@property (copy) CDUnknownBlockType outputBlock;

- (id)init;
- (void)cancel;
- (void)main;
- (id)initWithResourceRequest:(id)arg1;
- (id)_initSKUILoadResourceOperation;

@end
