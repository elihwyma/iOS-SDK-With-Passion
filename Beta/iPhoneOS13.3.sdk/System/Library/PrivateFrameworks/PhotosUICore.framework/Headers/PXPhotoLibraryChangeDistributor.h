/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableSet, NSString, PHPhotoLibrary;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface PXPhotoLibraryChangeDistributor : NSObject

{
    PHPhotoLibrary *_photoLibrary;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_changeDeliverySemaphore;
    NSObject<OS_dispatch_group> *_changePausingGroup;
    NSMutableSet *_changePausingTokens;
}

@property (nonatomic, readonly, getter=areChangesPaused) _Bool changesPaused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)distributeChangeOnMainQueue:(id)arg1;
- (id)beginPausingChangesWithTimeout:(double)arg1;
- (void)endPausingChanges:(id)arg1;
- (void)_notifyPausedStateChange;

@end
