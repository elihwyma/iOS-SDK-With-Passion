/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSData, NSString;

@interface MPSetPlaybackSessionCommandEvent : MPRemoteCommandEvent

{
    NSString *_identifier;
    NSString *_type;
    NSData *_playbackSessionData;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSData *playbackSessionData;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
