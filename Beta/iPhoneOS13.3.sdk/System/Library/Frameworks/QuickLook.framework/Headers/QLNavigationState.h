/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface QLNavigationState : NSObject

{
    _Bool _navigationBarHidden;
    _Bool _toolBarHidden;
    _Bool _translucentNavigationBar;
    _Bool _translucentToolbar;
    UINavigationController *_navigationController;
}

@property _Bool navigationBarHidden;
@property _Bool toolBarHidden;
@property _Bool translucentNavigationBar;
@property _Bool translucentToolbar;
@property (retain) UINavigationController *navigationController;

@end
