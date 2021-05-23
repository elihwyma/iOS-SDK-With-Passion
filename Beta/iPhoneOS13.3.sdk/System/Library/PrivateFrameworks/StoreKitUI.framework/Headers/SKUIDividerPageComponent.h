/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIDividerViewElement;

__attribute__((visibility("hidden")))
@interface SKUIDividerPageComponent : SKUIPageComponent

{
    NSString *_title;
}

@property (nonatomic, readonly) SKUIDividerViewElement *viewElement;
@property (nonatomic, readonly) NSString *dividerTitle;

- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)initWithDividerTitle:(id)arg1;

@end
