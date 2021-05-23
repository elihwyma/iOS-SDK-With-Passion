/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class UIScreen, UIView, UIWindow;

@interface SBFolderControllerAnimationContext : NSObject

{
    UIScreen *_screen;
    UIWindow *_animationWindow;
    UIView *_fallbackIconContainer;
}

@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) UIWindow *animationWindow;
@property (nonatomic, readonly) UIView *fallbackIconContainer;

+ (id)contextWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;

- (id)initWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;

@end
