/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@interface VSServerTTSClient : NSObject

+ (_Bool)shouldUseServerTTSForRequest:(id)arg1;

- (void)aceStartSynthesisRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryVoices:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)ospreyStartSynthesisRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ospreyStartStreamingRequest:(id)arg1 dataHandler:(CDUnknownBlockType)arg2 metaInfoHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)genderStringFromVSGender:(long long)arg1;

@end
