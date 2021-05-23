/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUVoiceRequest, NSString, VSSpeechSynthesizer;

@protocol OS_dispatch_queue;

@interface CUVoiceSession : NSObject

{
    CUVoiceRequest *_currentRequest;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    unsigned int _invalidateFlags;
    struct NSMutableArray *_requests;
    VSSpeechSynthesizer *_speechSynthesizer;
    struct LogCategory *_ucat;
    struct NSMutableArray *_voiceRequests;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_speakText:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopSpeaking;
- (void)_processQueuedRequests;
- (void)_completeAllRequestsWithError:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError2:(id)arg4;

@end
