/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@protocol MPMediaPlayback

@property (nonatomic, readonly) _Bool isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;

- (unsigned short)pause;
- (unsigned short)stop;
- (unsigned short)play;
- (unsigned short)prepareToPlay;
- (unsigned short)beginSeekingForward;
- (unsigned short)beginSeekingBackward;
- (unsigned short)endSeeking;

@end
