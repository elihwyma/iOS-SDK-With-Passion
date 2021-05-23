/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Notes/NoteAccountObject.h>

@class NSString;

@interface NoteAccountObject (ICLegacyAccount)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)emailAddress;
- (id)folders;
- (id)objectIdentifier;
- (_Bool)isManaged;
- (_Bool)supportsAttachments;
- (id)defaultFolder;
- (id)localizedAttachmentsNotSupportedReason;

@end
