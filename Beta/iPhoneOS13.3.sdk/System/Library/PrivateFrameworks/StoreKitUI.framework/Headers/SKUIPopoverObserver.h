/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIPopoverController;

__attribute__((visibility("hidden")))
@interface SKUIPopoverObserver : NSObject

{
    UIPopoverController *_popoverController;
    SEL _selector;
    id _target;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (id)initWithPopoverController:(id)arg1;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;

@end
