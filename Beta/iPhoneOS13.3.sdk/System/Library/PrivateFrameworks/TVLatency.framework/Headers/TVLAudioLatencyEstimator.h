/*
 Image: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
 */

#import <Foundation/NSObject.h>

@class CUMessageSession, TVLListenEngine, TVLTimeSync;

@interface TVLAudioLatencyEstimator : NSObject

{
    unsigned long long _role;
    CDUnknownBlockType _progressEventHandler;
    CDUnknownBlockType _completion;
    CUMessageSession *_session;
    TVLTimeSync *_timeSync;
    TVLListenEngine *_listenEngine;
    CDUnknownBlockType _internalProgressEventHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) CUMessageSession *session;
@property (retain, nonatomic) TVLTimeSync *timeSync;
@property (retain, nonatomic) TVLListenEngine *listenEngine;
@property (copy, nonatomic) CDUnknownBlockType internalProgressEventHandler;
@property (nonatomic, readonly) unsigned long long role;
@property (copy, nonatomic) CDUnknownBlockType progressEventHandler;

- (void)invalidate;
- (void)estimate;
- (void)_tearDown;
- (void)activate;
- (void)_invalidateWithError:(id)arg1;
- (id)initWithMessageSession:(id)arg1;
- (void)_initWithMessageSession:(id)arg1;
- (void)_synchronizeClocksWithOptions:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_estimateAudioLatencyWithOptions:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_respondAndInvalidateWithError:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)estimateAudioLatencyWithToneIdentifier:(id)arg1;
- (void)_postProgressEvent:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)_sendMessage:(id)arg1 withResponse:(CDUnknownBlockType)arg2;
- (void)_postInternalProgressEvent:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)setAudioLatencyEstimationCompletionHandler:(CDUnknownBlockType)arg1;

@end
