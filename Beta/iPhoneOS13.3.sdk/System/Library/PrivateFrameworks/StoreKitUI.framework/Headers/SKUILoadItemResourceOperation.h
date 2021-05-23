/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SKUIItemResourceRequest, SSVPlatformRequestOperation;

__attribute__((visibility("hidden")))
@interface SKUILoadItemResourceOperation : SKUILoadResourceOperation

{
    SSVPlatformRequestOperation *_underlyingOperation;
}

@property (weak) SSVPlatformRequestOperation *underlyingOperation;
@property (copy, readonly) SKUIItemResourceRequest *resourceRequest;

- (void)cancel;
- (void)main;
- (id)initWithResourceRequest:(id)arg1;

@end
