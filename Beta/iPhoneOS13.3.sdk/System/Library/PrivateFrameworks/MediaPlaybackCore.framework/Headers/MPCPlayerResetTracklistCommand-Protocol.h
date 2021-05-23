/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class NSArray;

@protocol MPCPlayerResetTracklistCommand <Swift>

@property (nonatomic, readonly) NSArray *specializedIntents;

- (unsigned short)clear;
- (unsigned short)replaceWithPlaybackIntent:replaceIntent: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceWithPlaybackIntent: /* Error: Ran out of types for this method. */;

@end
