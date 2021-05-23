/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIResourceRequest.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSURL;

@protocol SKUISortDataRequestDelegate;

__attribute__((visibility("hidden")))
@interface SKUISortDataRequest : SKUIResourceRequest <Swift>

{
    id <SKUISortDataRequestDelegate> _delegate;
    NSURL *_sortURL;
}

@property (nonatomic, readonly) NSURL *sortURL;
@property (weak, nonatomic) id <SKUISortDataRequestDelegate> delegate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finishWithResource:(id)arg1;
- (id)newLoadOperation;
- (id)initWithSortURL:(id)arg1;

@end
