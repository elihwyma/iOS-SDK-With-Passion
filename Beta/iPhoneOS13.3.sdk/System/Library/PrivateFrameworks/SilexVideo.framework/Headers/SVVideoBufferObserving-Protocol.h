/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVideoBufferObserving <Swift>

@property (nonatomic, readonly, getter=isPlaybackBufferFull) _Bool playbackBufferFull;
@property (nonatomic, readonly, getter=isPlaybackLikelyToKeepUp) _Bool playbackLikelyToKeepUp;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

@end
