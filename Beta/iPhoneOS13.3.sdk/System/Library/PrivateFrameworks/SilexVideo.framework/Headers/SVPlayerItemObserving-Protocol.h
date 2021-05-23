/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class AVPlayerItem;

@protocol SVPlayerItemObserving <Swift>

@property (weak, nonatomic, readonly) AVPlayerItem *item;
@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;

@end
