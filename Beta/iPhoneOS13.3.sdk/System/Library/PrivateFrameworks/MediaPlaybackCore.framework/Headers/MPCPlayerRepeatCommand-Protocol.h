/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSArray;

@protocol MPCPlayerRepeatCommand <Swift>

@property (nonatomic, readonly) NSArray *supportedRepeatTypes;

- (unsigned short)advance;
- (unsigned short)setRepeatType: /* Error: Ran out of types for this method. */;

@end
