/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIViewController.h>

@class MPMediaControls, MPMediaControlsConfiguration, NSString;

@protocol MPMediaControlsViewControllerDelegate;

@interface MPMediaControlsViewController : UIViewController

{
    MPMediaControlsConfiguration *_configuration;
    CDUnknownBlockType _didDismissHandler;
    id <MPMediaControlsViewControllerDelegate> _delegate;
    MPMediaControls *_mediaControls;
}

@property (retain, nonatomic) MPMediaControls *mediaControls;
@property (nonatomic, readonly) MPMediaControlsConfiguration *configuration;
@property (copy, nonatomic) CDUnknownBlockType didDismissHandler;
@property (weak, nonatomic) id <MPMediaControlsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)dismiss;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (_Bool)prefersStatusBarHidden;
- (void)_present;
- (void)setOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (void)_createMediaControlsIfNeeded;
- (void)prepareRemoteViewController;
- (void)startPrewarming;
- (void)stopPrewarming;

@end
