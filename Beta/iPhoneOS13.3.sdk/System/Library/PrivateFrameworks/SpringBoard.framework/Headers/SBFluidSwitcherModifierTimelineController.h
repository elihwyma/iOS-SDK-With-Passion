/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBFluidSwitcherModifierTimelineViewController, UIWindow;

@interface SBFluidSwitcherModifierTimelineController : NSObject

{
    UIWindow *_window;
    SBFluidSwitcherModifierTimelineViewController *_rootViewController;
    _Bool _visible;
}

@property (nonatomic, getter=isVisible) _Bool visible;

- (void)addEntry:(id)arg1;

@end
