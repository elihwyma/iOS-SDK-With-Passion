/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NUJobQueue;

@protocol OS_dispatch_queue;

@interface NUJobPriorityQueue : NSObject

{
    NSMutableArray *_jobs;
    _Bool _needSort;
    NUJobQueue *_owner;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    _Bool _isRunning;
    NSString *_name;
}

@property (readonly) NSString *name;
@property (readonly) long long count;

- (id)init;
- (id)description;
- (_Bool)start;
- (void)_run;
- (void)_sortIfNeeded;
- (void)_sort;
- (void)addJob:(id)arg1;
- (_Bool)removeJob:(id)arg1;
- (id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned int)arg3;
- (void)_addJob:(id)arg1;
- (_Bool)_removeJob:(id)arg1;
- (id)popJob;
- (id)_popJob;
- (void)_startRunning;
- (_Bool)_runNextJob;

@end
