/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUINavigationBarSectionController.h>

@class NSArray, NSString, SKUIMenuPopoverController, SKUINavigationBarMenusView, UIControl;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarMenusController : SKUINavigationBarSectionController

{
    UIControl *_focusedMenuButton;
    SKUINavigationBarMenusView *_menusView;
    NSArray *_menuViewElements;
    SKUIMenuPopoverController *_popoverController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)view;
- (void)willAppearInNavigationBar;
- (void)_menuButtonAction:(id)arg1;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (id)initWithMenuViewElements:(id)arg1;
- (void)reloadSectionViews;
- (void)_destroyPopover;
- (id)_menuViewElementForView:(id)arg1;

@end
