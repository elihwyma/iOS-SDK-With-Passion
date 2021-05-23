/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFLanguageDetectionUserContext, AFMyriadContext, AFSpeechSynthesisRecord, CLLocation, NSDictionary, NSFileHandle, NSNumber, NSString, NSURL, NSUUID, NSXPCListenerEndpoint;

@interface AFSpeechRequestOptions : NSObject <Swift>

{
    _Bool _isEyesFree;
    _Bool _useAutomaticEndpointing;
    _Bool _useStreamingDictation;
    _Bool _isInitialBringUp;
    _Bool _acousticIdEnabled;
    _Bool _releaseAudioSessionOnRecordingCompletion;
    _Bool _usePrelisteningMode;
    _Bool _pendCallbacksUntilAfterContinuation;
    _Bool _useBorealisBuffer;
    _Bool _fetchSmartSiriVolume;
    _Bool _suppressStartAlert;
    _Bool _suppressStopAlert;
    _Bool _hasPlayedStartAlert;
    _Bool _isOnPhoneCall;
    long long _activationEvent;
    NSString *_activationDeviceIdentifier;
    NSString *_serverCommandId;
    long long _endpointerOperationMode;
    double _homeButtonDownEventTime;
    unsigned long long _homeButtonDownEventMachAbsoluteTime;
    double _activationEventTime;
    unsigned long long _activationEventMachAbsoluteTime;
    double _expectedActivationEventTime;
    NSNumber *_homeButtonUpFromBeep;
    long long _audioFileType;
    NSFileHandle *_audioFileHandle;
    NSDictionary *_voiceTriggerEventInfo;
    AFMyriadContext *_myriadContext;
    NSString *_recordDeviceIdentifier;
    NSXPCListenerEndpoint *_speechRecordingEventListeningEndpoint;
    NSNumber *_notifyState;
    NSURL *_audioFileURL;
    unsigned long long _bargeInOptions;
    AFSpeechSynthesisRecord *_speechSynthesisRecord;
    CLLocation *_location;
    NSString *_locationStatus;
    NSDictionary *_clientAnalyticsContext;
    NSDictionary *_startContext;
    NSDictionary *_stopContext;
    AFLanguageDetectionUserContext *_languageDetectionUserContext;
    long long _dictationInputOrigin;
    struct NSUUID *_turnIdentifier;
}

@property (nonatomic) long long activationEvent;
@property (copy, nonatomic) NSString *activationDeviceIdentifier;
@property (nonatomic) _Bool isEyesFree;
@property (copy, nonatomic) NSString *serverCommandId;
@property (nonatomic) _Bool useAutomaticEndpointing;
@property (nonatomic) long long endpointerOperationMode;
@property (nonatomic) _Bool useStreamingDictation;
@property (nonatomic) double homeButtonDownEventTime;
@property (nonatomic) unsigned long long homeButtonDownEventMachAbsoluteTime;
@property (nonatomic) double activationEventTime;
@property (nonatomic) unsigned long long activationEventMachAbsoluteTime;
@property (nonatomic) double expectedActivationEventTime;
@property (nonatomic) _Bool isInitialBringUp;
@property (copy, nonatomic) NSNumber *homeButtonUpFromBeep;
@property (nonatomic) _Bool acousticIdEnabled;
@property (nonatomic) long long audioFileType;
@property (retain, nonatomic) NSFileHandle *audioFileHandle;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (copy, nonatomic) AFMyriadContext *myriadContext;
@property (nonatomic) _Bool releaseAudioSessionOnRecordingCompletion;
@property (copy, nonatomic) NSString *recordDeviceIdentifier;
@property (retain, nonatomic) NSXPCListenerEndpoint *speechRecordingEventListeningEndpoint;
@property (nonatomic) _Bool usePrelisteningMode;
@property (nonatomic) _Bool pendCallbacksUntilAfterContinuation;
@property (nonatomic) _Bool useBorealisBuffer;
@property (nonatomic) _Bool fetchSmartSiriVolume;
@property (copy, nonatomic) NSNumber *notifyState;
@property (copy, nonatomic) NSURL *audioFileURL;
@property (nonatomic) _Bool suppressStartAlert;
@property (nonatomic) _Bool suppressStopAlert;
@property (nonatomic) _Bool hasPlayedStartAlert;
@property (nonatomic) unsigned long long bargeInOptions;
@property (copy, nonatomic) AFSpeechSynthesisRecord *speechSynthesisRecord;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *locationStatus;
@property (copy, nonatomic) NSString *btDeviceAddress;
@property (copy, nonatomic) NSDictionary *clientAnalyticsContext;
@property (copy, nonatomic) NSDictionary *startContext;
@property (copy, nonatomic) NSDictionary *stopContext;
@property (nonatomic) _Bool isOnPhoneCall;
@property (copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext;
@property (nonatomic) long long dictationInputOrigin;
@property (copy, nonatomic) NSUUID *turnIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActivationEvent:(long long)arg1;
- (_Bool)isVoiceTrigger;
- (_Bool)isRaiseToSpeak;

@end
