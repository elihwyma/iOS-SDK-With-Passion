/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingDescription.h>

@class SKUISettingsFamilyViewStateCoordinator;

__attribute__((visibility("hidden")))
@interface SKUIFamilySettingDescription : SKUISettingDescription

{
    SKUISettingsFamilyViewStateCoordinator *_viewStateCoordinator;
    long long _viewState;
}

@property (nonatomic, readonly) long long viewState;

+ (Class)_viewClassForSettingDescription:(id)arg1;

- (_Bool)_initiallyHidden;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (void)handleSelectionOnCompletion:(CDUnknownBlockType)arg1;
- (void)_updateViewState;
- (void)_updateWithViewState:(long long)arg1;

@end
