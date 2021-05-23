/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SKUIMenuViewController, UIPopoverController;

@protocol SKUIMenuPopoverDelegate;

__attribute__((visibility("hidden")))
@interface SKUIMenuPopoverController : NSObject

{
    id <SKUIMenuPopoverDelegate> _delegate;
    SKUIMenuViewController *_menuViewController;
    UIPopoverController *_popoverController;
}

@property (nonatomic, readonly) NSArray *menuTitles;
@property (weak, nonatomic) id <SKUIMenuPopoverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)dismissAnimated:(_Bool)arg1;
- (id)initWithMenuTitles:(id)arg1 selectedIndex:(long long)arg2;
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (id)initWithMenuTitles:(id)arg1;
- (void)_destroyPopoverController;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;

@end
