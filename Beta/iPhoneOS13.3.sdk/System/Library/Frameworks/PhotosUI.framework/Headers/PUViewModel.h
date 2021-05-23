/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, PUViewModelChange;

@protocol OS_dispatch_queue;

@interface PUViewModel : NSObject

{
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    PUViewModelChange *_currentChange;
    _Bool __publishingChanges;
    NSHashTable *__changeObservers;
}

@property (nonatomic, getter=_isPublishingChanges, setter=_setPublishingChanges:) _Bool _publishingChanges;
@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (nonatomic, readonly) PUViewModelChange *currentChange;
@property (nonatomic, readonly) PUViewModelChange *currentChangeIfExists;

- (id)init;
- (void)_willChange;
- (void)_didChange;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)didPerformChanges;
- (void)_publishChanges;
- (void)didPublishChanges;
- (void)_applyPendingChanges;
- (id)debugDetailedDescription;
- (id)newViewModelChange;
- (void)assertInsideChangesBlock;
- (void)willPublishChanges;

@end
