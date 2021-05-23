/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString, SKUIMenuBarViewElementConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarViewElement : SKUIViewElement

{
    NSArray *_titleViewElements;
    SKUIMenuBarViewElementConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration;

+ (id)supportedFeatures;
+ (Class)_titlesMenuBarViewElementClass;
+ (Class)_shelfMenuBarViewElementClass;

- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;
- (id)titleForMenuItemAtIndex:(unsigned long long)arg1;
- (void)_reloadMenuItems;

@end
