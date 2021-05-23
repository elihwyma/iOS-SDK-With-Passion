/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAssistantMusicLogEvent.h>

@interface MPAssistantMusicAssetLoadLogEvent : MPAssistantMusicLogEvent

{
    double _duration;
}

@property (nonatomic) double duration;

- (id)eventName;
- (long long)eventCode;
- (id)eventPayload;

@end
