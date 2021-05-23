/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimation : NSObject <Swift>

{
    _Bool _didBeginAnimation;
    UIDragItem *_dragItem;
    NSMutableArray *_animationsBlocks;
    NSMutableArray *_completionBlocks;
}

@property (retain, nonatomic) UIDragItem *dragItem;
@property (retain, nonatomic) NSMutableArray *animationsBlocks;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic, getter=_didBeginAnimation, setter=_setDidBeginAnimation:) _Bool didBeginAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDragItem:(id)arg1;
- (void)_addClientBlocksToAnimator:(id)arg1;
- (void)_executeCompletionBlocks;

@end
