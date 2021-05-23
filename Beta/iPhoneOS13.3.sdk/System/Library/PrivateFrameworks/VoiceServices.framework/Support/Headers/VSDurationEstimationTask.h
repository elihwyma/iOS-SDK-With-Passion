/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSOperation.h>

#import <voiced_tts/Swift-Protocol.h>

@class NSError, NSString, VSDeviceTTSCore, VSSpeechRequest;

@interface VSDurationEstimationTask : NSOperation <Swift>

{
    VSSpeechRequest *_request;
    NSError *_error;
    double _estimatedDuration;
    VSDeviceTTSCore *_deviceCore;
}

@property (retain, nonatomic) VSDeviceTTSCore *deviceCore;
@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) double estimatedDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)shortTermCachedEngines;
+ (id)shortTermCachedEngineForVoice:(id)arg1 voiceResource:(id)arg2;

- (id)delegate;
- (void)cancel;
- (void)resume;
- (void)main;
- (void)suspend;
- (id)initWithRequest:(id)arg1;
- (id)md5hash;

@end
