/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/Swift-Protocol.h>

@protocol LPMediaPlayer <Swift>

@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isMuted) _Bool muted;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly, getter=isFullScreen) _Bool fullScreen;
@property (nonatomic, readonly) _Bool usesSharedAudioSession;
@property (nonatomic, readonly) _Bool shouldUnmuteWhenUserAdjustsVolume;
@property (nonatomic, readonly) unsigned long long lastInteractionTimestamp;
@property (nonatomic, readonly) double unobscuredAreaFraction;

@end
