/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HFSiriLanguageOption : NSObject <Swift>

{
    _Bool _defaultVoiceForRecognitionLanguage;
    NSString *_recognitionLanguage;
    NSString *_outputLanguage;
    long long _outputGender;
}

@property (copy, nonatomic, readonly) NSString *recognitionLanguage;
@property (copy, nonatomic, readonly) NSString *outputLanguage;
@property (nonatomic, readonly) long long outputGender;
@property (nonatomic, readonly, getter=isDefaultVoiceForRecognitionLanguage) _Bool defaultVoiceForRecognitionLanguage;
@property (copy, nonatomic, readonly) NSString *localizedRecognitionLanguage;
@property (copy, nonatomic, readonly) NSString *localizedOutputVoice;
@property (copy, nonatomic, readonly) NSString *localizedOutputVoiceAccent;
@property (copy, nonatomic, readonly) NSString *localizedOutputVoiceGender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)outputVoice;
- (id)initWithRecognitionLanguage:(id)arg1 outputLanguage:(id)arg2 outputGender:(long long)arg3 defaultVoiceForRecognitionLanguage:(_Bool)arg4;
- (id)initWithRecognitionLanguage:(id)arg1 outputVoice:(id)arg2 defaultVoiceForRecognitionLanguage:(_Bool)arg3;

@end
