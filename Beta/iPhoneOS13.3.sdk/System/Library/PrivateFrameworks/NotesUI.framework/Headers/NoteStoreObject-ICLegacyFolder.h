/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Notes/NoteStoreObject.h>

@class NSString;

@interface NoteStoreObject (ICLegacyFolder)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)title;
- (id)parentFolder;
- (_Bool)isDeletedOrInTrash;
- (id)newNoteInContext:(struct NoteContext *)arg1;
- (void)addNotesObject:(id)arg1;

@end
