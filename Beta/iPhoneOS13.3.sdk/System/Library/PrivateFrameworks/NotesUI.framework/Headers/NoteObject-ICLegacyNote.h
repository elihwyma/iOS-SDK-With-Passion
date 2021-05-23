/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Notes/NoteObject.h>

@class NSString;

@interface NoteObject (ICLegacyNote)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)htmlString;
- (void)setHtmlString:(id)arg1;
- (id)folder;
- (id)createAttachmentWithName:(id)arg1;

@end
