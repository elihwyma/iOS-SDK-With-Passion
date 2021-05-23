/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIViewElement;

__attribute__((visibility("hidden")))
@interface SKUISettingsHeaderFooterDescription : NSObject

{
    SKUIViewElement *_viewElement;
}

+ (id)_settingsHeaderFooterDescriptionWithHeaderElement:(id)arg1;
+ (id)_settingsHeaderFooterDescriptionWithFooterElement:(id)arg1;
+ (id)settingsHeaderFooterDescriptionWithViewElement:(id)arg1;
+ (Class)viewClassForSettingsHeaderFooterDescription:(id)arg1;

- (id)viewElement;
- (id)initWithViewElement:(id)arg1;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;

@end
