/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Notes/Swift-Protocol.h>

@class MISSING_TYPE, NSArray;

@protocol ICSearchIndexableNote <Swift>

@property (nonatomic, readonly) _Bool isModernNote;
@property (nonatomic, readonly) NSArray *noteCellKeyPaths;

- (MISSING_TYPE *)identifier;
- (MISSING_TYPE *)title;
- (MISSING_TYPE *)accountName;
- (MISSING_TYPE *)folderName;
- (MISSING_TYPE *)noteAsPlainTextWithoutTitle;
- (MISSING_TYPE *)isPasswordProtected;
- (MISSING_TYPE *)isSharedViaICloud;
- (MISSING_TYPE *)isSharedViaICloudFolder;
- (MISSING_TYPE *)isSharedReadOnly;
- (MISSING_TYPE *)trimmedTitle;
- (MISSING_TYPE *)folderNameForNoteList;
- (MISSING_TYPE *)contentInfoText;
- (MISSING_TYPE *)dateForCurrentSortType;

@end
