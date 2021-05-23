/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class MSDiagnosticManager, NSDictionary, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface MSMessageLoadingAnalyticController : NSObject

{
    NSMutableDictionary *_messageLoadTimes;
    MSDiagnosticManager *_diagnosticManager;
    NSObject<OS_dispatch_queue> *_serialMessageLoadingTimerQueue;
    unsigned long long _maxLoadingTimeSeconds;
    CDUnknownBlockType _startedRecordingHandler;
    CDUnknownBlockType _endedRecordingHandler;
}

@property (retain, nonatomic) MSDiagnosticManager *diagnosticManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialMessageLoadingTimerQueue;
@property (nonatomic) unsigned long long maxLoadingTimeSeconds;
@property (copy, nonatomic, readonly) NSDictionary *messageLoadTimes;
@property (copy, nonatomic) CDUnknownBlockType startedRecordingHandler;
@property (copy, nonatomic) CDUnknownBlockType endedRecordingHandler;

- (void)_commonInitWithDiagnosticManager:(id)arg1 maxLoadingTimeSeconds:(unsigned long long)arg2;
- (void)_startTimeoutForMessage:(id)arg1;
- (void)_endRecordingForMessage:(id)arg1;
- (id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)arg1;
- (void)_calculateAndSubmitTimeForLoadingInfo:(id)arg1;
- (id)initWithDiagnosticManager:(id)arg1;
- (id)initWithDiagnosticManager:(id)arg1 maxLoadingTimeSeconds:(unsigned long long)arg2;
- (void)startRecordingForMessage:(id)arg1;
- (void)endRecordingForMessage:(id)arg1;
- (void)endAllRecording;

@end
