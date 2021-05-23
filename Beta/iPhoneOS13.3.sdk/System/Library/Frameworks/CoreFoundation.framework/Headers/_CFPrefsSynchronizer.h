/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CFPrefsSynchronizer : NSObject

{
    NSObject<OS_dispatch_source> *_synchTimer;
    NSObject<OS_dispatch_queue> *_synchQueue;
    struct __CFSet *_dirtySources;
    struct _opaque_pthread_mutex_t _CFPrefsDirtySourcesLock;
    _Bool _active;
}

+ (id)sharedInstance;

- (id)init;
- (void)synchronize;
- (void)enableTimer_alreadyLocked;
- (void)clear_alreadyLocked;
- (const struct __CFSet *)copyDirtySourcesSnapshotAndClear;
- (void)disableTimer_alreadyLocked;
- (void)noteDirtySource:(id)arg1;
- (void)synchronizeForDaemonTermination;
- (void)clear;

@end
