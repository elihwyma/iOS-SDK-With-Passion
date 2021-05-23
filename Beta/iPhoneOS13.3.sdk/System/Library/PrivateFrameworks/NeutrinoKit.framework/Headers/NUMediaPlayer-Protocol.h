/*
 Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

#import <NeutrinoKit/Swift-Protocol.h>

@protocol NUMediaPlayer <Swift>

@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) CDStruct_198678f7 mediaDuration;
@property (nonatomic, readonly) CDStruct_198678f7 currentTime;
@property (nonatomic) double playbackRate;
@property (nonatomic) long long playbackMode;
@property (nonatomic, getter=isMuted) _Bool muted;

- (unsigned short)pause;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)play;
- (unsigned short)seekToTime: /* Error: Ran out of types for this method. */;
- (unsigned short)stepByCount: /* Error: Ran out of types for this method. */;
- (unsigned short)seekToTime:exact: /* Error: Ran out of types for this method. */;
- (unsigned short)addPlaybackTimeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)addPlaybackStateObserver: /* Error: Ran out of types for this method. */;

@end
