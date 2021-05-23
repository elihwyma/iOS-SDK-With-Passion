/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSURL;

@interface PLFileSystemVolumeUnmountMonitor : NSObject

{
    NSHashTable *_observers;
    struct os_unfair_lock_s _lock;
    NSURL *_volumeURL;
}

- (void)dealloc;
- (id)initWithVolumeURL:(id)arg1;
- (void)addVolumeUnmountObserver:(id)arg1;
- (void)removeVolumeUnmountObserver:(id)arg1;

@end
