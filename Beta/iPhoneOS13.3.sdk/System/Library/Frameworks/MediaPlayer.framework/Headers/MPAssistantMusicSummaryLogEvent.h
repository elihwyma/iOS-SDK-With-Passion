/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAssistantMusicLogEvent.h>

@class NSNumber;

@interface MPAssistantMusicSummaryLogEvent : MPAssistantMusicLogEvent

{
    double _blockingSecureKeyLoadDuration;
    NSNumber *_perceivedTotalStartupTime;
    double _tracklistLoadDuration;
}

@property (nonatomic) double blockingSecureKeyLoadDuration;
@property (copy, nonatomic) NSNumber *perceivedTotalStartupTime;
@property (nonatomic) double tracklistLoadDuration;

- (id)eventName;
- (long long)eventCode;
- (id)eventPayload;

@end
