/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface NTKFirstUnlockQueue : NSObject

{
    const char *_name;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isSuspended;
    _Bool _isBeforeFirstUnlock;
}

- (void)dealloc;
- (id)initWithName:(const char *)arg1;
- (void)dispatch:(CDUnknownBlockType)arg1;
- (void)_firstUnlock:(id)arg1;

@end
