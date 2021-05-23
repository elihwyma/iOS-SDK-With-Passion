/*
 Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSLock, NSMutableArray, NSPointerArray, RTTUtterance;

@protocol OS_dispatch_queue;

@interface RTTUIConversationControllerCoordinator : NSObject

{
    NSObject<OS_dispatch_queue> *_utteranceRequestQueue;
    NSPointerArray *_conversationControllers;
    NSLock *_realtimeSendLock;
    NSIndexPath *_inProgressRealTimeIndexPath;
    RTTUtterance *_inProgressRealTimeUtterance;
    struct __CTServerConnection *_ctConnection;
    _Bool _processingUtteranceBuffer;
    NSMutableArray *_utteranceBuffer;
}

@property (retain, nonatomic) NSMutableArray *utteranceBuffer;
@property (nonatomic) _Bool processingUtteranceBuffer;
@property (nonatomic, readonly) NSIndexPath *inProgressRealTimeIndexPath;
@property (nonatomic, readonly) RTTUtterance *inProgressRealTimeUtterance;

+ (id)coordinator;

- (id)init;
- (id)conversationControllers;
- (void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3 call:(id)arg4;
- (_Bool)realtimeTextDidChange:(id)arg1 forUtterance:(id)arg2 lastRowPath:(id)arg3;
- (void)processUtteranceQueue;
- (void)_updateCallActiveStatus:(_Bool)arg1;
- (void)addConversationController:(id)arg1;
- (void)sendNewUtteranceString:(id)arg1 controller:(id)arg2;

@end
