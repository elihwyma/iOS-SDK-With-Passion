/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/Swift-Protocol.h>

@protocol TTMergeableStringDelegate <Swift>

- (unsigned short)beginEditing;
- (unsigned short)endEditing;
- (unsigned short)edited:range:changeInLength: /* Error: Ran out of types for this method. */;
- (unsigned short)wantsUndoCommands;
- (unsigned short)addUndoCommand: /* Error: Ran out of types for this method. */;

@end
