/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSOperation, NSOperationQueue, NSString, VUIMediaLibrary;

@protocol OS_dispatch_queue;

@interface VUIMediaLibraryFetchController : NSObject

{
    VUIMediaLibrary *_mediaLibrary;
    NSString *_identifier;
    NSString *_logName;
    NSString *_logNameSuffix;
    long long _state;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSOperationQueue *_serialFetchOperationQueue;
    NSOperation *_fetchOperation;
    unsigned long long _mediaLibraryRevision;
    unsigned long long _pauseCount;
}

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSOperationQueue *serialFetchOperationQueue;
@property (retain, nonatomic) NSOperation *fetchOperation;
@property (nonatomic) unsigned long long mediaLibraryRevision;
@property (nonatomic) unsigned long long pauseCount;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *logName;
@property (copy, nonatomic) NSString *logNameSuffix;

+ (id)_logStringWithFetchControllers:(id)arg1;

- (id)init;
- (void)pause;
- (void)resume;
- (void)cancelFetch;
- (id)initWithMediaLibrary:(id)arg1;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)_didCompleteFetchOperation:(id)arg1;
- (void)beginFetchWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)_enqueueSyncProcessingQueueBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueProcessingQueueBlock:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)_cancelFetch;
- (void)_moveToPausedState;
- (void)_startFetchIfNeededWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_shouldFetchForMediaLibraryRevision:(unsigned long long)arg1;
- (void)_startFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_enqueueFetchWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchOperationCompleted:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_updateMutableArray:(id)arg1 withLatestObjects:(id)arg2 changeSet:(id)arg3 updateOnNoChanges:(_Bool)arg4;

@end
