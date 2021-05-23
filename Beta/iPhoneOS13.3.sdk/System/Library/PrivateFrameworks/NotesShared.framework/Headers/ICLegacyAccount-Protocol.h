/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/Swift-Protocol.h>

@protocol ICLegacyAccount <Swift>

- (unsigned short)name;
- (unsigned short)objectID;
- (unsigned short)accountIdentifier;
- (unsigned short)managedObjectContext;
- (unsigned short)emailAddress;
- (unsigned short)folders;
- (unsigned short)objectIdentifier;
- (unsigned short)isManaged;
- (unsigned short)supportsAttachments;
- (unsigned short)preventMovingNotesToOtherAccounts;
- (unsigned short)defaultFolder;
- (unsigned short)localizedAttachmentsNotSupportedReason;

@end
