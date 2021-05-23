/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NFMutexLock;

@protocol FCOperationCanceling><FCOperationPrioritizing, OS_dispatch_group;

@interface FCAsyncOnceOperation : NSObject

{
    _Bool _finished;
    _Bool _succeeded;
    CDUnknownBlockType _workBlock;
    unsigned long long _interest;
    NSObject<OS_dispatch_group> *_activeGroup;
    id <FCOperationCanceling><FCOperationPrioritizing> _activeOperation;
    long long _relativePriority;
    NFMutexLock *_lock;
}

@property (copy, nonatomic) CDUnknownBlockType workBlock;
@property (nonatomic) _Bool finished;
@property (nonatomic) _Bool succeeded;
@property (nonatomic) unsigned long long interest;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *activeGroup;
@property (retain, nonatomic) id <FCOperationCanceling><FCOperationPrioritizing> activeOperation;
@property (nonatomic) long long relativePriority;
@property (retain, nonatomic) NFMutexLock *lock;
@property (nonatomic, readonly) _Bool finishedExecuting;
@property (nonatomic, readonly) _Bool finishedExecutingWithFailure;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)executeWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
