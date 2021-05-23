/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYIncomingFullSyncSession.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SYIncomingSyncAllObjectsSession : SYIncomingFullSyncSession

{
    NSMutableArray *_allObjectsAsData;
    CDUnknownBlockType _completion;
    _Bool canRestart;
    _Bool canRollback;
}

- (id)initWithService:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendEndSessionResponse:(id)arg1;
- (void)_continueProcessing;
- (_Bool)canRestart;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRollback:(_Bool)arg1;

@end
