/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/TTMergeableStringUndoGroup.h>

@class ICTableAttachmentSelection, ICTableUndoTarget, NSUUID;

@interface ICTableCellEditingUndoGroup : TTMergeableStringUndoGroup

{
    NSUUID *_columnID;
    NSUUID *_rowID;
    ICTableAttachmentSelection *_tableSelection;
    ICTableUndoTarget *_undoTarget;
}

@property (nonatomic, readonly) NSUUID *columnID;
@property (nonatomic, readonly) NSUUID *rowID;
@property (nonatomic, readonly) ICTableAttachmentSelection *tableSelection;
@property (nonatomic, readonly) ICTableUndoTarget *undoTarget;

- (id)init;
- (id)initWithColumn:(id)arg1 row:(id)arg2 selection:(id)arg3 undoTarget:(id)arg4;

@end
