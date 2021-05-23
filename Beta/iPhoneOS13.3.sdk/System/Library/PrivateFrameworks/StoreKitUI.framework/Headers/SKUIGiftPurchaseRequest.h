/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIURLConnectionRequest;

__attribute__((visibility("hidden")))
@interface SKUIGiftPurchaseRequest : NSObject

{
    SKUIURLConnectionRequest *_request;
}

- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)purchaseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDonation:(id)arg1 configuration:(id)arg2;
- (id)_requestWithURL:(id)arg1 bodyDictionary:(id)arg2;

@end
