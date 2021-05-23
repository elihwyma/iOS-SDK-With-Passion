/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSData, NSString;

@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *data;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2;

@end
