/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@interface UIApplicationRotationFollowingController : UIViewController

{
    _Bool _sizesWindowToScene;
}

@property (nonatomic) _Bool sizesWindowToScene;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1;
- (void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2;
- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (id)_topMostWindow;

@end
