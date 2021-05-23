/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@interface TVPPlaybackUtilities : NSObject

+ (double)playedThresholdTimeForDuration:(double)arg1;
+ (long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4 respectPlayCount:(_Bool)arg5;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)arg1 duration:(double)arg2;
+ (long long)blueDotStateForDuration:(double)arg1 elapsedTime:(double)arg2 hasBeenPlayed:(_Bool)arg3 playCount:(unsigned long long)arg4;

@end
