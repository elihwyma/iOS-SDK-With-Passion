/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIShelfViewElement.h>

@class NSArray, NSString, SKUIMenuBarViewElementConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIShelfMenuBarViewElement : SKUIShelfViewElement

{
    NSArray *_focusedViewElements;
    NSArray *_regularViewElements;
    SKUIMenuBarViewElementConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration;

+ (id)supportedFeatures;

- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;
- (void)_reloadMenuItems;
- (id)regularViewElementForMenuItemAtIndex:(unsigned long long)arg1;
- (id)focusedViewElementForMenuItemAtIndex:(unsigned long long)arg1;

@end
