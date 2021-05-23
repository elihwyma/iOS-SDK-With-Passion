/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class NSError;

@protocol SVVideoPlaybackEventTracking <Swift>

@property (copy, nonatomic, setter=onPlaybackStart:) CDUnknownBlockType playbackStartBlock;
@property (copy, nonatomic, setter=onPlaybackPaused:) CDUnknownBlockType playbackPausedBlock;
@property (copy, nonatomic, setter=onPlaybackResumed:) CDUnknownBlockType playbackResumedBlock;
@property (copy, nonatomic, setter=onPlaybackFinished:) CDUnknownBlockType playbackFinishedBlock;
@property (copy, nonatomic, setter=onPlaybackFailed:) CDUnknownBlockType playbackFailedBlock;
@property (copy, nonatomic, readonly) NSError *error;

@end
