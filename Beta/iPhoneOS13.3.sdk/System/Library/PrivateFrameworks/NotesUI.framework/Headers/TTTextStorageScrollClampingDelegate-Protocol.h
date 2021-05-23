/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/Swift-Protocol.h>

@protocol TTTextStorageScrollClampingDelegate <Swift>

- (unsigned short)clampTextView;
- (unsigned short)unclampTextView;
- (unsigned short)willBeginPostLayoutFixupAfterEditing;
- (unsigned short)didEndPostLayoutFixupAfterEditing;

@end
