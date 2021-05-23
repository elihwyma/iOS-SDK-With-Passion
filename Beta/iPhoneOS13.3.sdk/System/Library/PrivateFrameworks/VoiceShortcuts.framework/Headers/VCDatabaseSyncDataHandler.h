/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/VCSyncDataHandler.h>

@class WFDatabaseResult;

@interface VCDatabaseSyncDataHandler : VCSyncDataHandler

{
    WFDatabaseResult *_result;
}

@property (nonatomic, readonly) WFDatabaseResult *result;

+ (Class)changeClass;

- (id)initWithResult:(id)arg1;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (_Bool)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id *)arg3;
- (_Bool)deleteSyncedData:(id *)arg1;

@end
