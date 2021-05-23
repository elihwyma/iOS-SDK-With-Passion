/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUQuickControlViewController, NSSet;

@interface HUQuickControlViewControllerGroup : NSObject

{
    HUQuickControlViewController *_primaryViewController;
    NSSet *_alternateViewControllers;
}

@property (nonatomic, readonly) HUQuickControlViewController *primaryViewController;
@property (nonatomic, readonly) NSSet *alternateViewControllers;

- (id)initWithPrimaryViewController:(id)arg1 alternateViewControllers:(id)arg2;

@end
