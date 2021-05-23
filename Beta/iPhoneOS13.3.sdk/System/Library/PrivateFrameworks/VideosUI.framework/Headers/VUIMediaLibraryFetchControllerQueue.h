/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, VUIDelayOperation, VUIMediaLibrary, VUIMediaLibraryFetchControllerQueueOperation, VUINowPlayingObserver;

@protocol OS_dispatch_queue, VUIMediaLibraryFetchControllerQueueDelegate;

@interface VUIMediaLibraryFetchControllerQueue : NSObject

{
    _Bool _paused;
    _Bool _shouldFetchOnResume;
    id <VUIMediaLibraryFetchControllerQueueDelegate> _delegate;
    NSMutableArray *_mutableFetchControllers;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    VUIMediaLibrary *_mediaLibrary;
    unsigned long long _mediaLibraryRevision;
    VUIMediaLibraryFetchControllerQueueOperation *_currentFetchOperation;
    VUIDelayOperation *_delayContentsChangeOperation;
    NSOperationQueue *_serialFetchOperationQueue;
    VUINowPlayingObserver *_nowPlayingObserver;
}

@property (retain, nonatomic) NSMutableArray *mutableFetchControllers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) _Bool shouldFetchOnResume;
@property (nonatomic) unsigned long long mediaLibraryRevision;
@property (retain, nonatomic) VUIMediaLibraryFetchControllerQueueOperation *currentFetchOperation;
@property (retain, nonatomic) VUIDelayOperation *delayContentsChangeOperation;
@property (retain, nonatomic) NSOperationQueue *serialFetchOperationQueue;
@property (retain, nonatomic) VUINowPlayingObserver *nowPlayingObserver;
@property (weak, nonatomic) id <VUIMediaLibraryFetchControllerQueueDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *fetchControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultQueueWithMediaLibrary:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pauseFetching;
- (void)resumeFetching;
- (id)initWithMediaLibrary:(id)arg1;
- (void)removeFetchController:(id)arg1;
- (void)addFetchController:(id)arg1;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_removeStateObserverForFetchControllers:(id)arg1;
- (void)_enqueueSyncProcessingQueueBlock:(CDUnknownBlockType)arg1;
- (void)addFetchControllers:(id)arg1;
- (void)_addStateObserverForFetchControllers:(id)arg1;
- (void)_enqueueControllerFetchOperation;
- (void)removeFetchControllers:(id)arg1;
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;
- (void)_handleMediaLibraryContentsChange;
- (void)_delayContentsChangeOperationDidComplete:(id)arg1;
- (void)_notifyDelegateFetchDidComplete;
- (void)_queueOperationDidComplete:(id)arg1;
- (void)nowPlayingObserver:(id)arg1 latestObservationDidChange:(id)arg2;
- (void)_enqueueProcessingQueueBlock:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;

@end
