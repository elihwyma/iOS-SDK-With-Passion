/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class FigStateMachine, NSMutableArray, NSString;

@interface BWSinkNode : BWNode

{
    FigStateMachine *_stateMachine;
    struct os_unfair_lock_s _stateLock;
    NSMutableArray *_handlersToCallWhenIdle;
    NSMutableArray *_handlersToCallWhenActive;
    NSString *_sinkID;
    struct OpaqueFigSimpleMutex *_configurationHandlerLock;
    long long _liveConfigurationID;
    NSMutableArray *_configurationLiveHandlers;
    NSMutableArray *_configurationLiveIDs;
}

@property (copy, nonatomic, readonly) NSString *sinkID;
@property (readonly) NSString *currentStateDebugString;
@property (readonly) _Bool isActive;
@property (readonly) long long liveConfigurationID;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)addOutput:(id)arg1;
- (id)initWithSinkID:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)_setupSinkNodeStateMachine;
- (void)notifyWhenActive:(CDUnknownBlockType)arg1;
- (void)notifyWhenIdle:(CDUnknownBlockType)arg1;
- (void)notifyWhenConfigurationID:(long long)arg1 becomesLive:(CDUnknownBlockType)arg2;

@end
