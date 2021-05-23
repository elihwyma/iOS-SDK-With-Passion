/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface SKProductStorePromotionController : NSObject

{
    NSMutableArray *_fetchOrderProductsRequests;
    NSMutableArray *_fetchOrderCompletions;
    NSMutableArray *_fetchOrderOrders;
    NSObject<OS_dispatch_queue> *_fetchOrderQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultController;

- (id)init;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)fetchStorePromotionVisibilityForProduct:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateStorePromotionVisibility:(long long)arg1 forProduct:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchStorePromotionOrderWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateStorePromotionOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
