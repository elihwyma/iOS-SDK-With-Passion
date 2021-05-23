/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

__attribute__((visibility("hidden")))
@interface SKUIOfferViewElement : SKUIViewElement

@property (nonatomic, readonly, getter=isSimpleOffer) _Bool simpleOffer;
@property (nonatomic, readonly, getter=isCompactModeEnabled) _Bool compactModeEnabled;

- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (long long)pageComponentType;

@end
