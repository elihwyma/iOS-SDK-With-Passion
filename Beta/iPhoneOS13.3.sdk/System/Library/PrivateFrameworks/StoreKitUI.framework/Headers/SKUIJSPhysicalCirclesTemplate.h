/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class SKUIPhysicalCirclesTemplateDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUIJSPhysicalCirclesTemplate : IKJSObject

{
    SKUIPhysicalCirclesTemplateDOMFeature *_feature;
}

- (id)initWithAppContext:(id)arg1 DOMFeature:(id)arg2;
- (void)_performAnimationWithType:(long long)arg1 callback:(id)arg2;
- (void)afterDOMUpdate:(id)arg1;
- (void)performFinishAnimation:(id)arg1;
- (void)performResetAnimation:(id)arg1;

@end
