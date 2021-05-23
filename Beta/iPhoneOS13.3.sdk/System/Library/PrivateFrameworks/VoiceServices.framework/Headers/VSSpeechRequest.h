/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSDictionary, NSString, NSURL;

@interface VSSpeechRequest : NSObject

{
    _Bool _shouldCache;
    _Bool _disableCompactVoiceFallback;
    _Bool _forceServerTTS;
    _Bool _canUseServerTTS;
    _Bool _retryDeviceOnNetworkStall;
    _Bool _useCustomVoice;
    _Bool _audioSessionIDIsValid;
    _Bool _maintainsInput;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSString *_text;
    NSString *_languageCode;
    long long _footprint;
    long long _voiceType;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;
    NSDictionary *_contextInfo;
    NSURL *_resourceListURL;
    NSURL *_resourceSearchPathURL;
    NSAttributedString *_attributedText;
    NSString *_utterance;
    NSString *_clientBundleIdentifier;
    unsigned long long _requestCreatedTimestamp;
    CDUnknownBlockType _stopHandler;
    CDUnknownBlockType _pauseHandler;
    long long _pointer;
    NSString *_voiceName;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) _Bool useCustomVoice;
@property (nonatomic) _Bool audioSessionIDIsValid;
@property (nonatomic) _Bool maintainsInput;
@property (nonatomic) unsigned int audioQueueFlags;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic) unsigned long long requestCreatedTimestamp;
@property (copy, nonatomic) CDUnknownBlockType stopHandler;
@property (copy, nonatomic) CDUnknownBlockType pauseHandler;
@property (nonatomic) long long pointer;
@property (copy, nonatomic) NSString *voiceName;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) long long footprint;
@property (nonatomic) long long voiceType;
@property (nonatomic) long long gender;
@property (copy, nonatomic) NSURL *outputPath;
@property (nonatomic) _Bool shouldCache;
@property (nonatomic) double rate;
@property (nonatomic) double pitch;
@property (nonatomic) double volume;
@property (copy, nonatomic) NSDictionary *contextInfo;
@property (nonatomic) _Bool disableCompactVoiceFallback;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) _Bool forceServerTTS;
@property (nonatomic) _Bool canUseServerTTS;
@property (nonatomic) _Bool retryDeviceOnNetworkStall;
@property (copy, nonatomic) NSURL *resourceListURL;
@property (copy, nonatomic) NSURL *resourceSearchPathURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isSimilarTo:(id)arg1;
- (_Bool)canLogRequestText;
- (id)contextInfoString;

@end
