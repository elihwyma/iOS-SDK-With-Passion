/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, VSPresynthesizedAudioRequest, VSSpeechConnection, VSSpeechRequest;

@protocol VSSpeechConnectionDelegate;

__attribute__((visibility("hidden")))
@interface VSSpeechConnectionDelegateWrapper : NSObject

{
    id <VSSpeechConnectionDelegate> _delegate;
    VSSpeechRequest *_request;
    NSMutableDictionary *_concurrentSynthesisRequests;
    VSPresynthesizedAudioRequest *_presynthesizedAudioRequest;
    VSSpeechConnection *_connection;
}

@property (weak, nonatomic) id <VSSpeechConnectionDelegate> delegate;
@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) NSMutableDictionary *concurrentSynthesisRequests;
@property (retain, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
@property (weak, nonatomic) VSSpeechConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (oneway void)speechRequestDidStart;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1;
- (oneway void)speechRequestDidReceiveTimingInfo:(id)arg1;
- (oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;
- (oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3;
- (oneway void)presynthesizedAudioRequestDidStart;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(_Bool)arg1 error:(id)arg2;
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2;

@end
