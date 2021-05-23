/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol _UIDruidSourceConnection <Swift>

@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (copy, nonatomic) CDUnknownBlockType dragPreviewProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType canHandOffCancelledItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType handOffCancelledItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType dragCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType dataTransferFinishedBlock;

- (unsigned short)cancelDrag;
- (unsigned short)beginDragWithConfiguration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)takeInsideAppSourceOperationMask:outsideAppSourceOperationMask:prefersFullSizePreview: /* Error: Ran out of types for this method. */;
- (unsigned short)dirtyItems: /* Error: Ran out of types for this method. */;
- (unsigned short)dragDidExitApp;
- (unsigned short)addItems:withOldItemCollection: /* Error: Ran out of types for this method. */;

@end
