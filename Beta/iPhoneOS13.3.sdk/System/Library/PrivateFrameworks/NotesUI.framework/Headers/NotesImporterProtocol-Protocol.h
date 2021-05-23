/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@protocol NotesImporterProtocol

- (unsigned short)parseHTMLStringFromEvernoteContentString:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)countEvernoteNotesFromBookmarkData:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)parseTitleFromHTMLString:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)archiveEvernoteNotesFromBookmarkData:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)unarchiveEvernoteNoteFromArchiveId:noteArchiveId:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)unarchiveEvernoteResourceFromArchiveId:resourceArchiveId:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)cleanupArchiveId:completionBlock: /* Error: Ran out of types for this method. */;

@end
