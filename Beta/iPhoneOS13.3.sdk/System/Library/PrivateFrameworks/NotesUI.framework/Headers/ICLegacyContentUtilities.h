/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICLegacyContentUtilities : NSObject

+ (id)generateContentID;
+ (id)suggestedFilenameForURL:(id)arg1 mimeType:(id)arg2;
+ (id)createAttachmentWithContentID:(id)arg1 mimeType:(id)arg2 data:(id)arg3 filename:(id)arg4 inContext:(struct NoteContext *)arg5;
+ (id)contentStringFromWebArchive:(id)arg1;
+ (id)createAttachmentFromWebResource:(id)arg1 inContext:(struct NoteContext *)arg2;
+ (id)newNoteBasedOnModernNote:(id)arg1 inFolder:(id)arg2 context:(struct NoteContext *)arg3;

@end
