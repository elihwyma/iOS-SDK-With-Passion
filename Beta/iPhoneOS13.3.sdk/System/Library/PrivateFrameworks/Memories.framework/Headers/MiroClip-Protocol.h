/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class NSArray, PHAsset;

@protocol MiroClip <Swift>

@property (nonatomic) int startTime;
@property (nonatomic) int duration;
@property (nonatomic) int maxDuration;
@property (nonatomic, readonly) float sourceStartTime;
@property (nonatomic, readonly) float sourceDuration;
@property (nonatomic, readonly) int rawSourceDuration;
@property (nonatomic, readonly) NSArray *multiUpContainedClips;
@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) struct CGSize naturalSizeWithTransform;
@property (nonatomic, readonly) _Bool isSlomo;
@property (nonatomic) _Bool audioEnabled;

- (unsigned short)loadAVAsset;
- (unsigned short)loadAVPlayerItemWithCompletionHander:progressHandler:networkAccessAllowed: /* Error: Ran out of types for this method. */;

@end
