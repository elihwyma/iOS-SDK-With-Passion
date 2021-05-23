/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_source, _DUIServerSessionSource;

__attribute__((visibility("hidden")))
@interface _UIDruidSourceConnection : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_connectionWatchdogTimer;
    id <_DUIServerSessionSource> _serverSession;
    _Bool _cancelled;
    CDUnknownBlockType _dragPreviewProviderBlock;
    CDUnknownBlockType _canHandOffCancelledItemsBlock;
    CDUnknownBlockType _handOffCancelledItemsBlock;
    CDUnknownBlockType _dragCompletionBlock;
    CDUnknownBlockType _dataTransferFinishedBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (copy, nonatomic) CDUnknownBlockType dragPreviewProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType canHandOffCancelledItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType handOffCancelledItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType dragCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType dataTransferFinishedBlock;

- (id)init;
- (void)cancelDrag;
- (oneway void)requestDragPreviewsForIndexSet:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)checkCanHandOffCancelledItemsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)handOffCancelledItems:(id)arg1 withFence:(id)arg2;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)dragFailed;
- (oneway void)dataTransferSessionFinished;
- (void)beginDragWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)takeInsideAppSourceOperationMask:(unsigned long long)arg1 outsideAppSourceOperationMask:(unsigned long long)arg2 prefersFullSizePreview:(_Bool)arg3;
- (void)dirtyItems:(id)arg1;
- (void)dragDidExitApp;
- (id)addItems:(id)arg1 withOldItemCollection:(id)arg2;
- (void)_internalDragFailed;

@end
