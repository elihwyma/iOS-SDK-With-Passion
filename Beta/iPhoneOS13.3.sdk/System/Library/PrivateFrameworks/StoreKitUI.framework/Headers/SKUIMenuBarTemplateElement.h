/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewElement.h>

@class SKUINavigationBarViewElement;

@protocol SKUIMenuBarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarTemplateElement : SKUIViewElement

@property (nonatomic, readonly) SKUIViewElement<SKUIMenuBarViewElement> *menuBar;
@property (nonatomic, readonly) SKUINavigationBarViewElement *navigationBarElement;

- (id)_menuBarChildOfElement:(id)arg1;

@end
