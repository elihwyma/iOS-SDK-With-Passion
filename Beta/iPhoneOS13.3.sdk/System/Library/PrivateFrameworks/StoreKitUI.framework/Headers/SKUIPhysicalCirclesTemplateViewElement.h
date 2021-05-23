/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUILabelViewElement, SKUIPaletteViewElement, SKUIPhysicalCirclesTemplateDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement

{
    SKUIPhysicalCirclesTemplateDOMFeature *_scriptInterface;
}

@property (nonatomic, readonly) SKUILabelViewElement *subtitleElement;
@property (nonatomic, readonly) SKUILabelViewElement *titleElement;
@property (nonatomic, readonly) NSArray *circleItemElements;
@property (nonatomic, readonly) SKUIPaletteViewElement *footerPaletteElement;
@property (nonatomic, readonly) SKUIPhysicalCirclesTemplateDOMFeature *scriptInterface;

+ (id)supportedFeatures;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (void)dispatchRemovedEventWithChildViewElement:(id)arg1;

@end
