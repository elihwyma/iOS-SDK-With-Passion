/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class NSMutableDictionary, NSString;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction

{
    NSString *_repeatedSpokenFeedbackString;
    NSString *_sequenceTag;
    NSMutableDictionary *_knownValues;
    NSMutableDictionary *_knownPhoneticValues;
    NSMutableDictionary *_ambiguousValues;
    NSMutableDictionary *_ambiguousPhoneticValues;
    void *_context;
}

- (void)dealloc;
- (void)setKeywords:(id)arg1;
- (id)_keywords;
- (int)completionType;
- (_Bool)_keywordIndexChanged;
- (struct __VSRecognitionDisambiguationContext *)_disambiguationContext;
- (void)setRepeatedSpokenFeedbackString:(id)arg1;
- (id)repeatedSpokenFeedbackString;
- (id)sequenceTag;
- (void)setSequenceTag:(id)arg1;
- (id)knownValueForClassIdentifier:(id)arg1;
- (void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3;
- (id)knownValuesForClassIdentifier:(id)arg1;
- (void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)ambiguousValuesForClassIdentifier:(id)arg1;
- (void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(CDStruct_90f67059 *)arg1 info:(void *)arg2;
- (id)_actionForEmptyResults;

@end
