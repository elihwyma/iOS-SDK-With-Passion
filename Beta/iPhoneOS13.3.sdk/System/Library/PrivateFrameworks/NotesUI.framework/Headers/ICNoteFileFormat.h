/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICNoteFileFormat : NSObject

+ (id)pathExtension;
+ (id)fileUTType;
+ (_Bool)importNoteFromURL:(id)arg1 toNote:(id)arg2 error:(id *)arg3;
+ (void)exportNote:(id)arg1 toURL:(id)arg2;

- (id)allowedFileTypes;
- (_Bool)canHandleFileURL:(id)arg1;
- (void)cancelParsing;
- (void)parseFileURL:(id)arg1 newNoteBlock:(CDUnknownBlockType)arg2 updatedNoteBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4 completedParsingBlock:(CDUnknownBlockType)arg5;
- (void)totalNotesFoundAtFileURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
