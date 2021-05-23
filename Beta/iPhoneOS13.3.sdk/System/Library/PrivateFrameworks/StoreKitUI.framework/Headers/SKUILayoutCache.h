/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, SKUILayoutCacheDelegate;

@interface SKUILayoutCache : NSObject

{
    NSMutableArray *_batchedRequests;
    id <SKUILayoutCacheDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_layouts;
    NSMutableArray *_requests;
}

@property (weak, nonatomic) id <SKUILayoutCacheDelegate> delegate;

- (id)init;
- (void)_populateCache;
- (void)commitLayoutRequests;
- (struct _NSRange)populateCacheWithLayoutRequests:(id)arg1;
- (id)layoutForIndex:(long long)arg1 forced:(_Bool)arg2;
- (void)_layoutRequestsInRange:(struct _NSRange)arg1;
- (void)_addLayoutBatch:(id)arg1;
- (struct _NSRange)addLayoutRequests:(id)arg1;
- (id)layoutForIndex:(long long)arg1;

@end
