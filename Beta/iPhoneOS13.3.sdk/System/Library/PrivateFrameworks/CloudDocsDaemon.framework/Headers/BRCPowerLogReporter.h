/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCPowerLogReporter : NSObject

{
    BRCAccountSession *_session;
    NSMutableDictionary *_deepScanReasonsToReport;
    NSObject<OS_dispatch_source> *_reporterTimer;
    NSObject<OS_dispatch_queue> *_reporterQueue;
}

- (id)initWithSession:(id)arg1;
- (void)reportDeepScanReason:(id)arg1 forAppLibraryID:(id)arg2;
- (double)statsReportInterval;
- (void)_reportStats;
- (double)timeUntilNextReport;

@end
