/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUICountdown;

__attribute__((visibility("hidden")))
@interface SKUICountdownComponent : SKUIPageComponent

{
    SKUICountdown *_countdown;
}

@property (retain, nonatomic) SKUICountdown *countdown;

- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;

@end
