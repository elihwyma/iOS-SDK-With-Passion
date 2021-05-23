/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIView.h>

@class AVPlayerLooper, AVQueuePlayer, NSMutableArray, NSObject;

@protocol OS_dispatch_source;

@interface SFMediaPlayerView : UIView

{
    AVPlayerLooper *_avLooper;
    AVQueuePlayer *_avQueuePlayer;
    NSMutableArray *_mediaItems;
    NSObject<OS_dispatch_source> *_speedUpTimer;
    _Bool _pausesAfterEachItem;
}

@property (nonatomic) _Bool pausesAfterEachItem;

+ (Class)layerClass;

- (void)pause;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isPaused;
- (void)advanceToNextItem;
- (void)play;
- (void)_pause;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)updateViewForAssetType:(int)arg1 adjustmentsURL:(id)arg2;
- (void)startMovieLoopWithPath:(id)arg1;
- (void)removeMovieItem:(id)arg1;
- (void)stopSpeedUpTimer;
- (void)enqueueItemsFromMediaItem:(id)arg1 afterItem:(id)arg2;
- (void)dequeueNonPlayingItemsFromMediaItem:(id)arg1;
- (void)setUpTimeRangeNotificationsForItem:(id)arg1;
- (void)startMovieLoopWithPath:(id)arg1 assetType:(int)arg2 adjustmentsURL:(id)arg3;
- (void)addMovieItem:(id)arg1;
- (void)breakFirstEnqueuedLoop;
- (void)speedUpRemainderOfCurrentItem;

@end
