/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUWidthLimitedQueue : NSObject

{
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    struct os_unfair_lock_s mUnfairLock;
}

- (id)init;
- (void)dealloc;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)performSync:(CDUnknownBlockType)arg1;
- (id)initWithLimit:(unsigned long long)arg1;
- (id)targetDispatchQueue;

@end
