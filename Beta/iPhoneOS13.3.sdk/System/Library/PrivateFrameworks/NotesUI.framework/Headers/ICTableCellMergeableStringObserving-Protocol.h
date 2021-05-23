/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/Swift-Protocol.h>

@protocol ICTableUndoHelping;

@protocol ICTableCellMergeableStringObserving <Swift>

@property (nonatomic, readonly) id <ICTableUndoHelping> undoHelper;
@property (nonatomic, readonly) _Bool shouldPreventUndoCommands;

- (unsigned short)tableCellWasEditedAtColumnID:rowID:edited:range:changeInLength: /* Error: Ran out of types for this method. */;

@end
