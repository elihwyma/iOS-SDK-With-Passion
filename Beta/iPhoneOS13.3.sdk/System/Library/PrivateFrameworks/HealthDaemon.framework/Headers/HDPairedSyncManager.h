/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSHashTable, NSString, PSYSyncCoordinator;

@protocol OS_dispatch_queue;

@interface HDPairedSyncManager : NSObject

{
    PSYSyncCoordinator *_pairedSyncCoordinator;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_unfinishedSyncSessions;
}

@property (retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *unfinishedSyncSessions;
@property (readonly) PSYSyncCoordinator *syncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)syncCoordinatorWithServiceName:(id)arg1;

- (void)dealloc;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1 queue:(id)arg2;
- (_Bool)permitSynchronization;
- (id)_typeStringForSyncSession:(id)arg1;
- (void)_queue_didSendRestoreMessagesForSession:(id)arg1 error:(id)arg2;
- (void)_queue_didFinishRestoreForSession:(id)arg1 error:(id)arg2;
- (void)_queue_pairedSyncDidStartWithSession:(id)arg1;
- (id)_syncRestrictionString;

@end
