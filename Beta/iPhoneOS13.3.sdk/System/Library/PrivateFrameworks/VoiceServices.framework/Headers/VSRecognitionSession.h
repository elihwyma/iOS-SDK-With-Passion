/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, VSKeepAlive, VSRecognitionAction, VSSpeechSynthesizer;

@protocol VSRecognitionSessionDelegate;

@interface VSRecognitionSession : NSObject

{
    NSString *_modelIdentifier;
    VSKeepAlive *_keepAlive;
    id <VSRecognitionSessionDelegate> _delegate;
    VSRecognitionAction *_currentAction;
    NSArray *_topLevelKeywords;
    id _handlingThread;
    VSSpeechSynthesizer *_synthesizer;
    NSString *_languageID;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    double _levelInterval;
    unsigned long long _keywordPhase;
    struct {
        unsigned int delegateWillBegin:1;
        unsigned int delegateBegin:1;
        unsigned int delegateOpenURL:1;
        unsigned int delegateFinishedSpeaking:1;
        unsigned int delegateComplete:1;
        unsigned int debugDumpEnabled:1;
        unsigned int preferredEngine:2;
        unsigned int performHandlerActions:1;
        unsigned int allowSensitiveActions:1;
        unsigned int bluetoothAllowed:1;
        unsigned int resetNextAction:1;
        unsigned int isSpeaking:1;
        unsigned int actionBegan:1;
        unsigned int actionBeginning:1;
        unsigned int actionBeginDeferred:1;
        unsigned int invalid:1;
        unsigned int observeKeywordChange:1;
    } _sessionFlags;
}

- (id)init;
- (void)dealloc;
- (_Bool)isValid;
- (void)setDelegate:(id)arg1;
- (void)_init;
- (id)cancel;
- (_Bool)isFinished;
- (id)reset;
- (_Bool)isBusy;
- (void)_setAction:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(_Bool)arg2 withError:(id)arg3;
- (void)_notifyDelegateActionStarted;
- (id)_currentRecognizeAction;
- (id)initWithModelIdentifier:(id)arg1;
- (id)cancelMaintainingKeepAlive:(_Bool)arg1;
- (id)spokenFeedbackString;
- (id)spokenFeedbackAttributedString;
- (struct __CFDictionary *)_createKeywordIndex;
- (id)_createPhaseSortedKeywordsFromArray:(id)arg1;
- (id)_topLevelKeywords;
- (void)_keywordIndexChanged;
- (id)_beginSpeakingAttributedString:(id)arg1;
- (id)beginSpeakingString:(id)arg1;
- (id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2;
- (void)_notifyDelegateFinishedSpeakingWithError:(id)arg1;
- (id)beginNextAction;
- (_Bool)isRecognizing;
- (_Bool)isActivelyRecognizing;
- (_Bool)hasDeferredAction;
- (_Bool)nextActionWillTerminateSession;
- (_Bool)nextActionWillRecognize;
- (void)setSensitiveActionsEnabled:(_Bool)arg1;
- (_Bool)sensitiveActionsEnabled;
- (_Bool)setBluetoothInputAllowed:(_Bool)arg1;
- (void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3;
- (_Bool)_actionStarted:(id)arg1;
- (id)_notifyDelegateOpenURL:(id)arg1;
- (id)_recognitionResultHandlingThread;
- (void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3;
- (id)displayResultString;
- (id)displayStatusString;
- (void)setInputLevelUpdateInterval:(double)arg1;
- (float)inputLevel;
- (float)inputLevelDB;
- (void)setKeywordPhase:(unsigned long long)arg1;
- (id)keywordAtIndex:(long long)arg1;
- (long long)keywordCount;
- (id)_keywordsForModelIdentifier:(id)arg1;
- (id)beginSpeakingFeedbackString;
- (_Bool)setDebugDumpEnabled:(_Bool)arg1;
- (id)debugDumpPath;
- (_Bool)setNextRecognitionAudioInputPath:(id)arg1;
- (_Bool)setNextRecognitionRequiresReset:(_Bool)arg1;
- (_Bool)setPreferredEngine:(int)arg1;
- (void)setPerformRecognitionHandlerActions:(_Bool)arg1;

@end
