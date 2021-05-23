/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

#import <TextInputCore/Swift-Protocol.h>

@class NSDate, NSString, TIProactiveTrigger;

@protocol OS_dispatch_queue, _ICPredictionManaging;

@interface TIProactiveQuickTypeManager : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_queue;
    id <_ICPredictionManaging> _inputContextManager;
    TIProactiveTrigger *_lastTriggerForSuggestion;
    NSDate *_lastSuggestionTime;
    NSString *_maxLengthProactiveCandidate;
    unsigned long long _textBeforeLength;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)singletonInstance;
+ (id)buildSecureCandidateFrom:(id)arg1 withSecureCandidateRenderer:(id)arg2 input:(id)arg3;
+ (id)sharedTIProactiveQuickTypeManager;
+ (id)proactiveTriggerForTextContentType:(id)arg1;
+ (void)setSharedTIProactiveQuickTypeManager:(id)arg1;
+ (id)buildSecureCandidateForTestFrom:(id)arg1 withSecureCandidateRenderer:(id)arg2 input:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)reset;
- (_Bool)isEnabled;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 withTextContentType:(id)arg9 withAvailableApps:(id)arg10 logBlock:(CDUnknownBlockType)arg11 async:(_Bool)arg12 completion:(CDUnknownBlockType)arg13;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 withTextContentType:(id)arg9 withAvailableApps:(id)arg10 logBlock:(CDUnknownBlockType)arg11;
- (void)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4 async:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4;
- (_Bool)isAutoPopupEnabled;
- (_Bool)isAutoCompleteEnabled;
- (void)userActionWithNoNewTriggers:(id)arg1 fieldType:(id)arg2;
- (void)suggestionAccepted:(id)arg1 fieldType:(id)arg2;
- (void)suggestionNotAccepted:(id)arg1;
- (id)getMeCardEmailAddresses;
- (id)_makeQueue;
- (id)renderItems:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5;
- (void)addToTypologyTrace:(CDUnknownBlockType)arg1 withTriggerSource:(id)arg2 withTriggerType:(id)arg3 withTriggerSubType:(id)arg4 withPredictionResults:(id)arg5 withFirstTrigger:(id)arg6;
- (void)loggingProactiveEngagementMetric:(unsigned long long)arg1 withLocale:(id)arg2 fieldType:(id)arg3;
- (unsigned long long)matchProactiveCandidateToUserInput:(id)arg1 userInput:(id)arg2;
- (id)initWithICManager:(id)arg1;
- (id)getLastSuggestionTime;

@end
