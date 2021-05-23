/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject

{
    id _implementation;
}

@property (copy, nonatomic) NSURL *contentURL;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) unsigned long long loadState;
@property (nonatomic) long long controlStyle;
@property (nonatomic) long long repeatMode;
@property (nonatomic) _Bool shouldAutoplay;
@property (nonatomic, getter=isFullscreen) _Bool fullscreen;
@property (nonatomic) long long scalingMode;
@property (nonatomic, readonly) _Bool readyForDisplay;
@property (nonatomic, readonly) unsigned long long movieMediaTypes;
@property (nonatomic) long long movieSourceType;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double playableDuration;
@property (nonatomic, readonly) struct CGSize naturalSize;
@property (nonatomic) double initialPlaybackTime;
@property (nonatomic) double endPlaybackTime;
@property (nonatomic) _Bool allowsAirPlay;
@property (nonatomic, readonly, getter=isAirPlayVideoActive) _Bool airPlayVideoActive;
@property (nonatomic, readonly) _Bool isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;

+ (void)allInstancesResignActive;

- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)pause;
- (void)stop;
- (void)play;
- (id)initWithAsset:(id)arg1;
- (void)prepareToPlay;
- (id)initWithPlayerItem:(id)arg1;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)endSeeking;
- (id)initWithContentURL:(id)arg1;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)skipToPreviousItem;
- (void)_resignActive;
- (_Bool)_isReadyForDisplay;

@end
