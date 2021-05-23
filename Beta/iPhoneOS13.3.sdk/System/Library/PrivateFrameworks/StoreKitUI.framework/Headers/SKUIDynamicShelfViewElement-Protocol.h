/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class SKUIViewElement;

@protocol SKUIEntityProviding;

@protocol SKUIDynamicShelfViewElement <Swift>

@property (nonatomic, readonly) SKUIViewElement *cellTemplateViewElement;
@property (nonatomic, readonly) id <SKUIEntityProviding> entityProvider;

@end
