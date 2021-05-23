/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSObject, SKUIClientContext;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUIPersonalizeOfferOperation : NSOperation

{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    CDUnknownBlockType _outputBlock;
}

@property (copy) CDUnknownBlockType outputBlock;

- (void)main;
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;

@end
