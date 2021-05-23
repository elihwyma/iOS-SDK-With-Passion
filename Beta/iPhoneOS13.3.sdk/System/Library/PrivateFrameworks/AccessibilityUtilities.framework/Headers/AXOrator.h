/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AVSpeechSynthesizer, AVSpeechUtterance, AXDispatchTimer, AXLanguageTag, AXLanguageTaggedContent, NSArray, NSMutableArray, NSString;

@protocol AXOratorDelegate;

@interface AXOrator : NSObject

{
    AVSpeechUtterance *_statusUtterance;
    _Bool _contentIsSpeakable;
    AXDispatchTimer *_audioSessionTimer;
    _Bool _spellOutContent;
    _Bool _shouldSpeakNextItemOnResume;
    _Bool _preferredLanguageWasSpecified;
    _Bool _isProcessingContentForSpeech;
    id <AXOratorDelegate> _delegate;
    long long _speakingContext;
    AXLanguageTaggedContent *_selectedContent;
    double _audioSessionInactiveTimeout;
    NSString *_voiceIdentifier;
    AXLanguageTaggedContent *_speakingContent;
    NSArray *_speakingContentTokenRanges;
    unsigned long long _numberOfTokensToSkip;
    AVSpeechSynthesizer *_speechSynthesizer;
    NSMutableArray *_speechSequenceItems;
    NSString *_lastUtteranceLanguageCode;
    AVSpeechUtterance *_lastUtterance;
    AXLanguageTag *_lastUtteranceLanguageTag;
    NSString *_currentLanguageCode;
    NSMutableArray *_additionalContentToProcess;
    struct _NSRange _lastSpokenSubstringRange;
    struct _NSRange _lastUtteranceSubstringRange;
}

@property (retain, nonatomic) NSString *voiceIdentifier;
@property (retain, nonatomic) AXLanguageTaggedContent *selectedContent;
@property (retain, nonatomic) AXLanguageTaggedContent *speakingContent;
@property (retain, nonatomic) NSArray *speakingContentTokenRanges;
@property (nonatomic) unsigned long long numberOfTokensToSkip;
@property (retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer;
@property (retain, nonatomic) NSMutableArray *speechSequenceItems;
@property (retain, nonatomic) NSString *lastUtteranceLanguageCode;
@property (nonatomic) struct _NSRange lastUtteranceSubstringRange;
@property (nonatomic) struct _NSRange lastSpokenSubstringRange;
@property (retain, nonatomic) AVSpeechUtterance *lastUtterance;
@property (retain, nonatomic) AXLanguageTag *lastUtteranceLanguageTag;
@property (nonatomic) _Bool shouldSpeakNextItemOnResume;
@property (retain, nonatomic) NSString *currentLanguageCode;
@property (nonatomic) _Bool preferredLanguageWasSpecified;
@property (nonatomic) _Bool isProcessingContentForSpeech;
@property (retain, nonatomic) NSMutableArray *additionalContentToProcess;
@property (weak, nonatomic) id <AXOratorDelegate> delegate;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long speakingContext;
@property (nonatomic) _Bool spellOutContent;
@property (nonatomic) double audioSessionInactiveTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isPaused;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;
- (float)speechRate;
- (void)_respeakUtteranceIfNeeded;
- (_Bool)_canSpeakTaggedContent:(id)arg1;
- (_Bool)startSpeakingWithPreferredLanguage:(id)arg1 delayBeforeStart:(double)arg2 error:(id *)arg3;
- (void)_updateAudioSessionCategory;
- (void)_startSpeakingSequence;
- (_Bool)isSpeaking;
- (_Bool)_successWithCode:(long long)arg1 error:(id *)arg2;
- (void)_clearAllContentState;
- (_Bool)resumeSpeakingAfterDelay:(double)arg1 error:(id *)arg2;
- (void)_speakNextItemInSequence;
- (_Bool)_useLanguageSpecificSpeakingRate;
- (_Bool)_changeSpeakingSpeed:(double)arg1 usingLanugageSpecificRate:(_Bool)arg2;
- (double)currentSpeechRateForAdjustment;
- (_Bool)_skipByUnit:(_Bool)arg1 boundary:(unsigned long long)arg2;
- (void)_updateSequenceForSpellOutBehavior;
- (void)_processAdditionalContentInPreparationForSpeech;
- (id)_getLangCodeForItem:(id)arg1;
- (id)_speechSequenceItemsStartingAtContentLocation:(unsigned long long)arg1;
- (void)_tokenizeContentIfNeeded;
- (long long)_currentTokenIndex:(_Bool)arg1;
- (void)_speakNextTokenFromCurrentTokenIndex:(long long)arg1 forward:(_Bool)arg2 boundary:(unsigned long long)arg3;
- (void)addAdditionalContentToSpeechQueue:(id)arg1;
- (_Bool)startSpeakingWithPreferredLanguage:(id)arg1 error:(id *)arg2;
- (_Bool)pauseSpeaking:(id *)arg1;
- (_Bool)stopSpeaking:(id *)arg1;
- (_Bool)resumeSpeaking:(id *)arg1;
- (_Bool)setSpeakingRate:(double)arg1;
- (_Bool)speakFaster;
- (_Bool)speakSlower;
- (_Bool)fastForwardWithBoundary:(unsigned long long)arg1;
- (_Bool)rewindWithBoundary:(unsigned long long)arg1;
- (void)speakStatusWithLanguage:(id)arg1 rate:(id)arg2;
- (_Bool)contentIsSpeakable;
- (_Bool)canResumeWithContent:(id)arg1;
- (void)clearSelectedContent;

@end
