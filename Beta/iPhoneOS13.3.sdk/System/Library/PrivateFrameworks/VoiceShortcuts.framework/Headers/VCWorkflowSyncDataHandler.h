/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/VCDatabaseSyncDataHandler.h>

@interface VCWorkflowSyncDataHandler : VCDatabaseSyncDataHandler

+ (int)messageType;

- (id)initWithDatabase:(id)arg1;
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;
- (_Bool)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;
- (_Bool)resetSyncStateForService:(id)arg1 error:(id *)arg2;

@end
