/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKImageBalloonView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, CKMovieMediaObject;

@protocol CKMovieBalloonViewDelegate;

@interface CKMovieBalloonView : CKImageBalloonView

{
    CKMovieMediaObject *_mediaObject;
    AVPlayerItem *_avPlayerItem;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
}

@property (retain, nonatomic, setter=setAVPlayerItem:) AVPlayerItem *avPlayerItem;
@property (retain, nonatomic, setter=setAVPlayer:) AVPlayer *avPlayer;
@property (retain, nonatomic, setter=setAVPlayerLayer:) AVPlayerLayer *avPlayerLayer;
@property (retain, nonatomic) CKMovieMediaObject *mediaObject;
@property (weak, nonatomic) id <CKMovieBalloonViewDelegate> delegate;

- (void)dealloc;
- (id)description;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)tapGestureRecognized:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)cleanupPlayerIfNeeded;
- (void)videoDidReachEnd:(id)arg1;

@end
