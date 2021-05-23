/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class ADBannerView, AVPlayer, AVPlayerItem, NSString;

@protocol ADPlayerDelegate;

@interface ADPlayer : NSObject

{
    _Bool _playbackHasBegun;
    id <ADPlayerDelegate> _delegate;
    ADBannerView *_videoAd;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    unsigned long long _playbackState;
    id _timeObserver;
}

@property (nonatomic) _Bool playbackHasBegun;
@property (retain, nonatomic) AVPlayerItem *avPlayerItem;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (nonatomic) unsigned long long playbackState;
@property (retain, nonatomic) ADBannerView *videoAd;
@property (retain, nonatomic) id timeObserver;
@property (weak, nonatomic) id <ADPlayerDelegate> delegate;
@property (nonatomic, readonly) float playbackRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)play;
- (void)performAction;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)shutdown;
- (void)bannerViewActionDidFinish:(id)arg1;
- (_Bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(_Bool)arg2;
- (void)showAdTransparency;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)bannerViewWillLoadAd:(id)arg1;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewShouldPauseMedia:(id)arg1;
- (void)bannerViewShouldResumeMedia:(id)arg1;
- (_Bool)prepareForPlayback;
- (id)_networkOptimalVideoURLForAd:(id)arg1;
- (_Bool)_beginLoadingVideoFromURL:(id)arg1;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (void)playerItemDidFailedToPlayToEnd:(id)arg1;
- (void)playerItemEncounteredPlaybackStall:(id)arg1;
- (void)playerDidStart;
- (void)playerDidPause;
- (_Bool)prepareForPlayackOfInterstitialWithURL:(id)arg1;

@end
