/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/VCSyncDataHandler.h>

@class VCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler

{
    VCDaemonXPCEventHandler *_eventHandler;
}

@property (nonatomic, readonly) VCDaemonXPCEventHandler *eventHandler;

+ (int)messageType;
+ (id)definitionDirectoryURL;
+ (id)syncDirectoryURLForBundleIdentifier:(id)arg1;

- (void)dealloc;
- (void)installedApplicationsDidChange:(id)arg1;
- (id)initWithEventHandler:(id)arg1;
- (_Bool)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id *)arg3;
- (_Bool)deleteSyncedData:(id *)arg1;
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;
- (_Bool)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id *)arg4;
- (_Bool)resetSyncStateForService:(id)arg1 error:(id *)arg2;

@end
