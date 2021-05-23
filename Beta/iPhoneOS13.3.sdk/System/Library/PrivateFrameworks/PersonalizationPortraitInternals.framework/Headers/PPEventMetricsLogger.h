/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PPEventMetricsLogger : NSObject

{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    NSString *_path;
    NSMutableArray *_loggedInteractionsSummary;
    NSObject<OS_dispatch_source> *_persistenceTimerSource;
    NSObject<OS_dispatch_queue> *_interactionsWriteQueue;
    double _storeCreationDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultLogger;
+ (unsigned long long)numberOfDaysBetweenDate:(id)arg1 andDate:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sendRTCLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)updateAndScheduleDiskWrite;
- (void)logNewInteractionSummaryWithDictionary:(id)arg1;
- (id)whitelistedLogFromLog:(id)arg1;
- (id)logsToSend;
- (id)_createRTCReporting;
- (_Bool)resetLogs;
- (_Bool)storeToDisk;
- (id)_descriptionForInterface:(unsigned short)arg1;
- (id)_descriptionForActionType:(unsigned short)arg1;
- (id)initWithFileName:(id)arg1;
- (id)eventsAndExtraordinaryEventsDictFromDate:(id)arg1;
- (double)_storeAge;
- (_Bool)_removeInteractionsSummaryLogsFromLogsAndResetStoreAge:(id)arg1;
- (void)logEventInteractionForEventHighlight:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (_Bool)_incrementInteractionForEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (id)_interactionAttributesForEventHighlight:(id)arg1;
- (id)_interactionKeyForInterface:(unsigned short)arg1 actionType:(unsigned short)arg2;
- (id)_descriptionForPPRTCCategory:(unsigned short)arg1;
- (id)loggedInteractionsSummaryMetrics;

@end
