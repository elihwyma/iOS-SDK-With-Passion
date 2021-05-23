/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCMetricEndpoint, BRCSyncHealthReport, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAnalyticsReporter : NSObject

{
    BRCAccountSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    BRCMetricEndpoint *_metricEndpoint;
    NSMutableDictionary *_eventsByKind;
    BRCSyncHealthReport *_syncHealthReport;
}

- (void)submitEventMetric:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (void)_forgetEventMetrics:(id)arg1;
- (void)_cleanupTimedOutEventMetrics:(id)arg1;
- (void)_withEventMetricsOfKind:(id)arg1 accessor:(CDUnknownBlockType)arg2;
- (void)forgetEventMetric:(id)arg1;
- (void)createFSEventToSyncUpEventForFileID:(unsigned long long)arg1 genID:(unsigned int)arg2;
- (void)lookupFSEventToSyncUpEventByFileID:(unsigned long long)arg1 genID:(unsigned int)arg2 accessor:(CDUnknownBlockType)arg3;
- (void)lookupFSEventToSyncUpEventByItemID:(id)arg1 accessor:(CDUnknownBlockType)arg2;
- (void)createUserDownloadEventForOperationID:(id)arg1 isRecursive:(_Bool)arg2 isForBackup:(_Bool)arg3;
- (void)lookupUserDownloadEventByOperationID:(id)arg1 accessor:(CDUnknownBlockType)arg2;
- (void)lookupUserDownloadEventByDocID:(id)arg1 accessor:(CDUnknownBlockType)arg2;

@end
