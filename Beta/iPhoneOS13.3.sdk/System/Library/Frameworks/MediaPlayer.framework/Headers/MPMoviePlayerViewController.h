/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIViewController.h>

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController

{
    id _internal;
    _Bool _statusBarWasHidden;
}

@property (nonatomic, readonly) MPMoviePlayerController *moviePlayer;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)canBecomeFirstResponder;
- (long long)preferredWhitePointAdaptivityStyle;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)initWithAsset:(id)arg1;
- (_Bool)_canReloadView;
- (_Bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1;

@end
