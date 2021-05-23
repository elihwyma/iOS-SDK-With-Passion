/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSString, SKUICarouselViewElement;

__attribute__((visibility("hidden")))
@interface SKUICarouselPageComponent : SKUIPageComponent

{
    NSArray *_carouselItems;
    double _cycleInterval;
    long long _missingItemCount;
}

@property (nonatomic, readonly) NSArray *carouselItems;
@property (nonatomic, readonly) SKUICarouselViewElement *viewElement;
@property (nonatomic, readonly) double cycleInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)componentType;
- (id)valueForMetricsField:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isMissingItemData;
- (id)metricsElementName;
- (void)updateWithMissingItems:(id)arg1;

@end
