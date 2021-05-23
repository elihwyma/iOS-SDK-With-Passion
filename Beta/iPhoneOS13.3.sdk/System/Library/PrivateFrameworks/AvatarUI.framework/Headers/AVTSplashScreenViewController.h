/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIViewController.h>

@class AVPlayerLooper, AVPlayerViewController, AVQueuePlayer, AVTSplashScreenConfiguration, AVTSplashScreenLayout, AVTUIStyle, UIButton, UILabel, UIScrollView;

@protocol AVTSplashScreenViewControllerDelegate;

@interface AVTSplashScreenViewController : UIViewController

{
    id <AVTSplashScreenViewControllerDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_continueButton;
    UIScrollView *_scrollView;
    AVTSplashScreenConfiguration *_configuration;
    AVTUIStyle *_styleProvider;
    AVPlayerLooper *_playerLooper;
    AVQueuePlayer *_queuePlayer;
    AVPlayerViewController *_playerViewController;
    AVPlayerLooper *_secondaryPlayerLooper;
    AVQueuePlayer *_secondaryQueuePlayer;
    AVPlayerViewController *_secondaryPlayerViewController;
    AVTSplashScreenLayout *_currentLayout;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) AVTSplashScreenConfiguration *configuration;
@property (retain, nonatomic) AVTUIStyle *styleProvider;
@property (retain, nonatomic) AVPlayerLooper *playerLooper;
@property (retain, nonatomic) AVQueuePlayer *queuePlayer;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) AVPlayerLooper *secondaryPlayerLooper;
@property (retain, nonatomic) AVQueuePlayer *secondaryQueuePlayer;
@property (retain, nonatomic) AVPlayerViewController *secondaryPlayerViewController;
@property (retain, nonatomic) AVTSplashScreenLayout *currentLayout;
@property (weak, nonatomic) id <AVTSplashScreenViewControllerDelegate> delegate;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)applyLayout:(id)arg1;
- (id)initWithConfiguration:(id)arg1 styleProvider:(id)arg2;
- (void)didTapContinueButton:(id)arg1;
- (void)splashScreenLayoutDidChange:(id)arg1;

@end
