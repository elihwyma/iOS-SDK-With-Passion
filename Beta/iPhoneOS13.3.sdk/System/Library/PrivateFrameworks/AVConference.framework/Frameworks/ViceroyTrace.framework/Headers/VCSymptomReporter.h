/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

@class NSString, SDRDiagnosticReporter;

@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface VCSymptomReporter : NSObject

{
    unsigned int _callID;
    NSString *_loggingDirectory;
    SDRDiagnosticReporter *_diagnosticReporter;
    NSObject<OS_os_log> *_osLogNetworkingHandle;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    CDUnknownFunctionPointerType _symptomReporterCallback;
    id _symptomReporterContext;
}

@property (copy, nonatomic) NSString *loggingDirectory;

- (void)dealloc;
- (id)initWithCallID:(unsigned int)arg1;
- (void)reportSymptomInternal:(unsigned int)arg1 optionalDictionary:(id)arg2;
- (int)reportRateTargetMismatch;
- (int)reportBandwidthEstimationMismatch;
- (int)reportNoMediaBlob;
- (int)reportSignalingFailed;
- (int)reportConnectionTimeout;
- (int)reportNoRelayResponseWithOptionalDictionary:(id)arg1;
- (int)reportNoSNATMAPResponseWithOptionalDictionary:(id)arg1;
- (int)reportFailedToStartAudio;
- (int)reportFailedToStartVideo;
- (int)reportNoFirstFrameWithOptionalDictionary:(id)arg1;
- (int)reportNoPacketsWithOptionalDictionary:(id)arg1;
- (int)reportAudioStall;
- (int)reportVideoStall;
- (int)reportAudioErasures;
- (int)reportNegativeJitterBufferSize;
- (int)reportAUIOTimestampJumped;
- (int)reportIDSDataChannelEventUsageError;
- (int)reportQRATKNTokenError;
- (int)reportReceiveSessionStatsFailed;
- (int)reportCCReliableDataNotReceived;
- (int)reportSessionInfoErrorResponse;
- (int)reportKeyIndexNotReceived;
- (int)reportMediaQueuePoolEmpty;
- (int)reportTargetBitrateOvershoot;
- (int)reportUnexpectedLowTargetBitrate;
- (int)reportKeyFrameNotSpreading;
- (int)reportMediaQueueOvershoot;
- (int)reportMediaQueueFlushingTooFrequent;
- (int)reportHighConsecutiveAudioErasures;
- (int)reportHighTargetQueueSize;
- (int)reportUnexpectedHighRTT;
- (int)reportInvalidTransportType;
- (int)reportInactiveSlotsInChannelSequence;
- (int)reportSymptomWithType:(id)arg1 subType:(id)arg2 context:(id)arg3 actions:(id)arg4;
- (id)symptomNameWithDomain:(id)arg1 subtypeContext:(id)arg2;
- (int)reportSymptomWithDictionary:(id)arg1;
- (int)reportSymptomWithOptions:(id)arg1 type:(id)arg2 subType:(id)arg3 context:(id)arg4;
- (void)reportSymptom:(unsigned int)arg1 optionalDictionary:(id)arg2;
- (void)VCSymptomReporterSetCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (int)reportSymptomWithIDSDestination:(id)arg1 sessionID:(id)arg2 type:(id)arg3 subType:(id)arg4 context:(id)arg5;

@end
