/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIShelfMenuBarViewElement.h>

@class NSString, SKUIViewElement;

@protocol SKUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SKUIDynamicShelfMenuBarViewElement : SKUIShelfMenuBarViewElement

{
    SKUIViewElement *_cellTemplateViewElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SKUIViewElement *cellTemplateViewElement;
@property (nonatomic, readonly) id <SKUIEntityProviding> entityProvider;

- (id)applyUpdatesWithElement:(id)arg1;
- (_Bool)isDynamicContainer;
- (void)setShelfItemViewElementValidator:(CDUnknownBlockType)arg1;

@end
