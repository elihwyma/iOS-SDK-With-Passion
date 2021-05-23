/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSArray;

@protocol MPCPlayerSeekCommand <Swift>

@property (copy, nonatomic, readonly) NSArray *preferredBackwardJumpIntervals;
@property (copy, nonatomic, readonly) NSArray *preferredForwardJumpIntervals;

- (unsigned short)endSeek;
- (unsigned short)changePositionToElapsedInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)beginSeekWithDirection: /* Error: Ran out of types for this method. */;
- (unsigned short)jumpByInterval: /* Error: Ran out of types for this method. */;

@end
