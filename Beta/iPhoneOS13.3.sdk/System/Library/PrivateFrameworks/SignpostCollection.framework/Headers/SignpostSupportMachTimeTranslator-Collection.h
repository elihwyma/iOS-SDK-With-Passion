/*
 Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection
 */

#import <SignpostSupport/SignpostSupportMachTimeTranslator.h>

@interface SignpostSupportMachTimeTranslator (Collection)

+ (id)_globalNotificationDispatchQueue;
+ (id)_timeTranslationLog;
+ (void)_snapshotMachTimesForAllListeners;
+ (void)_addListeningTimeTranslator:(id)arg1;
+ (void)_removeListeningTimeTranslator:(id)arg1;
+ (void)_processPowerNotificationOfType:(unsigned int)arg1 withNotificationID:(long long)arg2;

- (void)_grabMachTimesSnapshot;
- (id)initWithMaxEntries:(unsigned long long)arg1;
- (void)startMonitoringSleepWake;
- (void)stopMonitoringSleepWake;
- (id)dataRepresentationDuringMonitoring;

@end
