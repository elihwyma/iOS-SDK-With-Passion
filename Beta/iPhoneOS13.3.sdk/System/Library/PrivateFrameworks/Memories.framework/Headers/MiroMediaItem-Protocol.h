/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class PHAsset;

@protocol MiroMediaItem <Swift>

@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) PHAsset *asset;

@end
