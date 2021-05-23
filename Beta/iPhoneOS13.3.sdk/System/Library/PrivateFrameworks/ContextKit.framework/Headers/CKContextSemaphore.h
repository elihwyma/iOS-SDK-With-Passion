/*
 Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface CKContextSemaphore : NSObject

{
    _Bool _semaOwner;
    unsigned int _sema;
    unsigned long long _shmSize;
    struct {
        _Atomic unsigned int _field1;
        _Atomic unsigned int _field2;
        _Atomic unsigned int _field3;
        _Atomic unsigned int _field4;
        _Atomic int _field5;
        _Atomic unsigned int _field6;
        _Atomic unsigned long long _field7;
        _Atomic unsigned int _field8;
        _Atomic unsigned int _field9;
    } *_shm;
    NSObject<OS_xpc_object> *_shmObject;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)sharedMemorySize;
- (_Bool)busy;
- (long long)pending;
- (void)notify;
- (_Bool)tryAcquire;
- (unsigned long long)gauge;
- (void)resetPending;
- (long long)waitFor:(double)arg1;
- (void)incPending;
- (id)initSemaphoreForXPCService;
- (unsigned long long)activeGauge;
- (void)setActiveGauge:(unsigned long long)arg1;
- (void)decPending;
- (unsigned long long)pendingExceptionsCount;
- (unsigned long long)numAcquired;
- (unsigned long long)requestsServed;
- (void)notifyAll;

@end
