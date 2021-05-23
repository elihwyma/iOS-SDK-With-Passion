/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SAUIAudioData, VSPresynthesizedAudioRequest, VSSpeechRequest;

@protocol AFUISpeechSynthesisElementDelegate;

@interface AFUISpeechSynthesisElement : NSObject

{
    NSString *_text;
    _Bool _isPhonetic;
    _Bool _eligibleForSynthesis;
    _Bool _eligibleForProcessing;
    _Bool _provisional;
    _Bool _delayed;
    _Bool _canUseServerTTS;
    _Bool _shouldCache;
    _Bool _synthesizesWhileRecording;
    _Bool _preparationBlockCompleted;
    _Bool _durationHasElapsed;
    SAUIAudioData *_audioData;
    NSString *_identifier;
    NSString *_language;
    NSString *_gender;
    VSSpeechRequest *_speechRequest;
    VSPresynthesizedAudioRequest *_presynthesizedAudioRequest;
    long long _synthesisResult;
    id <AFUISpeechSynthesisElementDelegate> _delegate;
    NSString *_animationIdentifier;
    NSDictionary *_analyticsContext;
    NSDictionary *_speakableContextInfo;
    CDUnknownBlockType _completion;
}

@property (nonatomic, getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:) _Bool eligibleForSynthesis;
@property (nonatomic, getter=isEligibleForProcessing, setter=_setEligibleForProcessing:) _Bool eligibleForProcessing;
@property (nonatomic, readonly, getter=_completion) CDUnknownBlockType completion;
@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (setter=_setPreparationBlockCompleted:) _Bool preparationBlockCompleted;
@property (setter=_setDurationHasElapsed:) _Bool durationHasElapsed;
@property (nonatomic, readonly) SAUIAudioData *audioData;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *gender;
@property (nonatomic) _Bool isPhonetic;
@property (nonatomic, readonly, getter=isProvisional) _Bool provisional;
@property (nonatomic, getter=isDelayed) _Bool delayed;
@property (nonatomic) _Bool canUseServerTTS;
@property (retain, nonatomic) VSSpeechRequest *speechRequest;
@property (retain, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
@property (nonatomic) long long synthesisResult;
@property (weak, nonatomic) id <AFUISpeechSynthesisElementDelegate> delegate;
@property (nonatomic, readonly) NSString *animationIdentifier;
@property (nonatomic, readonly) NSDictionary *analyticsContext;
@property (retain, nonatomic) NSDictionary *speakableContextInfo;
@property (nonatomic) _Bool shouldCache;
@property (nonatomic) _Bool synthesizesWhileRecording;

- (id)description;
- (void)_updateSynthesisEligibility;
- (id)initWithText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 language:(id)arg4 gender:(id)arg5 provisional:(_Bool)arg6 eligibleAfterDuration:(double)arg7 delayed:(_Bool)arg8 preparation:(CDUnknownBlockType)arg9 completion:(CDUnknownBlockType)arg10 animationIdentifier:(id)arg11 analyticsContext:(id)arg12 speakableContextInfo:(id)arg13 canUseServerTTS:(_Bool)arg14 eligibilityChangedQueue:(id)arg15;
- (void)executeCompletion;

@end
