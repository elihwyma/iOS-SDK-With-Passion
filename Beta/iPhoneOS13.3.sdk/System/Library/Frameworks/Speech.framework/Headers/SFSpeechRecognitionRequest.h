/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, _SFSearchRequest;

@interface SFSpeechRecognitionRequest : NSObject

{
    _Bool _forceOfflineRecognition;
    _Bool _shouldReportPartialResults;
    _Bool _detectMultipleUtterances;
    double _maxiumRecognitionDuration;
    _SFSearchRequest *_searchRequest;
    NSDictionary *_voiceTriggerEventInfo;
    NSDictionary *_recognitionOverrides;
    NSURL *_modelOverrideURL;
    long long _taskHint;
    NSArray *_contextualStrings;
    NSString *_interactionIdentifier;
}

@property (retain, nonatomic, getter=_searchRequest, setter=_setSearchRequest:) _SFSearchRequest *_searchRequest;
@property (nonatomic) _Bool detectMultipleUtterances;
@property (nonatomic, getter=_forceOfflineRecognition, setter=_setForceOfflineRecognition:) _Bool _forceOfflineRecognition;
@property (retain, nonatomic, getter=_voiceTriggerEventInfo, setter=_setVoiceTriggerEventInfo:) NSDictionary *_voiceTriggerEventInfo;
@property (nonatomic, getter=_maximumRecognitionDuration, setter=_setMaximumRecognitionDuration:) double _maxiumRecognitionDuration;
@property (retain, nonatomic, getter=_recognitionOverrides, setter=_setRecognitionOverrides:) NSDictionary *_recognitionOverrides;
@property (retain, nonatomic, getter=_modelOverrideURL, setter=_setModelOverrideURL:) NSURL *_modelOverrideURL;
@property (nonatomic) long long taskHint;
@property (nonatomic) _Bool shouldReportPartialResults;
@property (copy, nonatomic) NSArray *contextualStrings;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (nonatomic) _Bool requiresOnDeviceRecognition;

- (id)init;
- (id)_speechRequestOptions;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;
- (_Bool)automaticallyEndpoint;
- (void)_setSearchRequests:(id)arg1;
- (id)_searchRequests;
- (_Bool)_powerMeteringAvailable;
- (id)_dictationOptionsWithTaskHint:(long long)arg1 requestIdentifier:(id)arg2;

@end
