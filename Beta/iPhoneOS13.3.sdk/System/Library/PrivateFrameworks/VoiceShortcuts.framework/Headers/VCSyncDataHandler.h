/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSArray, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface VCSyncDataHandler : NSObject

{
    NSHashTable *_servicesTable;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSHashTable *servicesTable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) NSArray *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)messageType;
+ (Class)changeClass;

- (id)init;
- (void)requestSync;
- (void)registerSyncService:(id)arg1;
- (void)deregisterSyncService:(id)arg1;
- (_Bool)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id *)arg3;
- (_Bool)deleteSyncedData:(id *)arg1;
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;
- (_Bool)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;
- (_Bool)resetSyncStateForService:(id)arg1 error:(id *)arg2;
- (void)requestFullResync;

@end
