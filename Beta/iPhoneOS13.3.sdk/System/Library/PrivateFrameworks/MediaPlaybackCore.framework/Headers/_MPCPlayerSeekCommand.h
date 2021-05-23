/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerSeekCommand : _MPCPlayerItemCommand

{
    _Bool _prefersNegativeBackwardSkipIntervals;
    unsigned long long _seekSupport;
    NSArray *_preferredBackwardJumpIntervals;
    NSArray *_preferredForwardJumpIntervals;
}

@property (nonatomic, readonly) unsigned long long seekSupport;
@property (nonatomic) _Bool prefersNegativeBackwardSkipIntervals;
@property (copy, nonatomic) NSArray *preferredBackwardJumpIntervals;
@property (copy, nonatomic) NSArray *preferredForwardJumpIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)endSeek;
- (id)changePositionToElapsedInterval:(double)arg1;
- (id)beginSeekWithDirection:(long long)arg1;
- (id)initWithResponse:(id)arg1 seekSupport:(unsigned long long)arg2;
- (id)_seekCommandWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (id)jumpByInterval:(double)arg1;

@end
