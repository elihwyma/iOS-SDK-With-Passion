/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <AVFoundation/AVQueuePlayer.h>

@class AVPlayerMediaSelectionCriteria;

@interface AVQueuePlayer (TVPAdditions)

@property (retain, nonatomic) AVPlayerMediaSelectionCriteria *tvp_cachedAudioSelectionCriteria;

@end
