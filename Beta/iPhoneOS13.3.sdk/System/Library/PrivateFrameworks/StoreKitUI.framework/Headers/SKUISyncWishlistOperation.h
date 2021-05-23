/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSObject, SKUIClientContext;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUISyncWishlistOperation : NSOperation

{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _resultBlock;
}

@property (copy) CDUnknownBlockType resultBlock;

- (id)init;
- (void)main;
- (id)initWithClientContext:(id)arg1;
- (void)_sendLocalChangesForWishlist:(id)arg1;
- (_Bool)_loadRemoteItemsForWishlist:(id)arg1 didChange:(_Bool *)arg2 error:(id *)arg3;
- (_Bool)_mergeItems:(id)arg1 wishlist:(id)arg2 didChange:(_Bool *)arg3 error:(id *)arg4;

@end
