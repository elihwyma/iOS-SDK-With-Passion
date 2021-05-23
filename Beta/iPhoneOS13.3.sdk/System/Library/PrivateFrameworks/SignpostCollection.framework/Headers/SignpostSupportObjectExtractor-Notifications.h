/*
 Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection
 */

#import <SignpostSupport/SignpostSupportObjectExtractor.h>

@interface SignpostSupportObjectExtractor (Notifications)

@property (copy, nonatomic) CDUnknownBlockType timedOutBeginEventProcessingBlock;

- (_Bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 shouldCalculateAnimationFramerate:(_Bool)arg2 targetQueue:(id)arg3 errorOut:(id *)arg4;
- (void)_processStreamedOSLogEventProxy:(id)arg1 shouldCalculateFramerate:(_Bool)arg2;
- (_Bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 errorOut:(id *)arg2;
- (void)_processOSLogEventProxy:(id)arg1;
- (_Bool)processLogArchiveWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id *)arg4;
- (_Bool)processTraceFileWithPath:(id)arg1 errorOut:(id *)arg2;

@end
