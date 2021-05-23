/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableOrderedSet, NSOrderedSet;

@protocol OS_dispatch_queue, OS_dispatch_semaphore, STMockSessionDJDelegate;

@interface STMockSessionDJ : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_responsesQueue;
    NSObject<OS_dispatch_queue> *_onewayCBqueue;
    NSArray *_recordedCBTimestamps;
    NSArray *_recordedClientBoundAceCommands;
    NSArray *_recordedServerBoundAceCommands;
    NSOrderedSet *_recordedRefIDs;
    NSArray *_recordedStartRequests;
    NSArray *_recordedStartRequestsTimestamps;
    NSDictionary *_SBCommandsAceIDsToTimestamps;
    NSMutableOrderedSet *_newStartRequestIDs;
    NSArray *_getResultObjectsCommands;
    NSArray *_getResultObjectsAceIds;
    NSDictionary *_matchedCommands;
    NSDictionary *_commandsOrderedByType;
    NSDictionary *_indicesOfReplayCommandsByType;
    NSDictionary *_responseTime;
    NSArray *_oneWayClientBoundCommands;
    unsigned long long _replayIndex;
    _Bool _isClientFlow;
    NSObject<OS_dispatch_semaphore> *_finishedSpeech;
    NSObject<OS_dispatch_semaphore> *_requestCompleted;
    NSMutableArray *_completions;
    _Bool _isReplaying;
    id <STMockSessionDJDelegate> _delegate;
}

@property (weak, nonatomic) id <STMockSessionDJDelegate> delegate;
@property (nonatomic, readonly) _Bool isReplaying;

- (void)handleAceObject:(id)arg1;
- (id)initWithReplayFileURL:(id)arg1;
- (void)addFinishRequestCompletion:(CDUnknownBlockType)arg1;
- (void)startReplay;
- (void)addStartRequestID:(id)arg1;
- (void)_loadReplayAtURL:(id)arg1;
- (void)_matchRefIdsWithAceIds;
- (void)_setUpObserverAction;
- (void)_replayFromCommand:(id)arg1 isLastRequest:(_Bool)arg2;
- (void)_sendOneWayCBCommandsForStartRequest:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)_sendCommandsFrom:(id)arg1 withTimestamps:(id)arg2 atIndex:(unsigned long long)arg3 isLastRequest:(_Bool)arg4;
- (id)_getEventContextFromEvent:(id)arg1;

@end
