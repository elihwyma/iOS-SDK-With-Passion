/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSArray;

@protocol MPCPlayerShuffleCommand <Swift>

@property (nonatomic, readonly) NSArray *supportedShuffleTypes;

- (unsigned short)advance;
- (unsigned short)setShuffleType: /* Error: Ran out of types for this method. */;

@end
