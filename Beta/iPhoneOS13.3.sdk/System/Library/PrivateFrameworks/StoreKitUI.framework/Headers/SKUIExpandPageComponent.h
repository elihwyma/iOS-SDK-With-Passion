/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSMutableArray, SKUIExpandViewElement;

__attribute__((visibility("hidden")))
@interface SKUIExpandPageComponent : SKUIPageComponent

{
    NSMutableArray *_childComponents;
    SKUIExpandViewElement *_viewElement;
}

@property (nonatomic, readonly) SKUIExpandViewElement *viewElement;

- (long long)componentType;
- (id)initWithViewElement:(id)arg1;
- (id)metricsElementName;
- (id)childComponentForIndex:(long long)arg1;
- (id)childComponents;

@end
