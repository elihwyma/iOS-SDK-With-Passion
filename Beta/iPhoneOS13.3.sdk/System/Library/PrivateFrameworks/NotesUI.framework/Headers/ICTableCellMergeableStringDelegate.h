/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSUUID;

@protocol ICTableCellMergeableStringObserving;

@interface ICTableCellMergeableStringDelegate : NSObject

{
    id <ICTableCellMergeableStringObserving> _changeObserver;
    NSUUID *_columnID;
    NSUUID *_rowID;
    unsigned long long _editingCount;
    NSMutableArray *_undoCommands;
}

@property (weak, nonatomic, readonly) id <ICTableCellMergeableStringObserving> changeObserver;
@property (nonatomic, readonly) NSUUID *columnID;
@property (nonatomic, readonly) NSUUID *rowID;
@property (nonatomic) unsigned long long editingCount;
@property (retain, nonatomic) NSMutableArray *undoCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)beginEditing;
- (void)endEditing;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (_Bool)wantsUndoCommands;
- (void)addUndoCommand:(id)arg1;
- (id)initWithTableCellChangeObserver:(id)arg1 columnID:(id)arg2 rowID:(id)arg3;

@end
