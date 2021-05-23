/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPRemoteCommand, NSDictionary, NSString;

@interface MPRemoteCommandEvent : NSObject

{
    NSDictionary *_mediaRemoteOptions;
    NSString *_contextID;
    NSString *_commandID;
    MPRemoteCommand *_command;
    double _timestamp;
}

@property (nonatomic, readonly) MPRemoteCommand *command;
@property (nonatomic, readonly) double timestamp;

+ (id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

- (id)init;
- (id)description;
- (id)contextID;
- (id)contentItemID;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)mediaRemoteOptions;
- (id)commandID;
- (id)interfaceID;
- (long long)playbackQueueOffset;

@end
