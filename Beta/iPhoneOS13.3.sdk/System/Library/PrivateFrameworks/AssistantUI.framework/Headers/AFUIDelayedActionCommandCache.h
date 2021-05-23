/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject

{
    NSMutableDictionary *_delayedActionTimersByIdentifier;
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;
}

- (id)init;
- (void)dealloc;
- (id)_commandHandler;
- (void)invalidatePendingCommands;
- (void)_performDelayedActionCommandTimerAction:(id)arg1;
- (void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2;
- (void)_performCommandsWithDelayedActionCommand:(id)arg1;
- (void)enqueueDelayedActionCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDismissalCommands;

@end
