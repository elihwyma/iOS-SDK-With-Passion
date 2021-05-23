/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACSpeechRecognizer, NSArray, NSDictionary, NSString;

@interface CACCommandRecognizer : NSObject

{
    NSString *_type;
    id _owner;
    unsigned int _flags;
    CACSpeechRecognizer *_speechRecognizer;
    NSArray *_spokenCommandsCache;
    NSDictionary *_contextEvaluators;
    NSArray *_builtInLMIdentifiers;
}

@property (retain) NSString *type;
@property (retain) id owner;
@property (readonly) CACSpeechRecognizer *speechRecognizer;
@property (readonly) NSArray *spokenCommands;

+ (void)resetCloseMatchAccumulator;
+ (void)_accumulateCloseMatchUsingCommandIdentifier:(id)arg1 substitutionTable:(id)arg2;
+ (void)_showHintWithAccumulateCloseMatches;

- (void)startListening;
- (void)stopListening;
- (_Bool)isListening;
- (void)handleSpokenCommand:(id)arg1;
- (id)initWithCommands:(id)arg1 contextEvaluators:(id)arg2 builtInLMIdentifiers:(id)arg3;
- (void)synchronizeWithReason:(id)arg1;
- (void)speechRecognizer:(id)arg1 didRecognizeRXResult:(struct __RXLanguageObject *)arg2;
- (void)_synchronizeSpeechRecognizerSettings;
- (void)_buildLanguageModelUsingCommands;
- (_Bool)isAppropriateForContext;
- (id)commandParametersFromCACLanguageModel:(id)arg1;
- (id)_commandParametersFromCACLanguageModel:(id)arg1;
- (id)commandTextSequenceFromCACLanguageModel:(id)arg1;
- (void)speechRecognizer:(id)arg1 didBeginUtteranceWithID:(unsigned long long)arg2;
- (id)commandStrings;
- (id)objectForContextEvaluatorKey:(id)arg1;

@end
