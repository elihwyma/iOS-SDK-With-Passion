/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoPlaybackAttemptTracking <Swift>

@property (nonatomic, readonly, getter=hasAttemptedPlayback) _Bool attemptedPlayback;
@property (copy, nonatomic, setter=onPlaybackAttempt:) CDUnknownBlockType playbackAttemptBlock;

@end
