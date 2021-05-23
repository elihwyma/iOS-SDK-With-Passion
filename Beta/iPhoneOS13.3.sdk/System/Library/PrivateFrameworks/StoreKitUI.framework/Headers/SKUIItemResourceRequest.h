/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIResourceRequest.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSString;

@protocol SKUIItemRequestDelegate;

@interface SKUIItemResourceRequest : SKUIResourceRequest <Swift>

{
    id <SKUIItemRequestDelegate> _delegate;
    NSString *_imageProfile;
    NSArray *_itemIdentifiers;
    NSString *_keyProfile;
}

@property (weak, nonatomic) id <SKUIItemRequestDelegate> delegate;
@property (copy, nonatomic) NSString *imageProfile;
@property (copy, nonatomic) NSString *keyProfile;
@property (copy, nonatomic) NSArray *itemIdentifiers;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finishWithResource:(id)arg1;
- (id)newLoadOperation;

@end
