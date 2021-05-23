/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/VCCompanionSyncSession.h>

@class NSDictionary, NSMutableArray;

@protocol VCCompanionSyncOutgoingSessionDelegate;

@interface VCCompanionSyncOutgoingSession : VCCompanionSyncSession

{
    NSMutableArray *_pendingChanges;
    NSDictionary *_metadata;
    NSMutableArray *_sentChanges;
    NSMutableArray *_syncedChanges;
}

@property (copy, nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSMutableArray *pendingChanges;
@property (nonatomic, readonly) NSMutableArray *sentChanges;
@property (nonatomic, readonly) NSMutableArray *syncedChanges;
@property (weak, nonatomic) id <VCCompanionSyncOutgoingSessionDelegate> delegate;
@property (nonatomic, readonly) double progress;

+ (long long)direction;

- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)syncSession:(id)arg1 successfullySynced:(id)arg2;
- (id)initWithSYSession:(id)arg1 service:(id)arg2 syncDataHandlers:(id)arg3 changeSet:(id)arg4 metadata:(id)arg5;

@end
