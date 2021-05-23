/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@interface GKNavigationControllerDeferredTransitionInfo : NSObject

{
    _Bool _animated;
    int _type;
    UIViewController *_viewController;
}

@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) int type;
@property (nonatomic) _Bool animated;

- (void)dealloc;

@end
