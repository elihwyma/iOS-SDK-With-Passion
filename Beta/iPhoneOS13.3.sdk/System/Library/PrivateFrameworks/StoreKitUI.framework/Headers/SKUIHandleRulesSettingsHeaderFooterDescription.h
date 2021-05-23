/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingsHeaderFooterDescription.h>

@class SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUIHandleRulesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription

{
    SKUIClientContext *_clientContext;
    _Bool _showInvalid;
}

@property (nonatomic) _Bool showInvalid;

- (id)text;
- (id)initWithClientContext:(id)arg1;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;

@end
