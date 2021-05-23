/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/OPTTSTextToSpeechRouterStreamingStreamingRequest.h>

@class OPTTSStartTextToSpeechStreamingRequest;

@interface OPTTSMutableTextToSpeechRouterStreamingStreamingRequest : OPTTSTextToSpeechRouterStreamingStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) OPTTSStartTextToSpeechStreamingRequest *contentAsOPTTSStartTextToSpeechStreamingRequest;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
