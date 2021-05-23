/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

#import <RunningBoard/Swift-Protocol.h>

@class NSString;

@interface RBAssertionOriginatorPidStore : NSObject <Swift>

{
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_header;
    NSString *_path;
    int *_pids;
    int _headerID;
    int _pidsID;
    struct os_unfair_lock_s _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *stateCaptureTitle;

- (void)dealloc;
- (_Bool)isValid;
- (id)initWithPath:(id)arg1;
- (id)captureState;
- (void)removePid:(int)arg1;
- (void)addPid:(int)arg1;
- (void)_allocSharedMemory;
- (void)_lock_deallocSharedMemory;
- (void)_lock_addPidToSharedMemory:(int)arg1;
- (void)_lock_removePidFromSharedMemory:(int)arg1;
- (_Bool)_lock_containsPid:(int)arg1;
- (_Bool)_lock_allocSharedMemoryWithName:(const char *)arg1 size:(unsigned long long)arg2 address:(out void **)arg3 fileDescriptor:(out int *)arg4 created:(out _Bool *)arg5;
- (_Bool)_lock_isHeaderValid;
- (_Bool)_lock_isPidDataValid;
- (_Bool)_lock_resizeSharedMemoryIfNecessary;
- (void)_lock_sortSharedMemory;
- (unsigned int)_lock_indexOfPidInSharedMemory:(int)arg1;
- (void)setValidProcesses:(id)arg1;
- (_Bool)containsPid:(int)arg1;

@end
