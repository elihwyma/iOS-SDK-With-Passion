/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCProgress, NSMutableSet, NSString, _BRCDownloadInfo, _BRCUploadInfo, br_pacer;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCGlobalProgress : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _lazyInitDone;
    br_pacer *_updatePacer;
    BRCAccountSession *_session;
    NSObject<OS_dispatch_source> *_operationTimer;
    unsigned int _operationTimerSuspendCount;
    _Bool _showExtendedInfo;
    _Bool _networkReachable;
    BRCProgress *_globalProgress;
    NSMutableSet *_appLibrariesNotLive;
    _BRCUploadInfo *_uploads;
    _BRCDownloadInfo *_downloads;
}

@property (weak, nonatomic, readonly) BRCAccountSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_keyPathsToObserve;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithSession:(id)arg1;
- (void)networkReachabilityChanged:(_Bool)arg1;
- (void)addProgress:(id)arg1 forDocument:(id)arg2 inGroup:(BOOL)arg3;
- (void)dumpToContext:(id)arg1;
- (void)willScheduleDocumentForDownload:(id)arg1;
- (void)updateDownloadThrottleForDocument:(id)arg1 toState:(int)arg2;
- (void)didUpdateDocument:(id)arg1;
- (void)didDeleteDocument:(id)arg1;
- (void)didUpdateClientZone:(id)arg1;
- (void)_updateGlobalProgress;
- (void)_destroyDownloadWithReason:(BOOL)arg1;
- (void)_destroyUploadWithReason:(BOOL)arg1;
- (void)_stopObservingProgress:(id)arg1;
- (void)_updateAppLibraryID:(id)arg1;
- (void)_cancelDownloadForDocumentID:(id)arg1 destroyIfLast:(_Bool)arg2 willRetryTransfer:(_Bool)arg3;
- (void)_createDownloadMetadataWithCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_updateDocument:(id)arg1;
- (void)_deleteDocument:(id)arg1 reason:(BOOL)arg2;
- (void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned int)arg2 willRetryTransfer:(_Bool)arg3;
- (void)_startObservingProgress:(id)arg1;
- (void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned int)arg2 willRetryTransfer:(_Bool)arg3 pendingQuota:(_Bool)arg4;
- (void)dumpDictionary:(id)arg1 withMaxCount:(unsigned long long)arg2 toContext:(id)arg3;
- (void)_createNewGlobalProgressInGroup:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3;
- (void)_destroyProgressInGroup:(id)arg1 reason:(BOOL)arg2;
- (void)_resumeProgressForAnotherOperationIfNeeded;
- (void)_createNewIndeterminateGlobalProgress;
- (void)_cancelUploadForDocumentID:(id)arg1 inState:(unsigned int)arg2;
- (void)_createUploadMetadataWithCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_cancelDownloadForDocumentID:(id)arg1;
- (void)resumeProgressForZones:(id)arg1;
- (void)clearOutOfQuotaState;
- (void)stopPublishingProgress;
- (void)updateUploadThrottleForDocument:(id)arg1 toState:(int)arg2;
- (id)_t_globalProgressInfo;

@end
