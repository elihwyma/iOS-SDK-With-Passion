/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class AFSpeechAudioAnalytics, AFSpeechRecognition;

@interface AFSpeechPackage : NSObject <Swift>

{
    _Bool _isFinal;
    AFSpeechRecognition *_recognition;
    AFSpeechRecognition *_rawRecognition;
    AFSpeechAudioAnalytics *_audioAnalytics;
}

@property (nonatomic, readonly) AFSpeechRecognition *recognition;
@property (nonatomic, readonly) AFSpeechRecognition *rawRecognition;
@property (nonatomic, readonly) AFSpeechAudioAnalytics *audioAnalytics;
@property (nonatomic, readonly) _Bool isFinal;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecognition:(id)arg1 rawRecognition:(id)arg2 audioAnalytics:(id)arg3 isFinal:(_Bool)arg4;

@end
