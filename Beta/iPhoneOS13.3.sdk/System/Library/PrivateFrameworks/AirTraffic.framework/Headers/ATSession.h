/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSError, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@protocol ATMessageLink, OS_dispatch_group, OS_dispatch_queue;

@interface ATSession : NSObject

{
    NSMutableArray *_sessionTasks;
    NSMutableDictionary *_sessionTasksByIdentifier;
    NSMutableSet *_observing;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSXPCConnection *_connection;
    double _startTime;
    double _finishTime;
    _Bool _suspended;
    _Bool _finished;
    _Bool _running;
    _Bool _cancelled;
    NSString *_sessionTypeIdentifier;
    NSString *_sessionIdentifier;
    NSString *_localizedDescription;
    NSString *_dataClass;
    double _progress;
    NSError *_error;
    NSXPCListenerEndpoint *_endpoint;
    id <ATMessageLink> _messageLink;
}

@property (getter=isSuspended) _Bool suspended;
@property (getter=isRunning) _Bool running;
@property (getter=isFinished) _Bool finished;
@property (getter=isCancelled) _Bool cancelled;
@property (retain) NSString *sessionTypeIdentifier;
@property (retain) NSString *sessionIdentifier;
@property (retain) NSString *localizedDescription;
@property (retain, nonatomic) NSString *dataClass;
@property double progress;
@property (copy) NSError *error;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (weak, nonatomic) id <ATMessageLink> messageLink;
@property (readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)_remoteSessionsWithTypeIdentifier:(id)arg1;
+ (id)sessionsWithSessionTypeIdentifier:(id)arg1;
+ (unsigned long long)_remoteActiveSessionCountWithTypeIdentifier:(id)arg1;
+ (void)_cancelSessionWithIdentifier:(id)arg1;
+ (void)setSessionHost:(_Bool)arg1;
+ (id)allSessions;
+ (id)sessionsWithSessionTypeIdentifier:(id)arg1 dataClass:(id)arg2;
+ (unsigned long long)activeSessionCountWithSessionTypeIdentifier:(id)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)cancel;
- (void)start;
- (void)addObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (id)sessionTasks;
- (void)_finishWithError:(id)arg1;
- (id)_keysToObserve;
- (id)initWithSessionIdentifier:(id)arg1 sessionTypeIdentifier:(id)arg2;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2;
- (void)_beginTasks:(id)arg1;
- (void)_observeKeysForTask:(id)arg1;
- (id)initWithSessionTypeIdentifier:(id)arg1;
- (void)beginSessionTask:(id)arg1;
- (void)updateSessionTask:(id)arg1;
- (void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3;
- (void)_stopObservingKeysForTask:(id)arg1;
- (void)addSessionTasks:(id)arg1;
- (void)waitToFinish;
- (id)sessionTasksWithGroupingKey:(id)arg1;

@end
