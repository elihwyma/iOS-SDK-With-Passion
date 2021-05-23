/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, SKUIToolbarButtonsController, SKUIToolbarViewElement;

@protocol SKUIToolbarControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIToolbarController : NSObject

{
    SKUIToolbarButtonsController *_buttonsController;
    SKUIToolbarViewElement *_viewElement;
    NSArray *_toolbarItems;
    id <SKUIToolbarControllerDelegate> _delegate;
}

@property (nonatomic, readonly) SKUIToolbarViewElement *toolbarViewElement;
@property (weak, nonatomic) id <SKUIToolbarControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *toolbarItems;

- (void)dealloc;
- (id)initWithToolbarViewElement:(id)arg1;
- (void)detachFromNavigationController:(id)arg1;
- (void)updateToolbarForNavigationController:(id)arg1;
- (id)_barButtonItemWithElement:(id)arg1;
- (id)_barButtonItemWithButtonElement:(id)arg1;
- (_Bool)toolbarButtonsController:(id)arg1 shouldDispatchEventForButton:(id)arg2;

@end
