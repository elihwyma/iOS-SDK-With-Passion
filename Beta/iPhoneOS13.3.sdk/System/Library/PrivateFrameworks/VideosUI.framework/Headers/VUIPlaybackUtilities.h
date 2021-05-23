/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIPlaybackUtilities : NSObject

+ (double)playedThresholdTimeForDuration:(double)arg1;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2;
+ (long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4;
+ (long long)playedStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(_Bool)arg5;
+ (_Bool)playerIsLive:(id)arg1;

@end
