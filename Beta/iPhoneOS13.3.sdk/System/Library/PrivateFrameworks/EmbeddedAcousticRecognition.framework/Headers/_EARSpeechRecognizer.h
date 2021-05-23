/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, _EARFormatter, _EARSpeechModelInfo, _EARSpeechRecognitionAudioBuffer;

@protocol OS_dispatch_queue;

@interface _EARSpeechRecognizer : NSObject

{
    NSObject<OS_dispatch_queue> *_formatterQueue;
    _EARFormatter *_formatter;
    struct unique_ptr<quasar::SpeechRecognizer, std::__1::default_delete<quasar::SpeechRecognizer>> _recognizer;
    struct unique_ptr<quasar::TextTokenizer, std::__1::default_delete<quasar::TextTokenizer>> _tokenizer;
    _EARSpeechRecognitionAudioBuffer *_currentAudioBuffer;
    struct weak_ptr<ResultStreamWrapper> _currentResultStreamWrapper;
    NSString *_currentLanguage;
    NSString *_currentTask;
    unsigned long long _currentSamplingRate;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    NSString *_configPath;
    _Bool _detectUtterances;
    _Bool _concatenateUtterances;
    _Bool _recognizeEagerCandidates;
    _Bool _farField;
    _Bool _highPriority;
    NSData *_userProfileData;
    NSData *_jitProfileData;
    double _endpointStart;
    double _maximumRecognitionDuration;
    NSDictionary *_recognitionReplacements;
    NSDictionary *_recognitionConfidenceSubtraction;
    NSArray *_leftContext;
    NSString *_inputOrigin;
    NSString *_deviceId;
    NSString *_refTranscriptForErrorBlaming;
    NSString *_bluetoothDeviceId;
    NSString *_userId;
    NSString *_sessionId;
}

@property (copy, nonatomic) NSData *userProfileData;
@property (copy, nonatomic) NSData *jitProfileData;
@property (nonatomic, readonly) _EARSpeechModelInfo *modelInfo;
@property (nonatomic) _Bool detectUtterances;
@property (nonatomic) _Bool concatenateUtterances;
@property (nonatomic) double endpointStart;
@property (nonatomic) _Bool recognizeEagerCandidates;
@property (nonatomic) _Bool farField;
@property (nonatomic) _Bool highPriority;
@property (nonatomic) double maximumRecognitionDuration;
@property (copy, nonatomic) NSDictionary *recognitionReplacements;
@property (copy, nonatomic) NSDictionary *recognitionConfidenceSubtraction;
@property (copy, nonatomic) NSArray *leftContext;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *refTranscriptForErrorBlaming;
@property (copy, nonatomic) NSString *bluetoothDeviceId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *sessionId;

+ (void)initialize;
+ (id)minimumSupportedConfigurationVersion;
+ (id)maximumSupportedConfigurationVersion;
+ (id)rawTokenResultsFromRecognitionResults:(id)arg1;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1;
- (struct TextTokenizer *)_tokenizer;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6;
- (void)_restartActiveRecognition;
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4;
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4 userProfileData:(id)arg5;
- (shared_ptr_809f9c31)_audioBufferWithLangauge:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 userProfileData:(id)arg4 resultStream:(shared_ptr_5cb47a18)arg5;
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2;
- (id)initWithConfiguration:(id)arg1 overrideConfigFiles:(id)arg2;
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiConfig:(id)arg3;
- (id)initWithConfiguration:(id)arg1 withGeneralVoc:(id)arg2 withLexiconEnh:(id)arg3 withItnEnh:(id)arg4;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5;
- (id)initWithConfiguration:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5;
- (id)initWithConfiguration:(id)arg1 useQuasarFormatter:(_Bool)arg2;
- (void)setLeftContextText:(id)arg1;
- (id)runRecognitionWithResultStream:(id)arg1;
- (void)updateUserProfileData:(id)arg1;
- (void)updateJitProfileData:(id)arg1;
- (shared_ptr_9f04d411)requestParametersWithUserProfileData:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 resultStream:(shared_ptr_5cb47a18)arg4 extraLanguageModel:(id)arg5 symbolTableList:(const shared_ptr_ca83464d *)arg6;
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5 extraLanguageModel:(id)arg6;
- (void)cancelRecognition;
- (id)recognitionStatistics;
- (void)getFormatterWithBlock:(CDUnknownBlockType)arg1;
- (void)setAlternateRawRecognitionTokenSausage:(id)arg1;

@end
