/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIJSDOMFeatureNavigationDocument;

__attribute__((visibility("hidden")))
@interface SKUISplitViewTemplateElement : SKUIViewElement

{
    SKUIJSDOMFeatureNavigationDocument *_leftNavigationDocument;
    long long _preferredDisplayMode;
    SKUIJSDOMFeatureNavigationDocument *_rightNavigationDocument;
}

@property (nonatomic, readonly) long long preferredDisplayMode;
@property (readonly) SKUIJSDOMFeatureNavigationDocument *leftNavigationDocument;
@property (readonly) SKUIJSDOMFeatureNavigationDocument *rightNavigationDocument;
@property (nonatomic, readonly) SKUIViewElement *leftSplitElement;
@property (nonatomic, readonly) SKUIViewElement *rightSplitElement;
@property (nonatomic, readonly) _Bool usesInlineSplitContent;

+ (id)supportedFeatures;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)_splitElementForIndex:(long long)arg1;

@end
