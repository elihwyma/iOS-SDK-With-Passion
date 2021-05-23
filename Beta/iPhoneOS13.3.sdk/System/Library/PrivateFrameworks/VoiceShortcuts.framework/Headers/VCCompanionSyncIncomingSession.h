/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/VCCompanionSyncSession.h>

@interface VCCompanionSyncIncomingSession : VCCompanionSyncSession

+ (long long)direction;

- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetDataStoreForSyncSession:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
