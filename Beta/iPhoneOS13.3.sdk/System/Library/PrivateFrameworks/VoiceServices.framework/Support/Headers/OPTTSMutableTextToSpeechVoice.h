/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSTextToSpeechVoice.h>

@class NSString;

@interface OPTTSMutableTextToSpeechVoice : OPTTSTextToSpeechVoice

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *quality;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
