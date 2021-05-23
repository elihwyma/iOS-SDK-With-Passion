/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class SpeedRanges, VideoMovie;

@protocol MiroClip_Shim <Swift>

@property (nonatomic) float speed;
@property (nonatomic, readonly) SpeedRanges *speedRanges;
@property (nonatomic, readonly) float frameRate;
@property (nonatomic, readonly) VideoMovie *videoMovie;

- (unsigned short)copy;

@end
