/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SKUIArtworkRequest, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUILoadArtworkResourceOperation : SKUILoadResourceOperation

{
    SSVLoadURLOperation *_underlyingOperation;
}

@property (weak) SSVLoadURLOperation *underlyingOperation;
@property (copy, readonly) SKUIArtworkRequest *resourceRequest;

- (void)cancel;
- (void)main;
- (id)initWithResourceRequest:(id)arg1;

@end
