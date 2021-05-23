/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol UIInteractiveUndoHUDActionDelegate <Swift>

- (unsigned short)canRedo;
- (unsigned short)canUndo;
- (unsigned short)undo: /* Error: Ran out of types for this method. */;
- (unsigned short)redo: /* Error: Ran out of types for this method. */;
- (unsigned short)canCut;
- (unsigned short)canCopy;
- (unsigned short)canPaste;
- (unsigned short)cutOperation;
- (unsigned short)copyOperation;
- (unsigned short)pasteOperation;

@end
