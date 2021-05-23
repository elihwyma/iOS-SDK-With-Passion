/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSSpIdContext, CSSpeakerIdNviSignalReceiver, NviSignalProvidersController;

@protocol OS_dispatch_queue;

@interface CSSpeakerIdNviOrchestrator : NSObject

{
    NviSignalProvidersController *_signalControllerNvi;
    CSSpeakerIdNviSignalReceiver *_resultRxNvi;
    NSObject<OS_dispatch_queue> *_nviQueue;
    CSSpIdContext *_spIdCtx;
}

@property (retain, nonatomic) NviSignalProvidersController *signalControllerNvi;
@property (retain, nonatomic) CSSpeakerIdNviSignalReceiver *resultRxNvi;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nviQueue;
@property (retain, nonatomic) CSSpIdContext *spIdCtx;

- (void)start;
- (void)end;
- (void)_startSpIdNviSignalProcessing;
- (void)_endSpIdNviSignalProcessing;
- (void)_uploadDirectionVectorToAFAnalyticsOnQueue;
- (id)initWithSpeakerIdContext:(id)arg1;
- (void)uploadDirectionVectorToAFAnalytics;

@end
