/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <Foundation/NSObject.h>

@class AFVoiceInfo;

@interface AssistantVoiceControllerVoiceSettings : NSObject

{
    AFVoiceInfo *_inProgressVoice;
    AFVoiceInfo *_currentVoice;
}

@property (retain, nonatomic) AFVoiceInfo *inProgressVoice;
@property (retain, nonatomic) AFVoiceInfo *currentVoice;

+ (id)settingsWithInProgressVoice:(id)arg1 currentVoice:(id)arg2;

@end
