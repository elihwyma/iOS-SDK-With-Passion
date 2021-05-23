/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer;

@protocol CKVideoPreviewViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKVideoPreviewViewController : UIViewController

{
    _Bool _redisplayStatusBar;
    _Bool _reachedEnd;
    id <CKVideoPreviewViewControllerDelegate> _videoPreviewDelegate;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
}

@property (retain, nonatomic) AVPlayerItem *avPlayerItem;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVPlayerLayer *avPlayerLayer;
@property (nonatomic) _Bool reachedEnd;
@property (weak, nonatomic) id <CKVideoPreviewViewControllerDelegate> videoPreviewDelegate;
@property (nonatomic) _Bool redisplayStatusBar;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)play;
- (_Bool)prefersStatusBarHidden;
- (void)setVideoFileURL:(id)arg1;
- (void)videoDidReachEnd:(id)arg1;
- (_Bool)togglePlayPause;

@end
