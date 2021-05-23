/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SKUISortDataRequest, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUILoadSortDataOperation : SKUILoadResourceOperation

{
    SSVLoadURLOperation *_underlyingOperation;
}

@property (weak) SSVLoadURLOperation *underlyingOperation;
@property (copy, readonly) SKUISortDataRequest *resourceRequest;

- (void)cancel;
- (void)main;
- (id)initWithResourceRequest:(id)arg1;

@end
