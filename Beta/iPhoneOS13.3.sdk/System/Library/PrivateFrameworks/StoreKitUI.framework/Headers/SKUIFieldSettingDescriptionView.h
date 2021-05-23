/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingDescriptionView.h>

__attribute__((visibility("hidden")))
@interface SKUIFieldSettingDescriptionView : SKUISettingDescriptionView

{
    _Bool _enabled;
}

@property (nonatomic) _Bool enabled;

- (void)beginEdits;
- (void)commitEdits;

@end
