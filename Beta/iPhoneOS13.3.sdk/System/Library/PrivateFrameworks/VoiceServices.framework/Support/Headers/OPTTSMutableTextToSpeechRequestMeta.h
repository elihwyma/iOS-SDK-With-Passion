/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSTextToSpeechRequestMeta.h>

@class NSString;

@interface OPTTSMutableTextToSpeechRequestMeta : OPTTSTextToSpeechRequestMeta

@property (nonatomic) long long channel_type;
@property (copy, nonatomic) NSString *app_id;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
