/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/Swift-Protocol.h>

@class NSArray;

@protocol ICSearchIndexableNote <Swift>

@property (nonatomic, readonly) _Bool isModernNote;
@property (nonatomic, readonly) NSArray *noteCellKeyPaths;

- (unsigned short)identifier;
- (unsigned short)title;
- (unsigned short)accountName;
- (unsigned short)folderName;
- (unsigned short)noteAsPlainTextWithoutTitle;
- (unsigned short)isPasswordProtected;
- (unsigned short)isSharedViaICloud;
- (unsigned short)isSharedViaICloudFolder;
- (unsigned short)isSharedReadOnly;
- (unsigned short)trimmedTitle;
- (unsigned short)folderNameForNoteList;
- (unsigned short)contentInfoText;
- (unsigned short)dateForCurrentSortType;

@end
