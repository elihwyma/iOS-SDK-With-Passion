/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PlaybackCapabilities : NSObject

+ (_Bool)canPlaybackThree1080P30Streams;
+ (_Bool)canPlaybackThree1080P60Streams;
+ (_Bool)canDropFrameWhenSpeedUp;

@end
