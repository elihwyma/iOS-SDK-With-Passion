/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class SFService, SFSession, TVLAudioLatencyEstimator;

@protocol OS_dispatch_queue;

@interface SFDeviceSetupTVLatencyService : NSObject

{
    _Bool _eventFinalDelivered;
    _Bool _finished;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    SFService *_sfService;
    SFSession *_sfSession;
    TVLAudioLatencyEstimator *_tvLatencyEstimator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)activate;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleTVLatencyProgressEvent:(unsigned long long)arg1 info:(id)arg2;
- (void)_handleTVLatencyRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_reportProgress:(unsigned int)arg1 info:(id)arg2;
- (void)sendSetupAction:(unsigned int)arg1 info:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end
