/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSTextToSpeechRouterStreamingStreamingResponse.h>

@class OPTTSBeginTextToSpeechStreamingResponse, OPTTSFinalTextToSpeechStreamingResponse, OPTTSPartialTextToSpeechStreamingResponse;

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingResponse : OPTTSTextToSpeechRouterStreamingStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) OPTTSBeginTextToSpeechStreamingResponse *contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property (copy, nonatomic) OPTTSPartialTextToSpeechStreamingResponse *contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property (copy, nonatomic) OPTTSFinalTextToSpeechStreamingResponse *contentAsOPTTSFinalTextToSpeechStreamingResponse;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
