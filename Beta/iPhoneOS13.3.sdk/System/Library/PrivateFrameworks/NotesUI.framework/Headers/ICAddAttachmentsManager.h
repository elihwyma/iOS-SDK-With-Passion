/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICAddAttachmentsManager : NSObject

+ (id)sharedManager;

- (void)saveAttachments:(id)arg1 toNote:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4 fetchFirst:(_Bool)arg5;
- (id)saveAttachmentsToNewNote:(id)arg1 inFolder:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4;
- (void)saveAttachments:(id)arg1 toNote:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4;

@end
