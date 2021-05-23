/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSTextToSpeechResource.h>

@class NSString;

@interface OPTTSMutableTextToSpeechResource : OPTTSTextToSpeechResource

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *version;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
