/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@protocol VoiceTriggerNotificationInterface;

__attribute__((visibility("hidden")))
@interface AVVoiceTriggerNotificationForwarder : NSObject

{
    id <VoiceTriggerNotificationInterface> _target;
}

@property (nonatomic) id <VoiceTriggerNotificationInterface> target;

- (void)voiceTriggerNotification:(id)arg1;
- (void)speakerStateChangedNotification:(id)arg1;
- (void)speakerMuteStateChangedNotification:(_Bool)arg1;

@end
