/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSUndoManager.h>

@interface NSUndoManager (IC)

@property (nonatomic, readonly) _Bool ic_isUndoingOrRedoing;

- (void)ic_performUndoGroupWithActionName:(id)arg1 undoGroup:(CDUnknownBlockType)arg2;
- (void)ic_performUndoGroup:(CDUnknownBlockType)arg1;

@end
