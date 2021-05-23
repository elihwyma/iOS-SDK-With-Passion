/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray;

@interface SKUIGalleryPageComponent : SKUIPageComponent

{
    NSArray *_childComponents;
    double _cycleInterval;
    _Bool _hidesPageIndicator;
}

@property (nonatomic, readonly) NSArray *childComponents;
@property (nonatomic) double cycleInterval;
@property (nonatomic) _Bool hidesPageIndicator;

- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)metricsElementName;

@end
