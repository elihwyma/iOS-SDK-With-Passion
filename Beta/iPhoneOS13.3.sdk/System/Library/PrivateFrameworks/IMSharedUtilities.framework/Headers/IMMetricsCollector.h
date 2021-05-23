/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SDRDiagnosticReporter;

@protocol OS_dispatch_queue;

@interface IMMetricsCollector : NSObject

{
    NSObject<OS_dispatch_queue> *_metricsQueue;
    SDRDiagnosticReporter *_diagnosticReporter;
    NSMutableDictionary *_onGoingEventsMap;
}

@property (retain, nonatomic) NSMutableDictionary *onGoingEventsMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)updateEvent:(id)arg1 updateValue:(id)arg2 forKey:(id)arg3;
- (_Bool)trackEvent:(id)arg1;
- (_Bool)trackEvent:(id)arg1 withDictionary:(id)arg2;
- (_Bool)startEvent:(id)arg1 initialDictionary:(id)arg2 timeout:(unsigned long long)arg3 autoBugCapture:(_Bool)arg4;
- (_Bool)finalizeEvent:(id)arg1 addingDicitonary:(id)arg2;
- (void)clearInitialCKSyncState;
- (void)noteSyncError:(id)arg1;
- (void)noteCompletedInitialSync;
- (void)noteMeticsForSyncStartFrom:(id)arg1 fullSync:(_Bool)arg2;
- (void)noteMeticsForSyncEndedWithSuccces:(_Bool)arg1 duration:(id)arg2;
- (void)_trackEvent:(id)arg1;
- (void)_trackEvent:(id)arg1 withStatistic:(id)arg2;
- (id)_trimedEventID:(id)arg1;
- (void)autoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;
- (void)_trackEvent:(id)arg1 withCount:(id)arg2;
- (void)_trackEvent:(id)arg1 withDictionary:(id)arg2;
- (void)_timeoutTimerFired:(id)arg1;
- (void)_finalizeEvent:(id)arg1 addingDicitonary:(id)arg2;
- (void)_resetTimerEventIfNeedForEventID:(id)arg1;
- (void *)_ADClientAddValueForScalarKeyApiInit;
- (void *)_ADClientPushValueForDistributionKeyApiInit;
- (void *)_ADClientSetValueForScalarKeyApiInit;
- (_Bool)trackEvent:(id)arg1 withStatistic:(id)arg2;
- (_Bool)trackEvent:(id)arg1 withCount:(id)arg2;
- (_Bool)startEvent:(id)arg1 initialDictionary:(id)arg2;
- (_Bool)updateEvent:(id)arg1 addToCount:(id)arg2 forKey:(id)arg3;
- (void)forceAutoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;
- (void)metricAttachmentValidation:(_Bool)arg1 attachmentSize:(id)arg2 operationalErrorDomain:(id)arg3 operationalErrorCode:(id)arg4 validationErrorDomain:(id)arg5 validationErrorCode:(id)arg6;

@end
