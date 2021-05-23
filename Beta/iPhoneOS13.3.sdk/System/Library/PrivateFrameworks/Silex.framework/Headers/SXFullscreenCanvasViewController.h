/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIViewController.h>

@protocol SXFullscreenCanvasViewControllerDelegate;

@interface SXFullscreenCanvasViewController : UIViewController

{
    _Bool _isTransitioning;
    long long _statusBarStyle;
    id <SXFullscreenCanvasViewControllerDelegate> _delegate;
}

@property (nonatomic) long long statusBarStyle;
@property (nonatomic) _Bool isTransitioning;
@property (weak, nonatomic) id <SXFullscreenCanvasViewControllerDelegate> delegate;

- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;

@end
