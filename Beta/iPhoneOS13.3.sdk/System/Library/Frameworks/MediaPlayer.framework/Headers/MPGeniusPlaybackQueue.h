/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSURL;

@interface MPGeniusPlaybackQueue : MPRemotePlaybackQueue

@property (nonatomic, readonly) NSURL *seedTrack;

+ (_Bool)supportsSecureCoding;

- (id)description;

@end
