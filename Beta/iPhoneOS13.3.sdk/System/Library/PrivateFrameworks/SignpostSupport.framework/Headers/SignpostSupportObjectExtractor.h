/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class OSLogEventLiveStream, SignpostIntervalBuilder, SignpostSupportExactProcessNameFilter, SignpostSupportObjectFilter, SignpostSupportPIDFilter, SignpostSupportSubsystemCategoryFilter, SignpostSupportUniquePIDFilter;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SignpostSupportObjectExtractor : NSObject

{
    _Bool __shouldStopProcessing;
    SignpostSupportSubsystemCategoryFilter *_subsystemCategoryFilter;
    SignpostSupportExactProcessNameFilter *_processNameFilter;
    SignpostSupportPIDFilter *_pidFilter;
    SignpostSupportUniquePIDFilter *_uniquePidFilter;
    SignpostSupportObjectFilter *_objectFilter;
    CDUnknownBlockType _beginEventProcessingBlock;
    CDUnknownBlockType _endEventProcessingBlock;
    CDUnknownBlockType _repeatedBeginEventProcessingBlock;
    CDUnknownBlockType _unmatchedEndEventProcessingBlock;
    CDUnknownBlockType _emitEventProcessingBlock;
    CDUnknownBlockType _intervalCompletionProcessingBlock;
    CDUnknownBlockType _animationIntervalCompletionProcessingBlock;
    CDUnknownBlockType _logMessageProcessingBlock;
    CDUnknownBlockType _deviceRebootProcessingBlock;
    CDUnknownBlockType _processingCompletionBlock;
    SignpostIntervalBuilder *_intervalBuilder;
    unsigned long long _processedEventCount;
    CDUnknownBlockType _timedOutBeginEventProcessingBlock;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_semaphore> *_syncSem;
    unsigned long long __notificationTimeout;
    NSObject<OS_dispatch_queue> *_notificationProcessingQueue;
    OSLogEventLiveStream *__liveStream;
    CDUnknownBlockType __stopProcessingBlock;
    CDUnknownBlockType __intervalEndHandler;
}

@property (nonatomic, readonly) SignpostIntervalBuilder *intervalBuilder;
@property (nonatomic) unsigned long long processedEventCount;
@property (nonatomic) _Bool buildAnimationCompositeIntervalTimelines;
@property (copy, nonatomic) CDUnknownBlockType timedOutBeginEventProcessingBlock;
@property _Bool _shouldStopProcessing;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *syncSem;
@property (nonatomic) unsigned long long _notificationTimeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationProcessingQueue;
@property (retain, nonatomic) OSLogEventLiveStream *_liveStream;
@property (copy, nonatomic) CDUnknownBlockType _stopProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType _intervalEndHandler;
@property (retain, nonatomic) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter;
@property (retain, nonatomic) SignpostSupportExactProcessNameFilter *processNameFilter;
@property (retain, nonatomic) SignpostSupportPIDFilter *pidFilter;
@property (retain, nonatomic) SignpostSupportUniquePIDFilter *uniquePidFilter;
@property (retain, nonatomic) SignpostSupportObjectFilter *objectFilter;
@property (copy, nonatomic) CDUnknownBlockType beginEventProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType endEventProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType repeatedBeginEventProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType unmatchedEndEventProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType emitEventProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType intervalCompletionProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType animationIntervalCompletionProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType logMessageProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType deviceRebootProcessingBlock;
@property (copy, nonatomic) CDUnknownBlockType processingCompletionBlock;

- (id)init;
- (void)dealloc;
- (_Bool)_processSignpostSupportLogMessage:(id)arg1;
- (_Bool)_shouldProcessEvent:(id)arg1 shouldReport:(_Bool *)arg2;
- (_Bool)_processSignpostEvent:(id)arg1 shouldReport:(_Bool)arg2;
- (void)_processingCompleted:(id)arg1;
- (_Bool)processSerializedObjectsFromData:(id)arg1 errorOut:(id *)arg2;
- (void)finishProcessingSerializedData;
- (_Bool)processSerializedObjectsFromSignpostFile:(id)arg1 errorOut:(id *)arg2;
- (_Bool)_eventPassesWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 processName:(id)arg3 subsystem:(id)arg4 category:(id)arg5;
- (_Bool)_eventPassesFilters:(id)arg1;
- (_Bool)_isTrackingIntervals;
- (_Bool)_generateIntervalFromEnd:(id)arg1 shouldReport:(_Bool)arg2;
- (_Bool)_hasNonObjectFilters;
- (void)stopProcessing;
- (_Bool)_hasSignpostProcessingBlock;
- (_Bool)_shouldBuildEventWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 processName:(id)arg3 subsystem:(id)arg4 category:(id)arg5 shouldReport:(_Bool *)arg6;
- (id)_loggingSupportStreamPredicateFromFiltersWithForLiveStreaming:(_Bool)arg1;

@end
