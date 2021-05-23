/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Notes/NoteAttachmentObject.h>

@class NSString;

@interface NoteAttachmentObject (ICLegacyAttachment)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)identifier;
- (id)fileURL;
- (id)typeUTI;
- (id)cidURL;

@end
