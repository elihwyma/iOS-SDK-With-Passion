/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSObject, NSURLRequest, SKUIClientContext, SSMetricsPageEvent;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUILoadProductPageOperation : NSOperation

{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    SSMetricsPageEvent *_metricsPageEvent;
    CDUnknownBlockType _outputBlock;
    NSURLRequest *_urlRequest;
}

@property (copy) CDUnknownBlockType outputBlock;
@property (readonly) SSMetricsPageEvent *metricsPageEvent;

- (void)main;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;
- (id)initWithProductPageURLRequest:(id)arg1 clientContext:(id)arg2;
- (id)_initSKUILoadProductPageOperation;

@end
