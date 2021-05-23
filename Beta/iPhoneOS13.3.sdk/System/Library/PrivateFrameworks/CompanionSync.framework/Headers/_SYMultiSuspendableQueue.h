/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSMutableArray, NSString, PBCodable;

@protocol OS_dispatch_queue;

@interface _SYMultiSuspendableQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    unsigned long long _stateHandle;
    _Atomic int _resumeCount;
    NSString *_logDescriptor;
    NSMutableArray *_latestSuspendBacktraces;
    NSMutableArray *_latestResumeBacktraces;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, readonly) unsigned int qosClass;
@property (nonatomic, readonly, getter=isSuspended) _Bool suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PBCodable *stateForLogging;

- (id)init;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)async:(CDUnknownBlockType)arg1;
- (void)sync:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(_Bool)arg3 target:(id)arg4;
- (void)barrierAsync:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(_Bool)arg3;
- (void)barrierSync:(CDUnknownBlockType)arg1;

@end
