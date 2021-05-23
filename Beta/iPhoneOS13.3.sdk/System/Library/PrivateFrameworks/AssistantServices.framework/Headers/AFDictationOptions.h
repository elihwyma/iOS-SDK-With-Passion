/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFLanguageDetectionUserContext, NSArray, NSDictionary, NSString, NSURL, STSiriContext;

@interface AFDictationOptions : NSObject <Swift>

{
    _Bool _forceOfflineRecognition;
    _Bool _detectUtterances;
    _Bool _secureOfflineOnly;
    _Bool _farField;
    _Bool _releaseAudioSessionOnRecordingCompletion;
    _Bool _incremental;
    NSString *_applicationName;
    NSString *_applicationVersion;
    STSiriContext *_context;
    NSString *_fieldLabel;
    NSString *_fieldIdentifier;
    NSString *_interactionIdentifier;
    NSString *_requestIdentifier;
    long long _keyboardType;
    NSString *_prefixText;
    NSString *_postfixText;
    NSString *_selectedText;
    long long _returnKeyType;
    long long _transcriptionMode;
    NSArray *_inlineItemList;
    NSString *_microphoneIdentifier;
    NSString *_orthography;
    NSString *_keyboardIdentifier;
    NSString *_languageCodeOverride;
    NSString *_offlineLanguage;
    long long _voiceSearchTypeOptions;
    NSDictionary *_voiceSearchHeaderFields;
    NSDictionary *_voiceSearchQueryParameters;
    NSDictionary *_voiceTriggerEventInfo;
    double _maximumRecognitionDuration;
    long long _taskHint;
    NSURL *_originalAudioFileURL;
    NSDictionary *_recognitionOverrides;
    NSURL *_modelOverrideURL;
    AFLanguageDetectionUserContext *_languageDetectionUserContext;
    long long _dictationInputOrigin;
}

@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationVersion;
@property (retain, nonatomic) STSiriContext *context;
@property (copy, nonatomic) NSString *fieldLabel;
@property (copy, nonatomic) NSString *fieldIdentifier;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *postfixText;
@property (copy, nonatomic) NSString *selectedText;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long transcriptionMode;
@property (copy, nonatomic) NSArray *inlineItemList;
@property (copy, nonatomic) NSString *microphoneIdentifier;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSString *keyboardIdentifier;
@property (copy, nonatomic) NSString *languageCodeOverride;
@property (copy, nonatomic) NSString *offlineLanguage;
@property (nonatomic) long long voiceSearchTypeOptions;
@property (copy, nonatomic) NSDictionary *voiceSearchHeaderFields;
@property (copy, nonatomic) NSDictionary *voiceSearchQueryParameters;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (nonatomic) _Bool forceOfflineRecognition;
@property (nonatomic) _Bool detectUtterances;
@property (nonatomic) _Bool secureOfflineOnly;
@property (nonatomic) _Bool farField;
@property (nonatomic) _Bool releaseAudioSessionOnRecordingCompletion;
@property (nonatomic) _Bool incremental;
@property (nonatomic) double maximumRecognitionDuration;
@property (nonatomic) long long taskHint;
@property (copy, nonatomic) NSURL *originalAudioFileURL;
@property (copy, nonatomic) NSDictionary *recognitionOverrides;
@property (copy, nonatomic) NSURL *modelOverrideURL;
@property (copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext;
@property (nonatomic) long long dictationInputOrigin;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictationOptionsWithoutTextContext;

@end
