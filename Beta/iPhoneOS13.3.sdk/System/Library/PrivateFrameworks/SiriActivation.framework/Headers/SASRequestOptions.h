/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class AFBulletin, AFRequestInfo, AFSpeechRequestOptions, NSArray, NSDictionary, NSNumber, NSString, NSURL, SAGuidanceCheckForGuideUpdateContext, SASPronunciationContext;

@interface SASRequestOptions : NSObject

{
    long long _requestSource;
    _Bool _pronunciationRequest;
    _Bool _isForCarDND;
    _Bool _isConnectedToCarPlay;
    _Bool _initialBringUp;
    _Bool _useAutomaticEndpointing;
    _Bool _useStreamingDictation;
    _Bool _acousticIdEnabled;
    _Bool _releaseAudioSessionOnRecordingCompletion;
    _Bool _predictedRecordRouteIsZLL;
    NSString *_activationDeviceIdentifier;
    AFBulletin *_bulletin;
    NSString *_appBundleIdentifier;
    NSDictionary *_messagesDirectActionContext;
    SAGuidanceCheckForGuideUpdateContext *_checkForGuideUpdateContext;
    long long _directActionEvent;
    NSString *_serverCommandId;
    SASPronunciationContext *_pronunciationContext;
    NSString *_text;
    NSURL *_speechFileURL;
    double _expectedTimestamp;
    double _timestamp;
    double _buttonDownTimestamp;
    NSArray *_currentCarPlaySupportedOEMAppIdList;
    unsigned long long _carDNDStatus;
    NSNumber *_homeButtonUpFromBeep;
    NSDictionary *_continuityInfo;
    AFRequestInfo *_requestInfo;
    AFSpeechRequestOptions *_speechRequestOptions;
    NSString *_uiPresentationIdentifier;
    NSArray *_contextAppInfosForSiriViewController;
    NSDictionary *_testingContext;
    unsigned long long _currentLockState;
}

@property (nonatomic) long long requestSource;
@property (copy, nonatomic) NSString *activationDeviceIdentifier;
@property (retain, nonatomic) AFBulletin *bulletin;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSDictionary *messagesDirectActionContext;
@property (copy, nonatomic) SAGuidanceCheckForGuideUpdateContext *checkForGuideUpdateContext;
@property (nonatomic) long long directActionEvent;
@property (copy, nonatomic) NSString *serverCommandId;
@property (nonatomic, getter=isPronunciationRequest) _Bool pronunciationRequest;
@property (retain, nonatomic) SASPronunciationContext *pronunciationContext;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSURL *speechFileURL;
@property (nonatomic) double expectedTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) double buttonDownTimestamp;
@property (nonatomic, readonly, getter=isForStark) _Bool forStark;
@property (retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList;
@property (nonatomic, readonly, getter=isMessagesDirectAction) _Bool messagesDirectAction;
@property (nonatomic) _Bool isForCarDND;
@property (nonatomic) _Bool isConnectedToCarPlay;
@property (nonatomic) unsigned long long carDNDStatus;
@property (nonatomic, readonly, getter=isForSpeechRequest) _Bool forSpeechRequest;
@property (nonatomic, getter=isInitialBringUp) _Bool initialBringUp;
@property (nonatomic) _Bool useAutomaticEndpointing;
@property (nonatomic) _Bool useStreamingDictation;
@property (retain, nonatomic) NSNumber *homeButtonUpFromBeep;
@property (copy, nonatomic) NSDictionary *continuityInfo;
@property (retain, nonatomic) AFRequestInfo *requestInfo;
@property (retain, nonatomic) AFSpeechRequestOptions *speechRequestOptions;
@property (nonatomic) _Bool acousticIdEnabled;
@property (nonatomic) _Bool releaseAudioSessionOnRecordingCompletion;
@property (nonatomic) _Bool predictedRecordRouteIsZLL;
@property (retain, nonatomic) NSString *uiPresentationIdentifier;
@property (retain, nonatomic) NSArray *contextAppInfosForSiriViewController;
@property (retain, nonatomic) NSDictionary *testingContext;
@property (nonatomic) unsigned long long currentLockState;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestSource:(long long)arg1;
- (id)initWithRequestSource:(long long)arg1 uiPresentationIdentifier:(id)arg2;
- (_Bool)isHTTRequestSource;
- (void)_configureStreamingDictationForSource:(long long)arg1;
- (_Bool)isB288Activation;
- (_Bool)_isTypeToSiriPermittedAndEnabledForRequestOptions;

@end
