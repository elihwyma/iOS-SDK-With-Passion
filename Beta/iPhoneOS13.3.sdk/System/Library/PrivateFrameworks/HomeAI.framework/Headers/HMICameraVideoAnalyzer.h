/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, HMIAnalysisService, HMICameraVideoAnalyzerConfiguration, HMICameraVideoAnalyzerHistory, HMICameraVideoAnalyzerScheduler, NSArray, NSDate, NSMutableArray, NSObject, NSString, NSUUID;

@protocol HMICameraVideoAnalyzerDelegate, OS_dispatch_queue;

@interface HMICameraVideoAnalyzer : HMFObject

{
    int _flagCounts[7];
    int _outcomeCounts[3];
    _Bool _skipSequentialMediaIntegrityCheck;
    _Bool _analysisInProgress;
    _Bool _inErrorState;
    _Bool _inBypassMode;
    _Bool _sessionEnded;
    _Bool _uploadVideoAnalysisEvent;
    _Bool _saveVideoFramesToDisk;
    id <HMICameraVideoAnalyzerDelegate> _delegate;
    NSUUID *_identifier;
    HMFUnfairLock *_lock;
    NSMutableArray *_internalPendingRequests;
    NSDate *_lastRequestSubmissionTime;
    HMICameraVideoAnalyzerHistory *_history;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMICameraVideoAnalyzerScheduler *_scheduler;
    unsigned long long _mediaIntegritySequenceNumber;
    HMICameraVideoAnalyzerConfiguration *_configuration;
    HMIAnalysisService *_remoteAnalysisService;
}

@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (readonly) NSMutableArray *internalPendingRequests;
@property (retain) NSDate *lastRequestSubmissionTime;
@property (readonly) HMICameraVideoAnalyzerHistory *history;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMICameraVideoAnalyzerScheduler *scheduler;
@property unsigned long long mediaIntegritySequenceNumber;
@property (readonly) _Bool skipSequentialMediaIntegrityCheck;
@property _Bool analysisInProgress;
@property _Bool inErrorState;
@property _Bool inBypassMode;
@property (retain) HMICameraVideoAnalyzerConfiguration *configuration;
@property (retain, nonatomic) HMIAnalysisService *remoteAnalysisService;
@property _Bool sessionEnded;
@property (readonly, getter=shouldUploadVideoAnalysisEvent) _Bool uploadVideoAnalysisEvent;
@property (getter=shouldSaveVideoFramesToDisk) _Bool saveVideoFramesToDisk;
@property (readonly) NSArray *pendingRequests;
@property (readonly) _Bool isActive;
@property (weak) id <HMICameraVideoAnalyzerDelegate> delegate;
@property (copy, readonly) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;
+ (long long)confidenceThatEventOccurred:(long long)arg1 events:(long long)arg2 annotationScores:(id)arg3;
+ (id)queryVersionInformation;

- (id)logIdentifier;
- (id)initWithConfiguration:(id)arg1 identifier:(id)arg2;
- (void)analyzeFragment:(id)arg1;
- (void)clearPendingFragments;
- (void)processPendingRequests;
- (void)_markPendingRequestsWithFlag:(long long)arg1;
- (id)_outcomeCountsAsString;
- (id)_flagCountsAsString;
- (void)_scheduleRequest:(id)arg1;
- (void)_handleError:(long long)arg1 request:(id)arg2;
- (unsigned long long)pendingRequestsCount;
- (void)_handleError:(long long)arg1 request:(id)arg2 description:(id)arg3;
- (void)_handleDidNotAnalyzeRequest:(id)arg1 resultCode:(long long)arg2;
- (_Bool)_shouldContinueAnalyzingRequest:(id)arg1 resultCode:(long long *)arg2;
- (void)_analyzeRequest:(id)arg1;
- (_Bool)_checkRequest:(id)arg1;
- (void)_predictRequest:(id)arg1;
- (void)_analyzeRequestRemotely:(id)arg1 retryOnConnectionInterruption:(_Bool)arg2;
- (void)_analyzeRequestLocally:(id)arg1;
- (void)_handleError:(long long)arg1 request:(id)arg2 underlyingError:(id)arg3;
- (void)_handleDidAnalyzeRequest:(id)arg1 withResult:(id)arg2;
- (void)_handleDidNotAnalyzeRequest:(id)arg1 withResult:(id)arg2 error:(id)arg3;
- (void)_willAnalyzeRequest:(id)arg1;
- (void)_handleError:(long long)arg1 request:(id)arg2 description:(id)arg3 underlyingError:(id)arg4;
- (void)_analyzeRequestFramesLocally:(id)arg1;
- (void)_sendAnalyticsEventForRequest:(id)arg1 outcome:(long long)arg2 result:(id)arg3 error:(id)arg4;
- (void)_requestDidEnd:(id)arg1 outcome:(long long)arg2;
- (void)_notifyDidAnalyzeRequest:(id)arg1 withResult:(id)arg2;
- (void)_handleDidNotAnalyzeRequest:(id)arg1 resultCode:(long long)arg2 error:(id)arg3;
- (void)_notifyDidNotAnalyzeRequest:(id)arg1 withResult:(id)arg2;
- (void)_enterErrorState;
- (void)_notifyDidFailAnalysisForRequest:(id)arg1 withError:(id)arg2;
- (_Bool)_analyzeRequestFrames:(id)arg1;
- (void)_handleDidAnalyzeRequest:(id)arg1;
- (_Bool)_analyzeVideoFrame:(id)arg1 request:(id)arg2 result:(id *)arg3 error:(id *)arg4;
- (id)_analyzeFrame:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (_Bool)_saveVideoFrame:(id)arg1 videoFragment:(id)arg2 error:(id *)arg3;

@end
