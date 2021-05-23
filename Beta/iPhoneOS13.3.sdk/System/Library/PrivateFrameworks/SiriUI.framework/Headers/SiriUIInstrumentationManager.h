/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSString;

@interface SiriUIInstrumentationManager : NSObject

{
    int _currentSiriUIState;
    AFAnalyticsTurnBasedInstrumentationContext *_currentInstrumentationTurnContext;
    NSString *_clientGeneratedDialogIdentifier;
}

@property (retain) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext;
@property int currentSiriUIState;
@property (copy, nonatomic) NSString *clientGeneratedDialogIdentifier;

+ (id)sharedManager;

- (id)init;
- (void)emitInstrumentation:(id)arg1;
- (void)storeCurrentInstrumentationTurnContext:(id)arg1;
- (void)storeClientGeneratedDUC:(id)arg1;
- (void)emitUIStateTransitionEventWithFromState:(int)arg1 toState:(int)arg2 withPresentationType:(int)arg3;
- (void)emitUIStateTransitionForSiriDismissal:(int)arg1;
- (void)emitPartialSpeechTranscriptionEventWith:(id)arg1;
- (void)emitFinalSpeechTranscriptionEventWith:(id)arg1;
- (void)emitTextToSpeechBeginEvent:(id)arg1;
- (void)emitTextToSpeechEndEvent:(id)arg1;
- (void)emitUUFRPresentedEventWith:(id)arg1 snippetClass:(id)arg2 dialogIdentifier:(id)arg3 dialogPhase:(id)arg4;
- (void)emitDialogOutputEventWith:(id)arg1 canUseServerTTS:(_Bool)arg2 spokenDialogOutput:(id)arg3 displayedDialogOutput:(id)arg4;
- (void)emitPunchOutEventWithURL:(id)arg1 appID:(id)arg2;

@end
