/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <UIKit/UIViewController.h>

@class NSString, UIView, UIViewPropertyAnimator, UIVisualEffectView;

@protocol SVVideoLoadingProgressObserverFactory, SVVideoLoadingProgressObserving, SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackProgressObserving;

@interface SVVideoProgressViewController : UIViewController

{
    id <SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
    id <SVVideoLoadingProgressObserverFactory> _loadingProgressObserverFactory;
    id <SVVideoPlaybackProgressObserving> _playbackProgressObserver;
    id <SVVideoLoadingProgressObserving> _loadingProgressObserver;
    UIView *_loadingProgressView;
    UIVisualEffectView *_playbackProgressView;
    UIViewPropertyAnimator *_playbackProgressAnimator;
}

@property (nonatomic, readonly) id <SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;
@property (nonatomic, readonly) id <SVVideoLoadingProgressObserverFactory> loadingProgressObserverFactory;
@property (retain, nonatomic) id <SVVideoPlaybackProgressObserving> playbackProgressObserver;
@property (retain, nonatomic) id <SVVideoLoadingProgressObserving> loadingProgressObserver;
@property (nonatomic, readonly) UIView *loadingProgressView;
@property (retain, nonatomic) UIVisualEffectView *playbackProgressView;
@property (retain, nonatomic) UIViewPropertyAnimator *playbackProgressAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)resetToPlaybackProgress:(double)arg1 animated:(_Bool)arg2;
- (void)startUpdatingPlaybackProgressWithObserver:(id)arg1;
- (void)startUpdatingLoadingProgressWithObserver:(id)arg1;
- (id)initWithLoadingProgressObserverFactory:(id)arg1 playbackProgressObserverFactory:(id)arg2;

@end
