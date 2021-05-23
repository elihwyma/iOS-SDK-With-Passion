/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIMediaQueryFeature.h>

__attribute__((visibility("hidden")))
@interface SKUIMediaQuerySizeFeature : SKUIMediaQueryFeature

{
    double _value;
}

+ (_Bool)supportsFeatureName:(id)arg1;

- (id)description;
- (id)requiredKeys;
- (id)initWithFeatureName:(id)arg1 value:(id)arg2;
- (_Bool)evaluateWithValues:(id)arg1;

@end
