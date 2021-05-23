/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UINavigationController.h>

@class UIView;

@interface TSKModalNavigationController : UINavigationController

{
    UIView *mTopSeparator;
    _Bool mShowTopSeparator;
    _Bool mIsFullscreenViewController;
}

@property (nonatomic) _Bool showTopSeparator;
@property (nonatomic) _Bool isFullscreenViewController;

- (void)dealloc;
- (void)viewDidLoad;
- (long long)positionForBar:(id)arg1;
- (void)layoutViews;
- (id)initWithRootViewController:(id)arg1;
- (void)p_statusBarWillChange:(id)arg1;

@end
