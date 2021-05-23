/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIImageViewElement, SKUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SKUIActivityIndicatorViewElement : SKUIViewElement

{
    double _period;
}

@property (nonatomic, readonly) SKUIImageViewElement *image;
@property (nonatomic, readonly) double period;
@property (nonatomic, readonly) SKUILabelViewElement *text;

- (_Bool)isDisabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;

@end
