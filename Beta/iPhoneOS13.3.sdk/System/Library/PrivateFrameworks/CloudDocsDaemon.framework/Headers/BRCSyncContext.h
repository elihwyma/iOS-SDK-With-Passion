/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCThrottleBase, BRCTransferStream, BRCUserDefaults, CKContainer, CKContainerID, NSDate, NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCSyncContext : NSObject

{
    CKContainer *_ckContainer;
    NSString *_contextIdentifier;
    NSString *_sourceAppIdentifier;
    _Bool _isShared;
    _Bool _isCancelled;
    int _notifyTokenForFramework;
    NSMutableSet *_foregroundClients;
    NSString *_lastForegroundClientDescription;
    NSDate *_dateWhenLastForegroundClientLeft;
    NSObject<OS_dispatch_source> *_timerForGraceForegroundPeriod;
    NSObject<OS_dispatch_source> *_timerForForcedForegroundPeriod;
    NSObject<OS_dispatch_queue> *_foregroundStateQueue;
    unsigned long long _foregroundState;
    BRCAccountSession *_session;
    BRCThrottleBase *_readerThrottle;
    BRCThrottleBase *_applyThrottle;
    BRCThrottleBase *_downloadThrottle;
    BRCThrottleBase *_uploadThrottle;
    BRCThrottleBase *_uploadFileModifiedThrottle;
    BRCThrottleBase *_perItemSyncUpThrottle;
    BRCTransferStream *_uploadStream;
    BRCTransferStream *_downloadStream;
}

@property (nonatomic, readonly) BRCAccountSession *session;
@property (nonatomic, readonly) NSString *contextIdentifier;
@property (nonatomic, readonly) BRCUserDefaults *defaults;
@property (nonatomic, readonly) _Bool isShared;
@property (nonatomic, readonly) CKContainer *ckContainer;
@property (nonatomic, readonly) CKContainerID *ckContainerID;
@property (nonatomic, readonly) BRCTransferStream *uploadStream;
@property (nonatomic, readonly) BRCTransferStream *downloadStream;
@property (nonatomic, readonly) BRCThrottleBase *readerThrottle;
@property (nonatomic, readonly) BRCThrottleBase *applyThrottle;
@property (nonatomic, readonly) BRCThrottleBase *uploadThrottle;
@property (nonatomic, readonly) BRCThrottleBase *uploadFileModifiedThrottle;
@property (nonatomic, readonly) BRCThrottleBase *perItemSyncUpThrottle;
@property (nonatomic, readonly) BRCThrottleBase *downloadThrottle;

+ (id)transferContextForServerZone:(id)arg1 appLibrary:(id)arg2;
+ (id)contextIdentifierForMangledID:(id)arg1;
+ (id)_contextIdentifierForMangledID:(id)arg1 metadata:(_Bool)arg2;
+ (id)_sourceAppIdentifierForMangledID:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)addOperation:(id)arg1;
- (void)close;
- (void)cancel;
- (void)resume;
- (id)_database;
- (_Bool)allowsCellularAccess;
- (_Bool)isForeground;
- (void)setupIfNeeded;
- (void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2;
- (void)dumpToContext:(id)arg1;
- (id)foregroundClients;
- (void)removeForegroundClient:(id)arg1;
- (void)addForegroundClient:(id)arg1;
- (void)didReceiveHandoffRequest;
- (void)addOperation:(id)arg1 nonDiscretionary:(_Bool)arg2;
- (void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2 nonDiscretionary:(id)arg3;
- (void)_notifyFrameworkContainersMonitorWithState:(_Bool)arg1;
- (void)_notifyContainerBeingNowForeground;
- (void)notifyDuetFromAccessByBundleID:(id)arg1;
- (void)_armForegroundGraceTimerForClientDescription:(id)arg1;
- (id)initWithSession:(id)arg1 contextIdentifier:(id)arg2 sourceAppIdentifier:(id)arg3 isShared:(_Bool)arg4;
- (void)waitForAllOperations;
- (void)forceContainerForegroundForDuration:(double)arg1;

@end
