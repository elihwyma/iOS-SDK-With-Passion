/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, SKUIToolbarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIToolbarButtonsController : NSObject

{
    NSMapTable *_buttonItemElements;
    SKUIToolbarViewElement *_toolbarElement;
}

- (void)_buttonAction:(id)arg1;
- (void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (id)initWithToolbarViewElement:(id)arg1;
- (id)addButtonItemWithButtonViewElement:(id)arg1;
- (void)disconnectAllButtons;

@end
