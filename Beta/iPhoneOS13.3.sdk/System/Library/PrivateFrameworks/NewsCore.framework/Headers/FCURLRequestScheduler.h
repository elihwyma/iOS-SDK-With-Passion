/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NFUnfairLock, NSMapTable, NSMutableOrderedSet;

@interface FCURLRequestScheduler : NSObject

{
    NSMutableOrderedSet *_requests;
    NSMapTable *_inFlightURLTasks;
    NFUnfairLock *_lock;
}

@property (retain, nonatomic) NSMutableOrderedSet *requests;
@property (retain, nonatomic) NSMapTable *inFlightURLTasks;
@property (retain, nonatomic) NFUnfairLock *lock;

- (id)init;
- (void)_cancelRequest:(id)arg1;
- (void)_serviceRequests;
- (void)_applyPriority:(long long)arg1 toRequest:(id)arg2;
- (_Bool)_isLowPriority:(long long)arg1;
- (void)_suspendURLTaskForRequest:(id)arg1;
- (void)_resumeURLTaskForRequest:(id)arg1;
- (id)scheduleURLRequest:(id)arg1 URLSession:(id)arg2 destination:(long long)arg3 priority:(long long)arg4 loggingKey:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end
