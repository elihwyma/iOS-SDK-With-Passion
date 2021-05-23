/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MNNavigationAudioSessionDelegate;

__attribute__((visibility("hidden")))
@interface MNNavigationAudioSession : NSObject

{
    unsigned long long _sessionType;
    NSString *_language;
    id <MNNavigationAudioSessionDelegate> _delegate;
    _Bool _speechEnabled;
    _Bool _muteSpeechOverride;
    unsigned long long _voiceGuidanceLevel;
    unsigned long long _appContext;
}

@property (nonatomic) unsigned long long sessionType;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic) unsigned long long appContext;
@property (nonatomic) _Bool speechEnabled;
@property (nonatomic) _Bool muteSpeechOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id delegate;
@property (nonatomic) unsigned long long voiceGuidanceLevel;

+ (id)sessionOfType:(unsigned long long)arg1 language:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)endSession;
- (_Bool)isSpeaking;
- (void)beginSession;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(_Bool)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)prepareToAnnounce;
- (void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;
- (void)clearAllAnnouncements;
- (_Bool)_deviceSettingsAllowSpeech;
- (_Bool)_isVoiceGuidanceEnabled;
- (_Bool)_beepIfNecessaryWithShortPromptType:(unsigned long long)arg1 textToSpeak:(id)arg2;
- (void)_speak:(id)arg1 fallbackPrompt:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
