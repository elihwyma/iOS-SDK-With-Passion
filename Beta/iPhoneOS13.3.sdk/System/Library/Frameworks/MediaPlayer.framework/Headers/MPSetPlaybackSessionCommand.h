/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray, NSString;

@interface MPSetPlaybackSessionCommand : MPRemoteCommand

{
    NSString *_currentPlaybackSessionIdentifier;
    NSArray *_exportableSessionTypes;
    NSArray *_supportedSessionTypes;
}

@property (copy, nonatomic) NSString *currentPlaybackSessionIdentifier;
@property (copy, nonatomic) NSArray *exportableSessionTypes;
@property (copy, nonatomic) NSArray *supportedSessionTypes;

- (id)_mediaRemoteCommandInfoOptions;

@end
