/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/TTMergeableString.h>

@interface TTMergeableUndoString : TTMergeableString

- (void)deleteSubstrings:(vector_c5c053b6 *)arg1 withCharacterRanges:(vector_7053a16b *)arg2;
- (struct TopoIDRange)insertAttributedString:(id)arg1 after:(struct TopoSubstring *)arg2 before:(struct TopoSubstring *)arg3;
- (void)addUndoCommand:(id)arg1;
- (void)applyUndoCommand:(id)arg1;
- (void)undeleteSubstrings:(vector_252d7b3a *)arg1;

@end
