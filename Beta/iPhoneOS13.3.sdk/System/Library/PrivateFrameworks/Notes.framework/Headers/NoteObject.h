/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <CoreData/NSManagedObject.h>

@class NSArray, NSData, NSDate, NSNumber, NSSet, NSString, NSURL, NoteBodyObject, NoteStoreObject;

@interface NoteObject : NSManagedObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isModernNote;
@property (nonatomic, readonly) NSArray *noteCellKeyPaths;
@property (retain, nonatomic) NSNumber *externalFlags;
@property (retain, nonatomic) NSNumber *externalServerIntId;
@property (retain, nonatomic) NSNumber *deletedFlag;
@property (retain, nonatomic) NSNumber *externalSequenceNumber;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *contentType;
@property (retain, nonatomic) NSNumber *containsCJK;
@property (retain, nonatomic) NoteBodyObject *body;
@property (retain, nonatomic) NSSet *attachments;
@property (retain, nonatomic) NoteStoreObject *store;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSString *content;
@property (nonatomic, readonly) NSString *contentAsPlainText;
@property (nonatomic, readonly) NSString *contentAsPlainTextPreservingNewlines;
@property (nonatomic) _Bool isPlainText;
@property (nonatomic, readonly) NSURL *noteId;
@property (nonatomic, readonly) _Bool isMarkedForDeletion;
@property (nonatomic, readonly) _Bool isBeingMarkedForDeletion;
@property (retain, nonatomic) NSNumber *isBookkeepingEntry;
@property (retain, nonatomic) NSString *serverId;
@property (nonatomic, readonly) _Bool hasValidServerIntId;
@property (nonatomic) long long serverIntId;
@property (retain, nonatomic, readonly) NSString *guid;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSData *externalRepresentation;
@property (retain, nonatomic) NSString *externalContentRef;
@property (nonatomic) unsigned long long sequenceNumber;

- (id)identifier;
- (id)accountName;
- (_Bool)containsAttachments;
- (unsigned long long)searchResultType;
- (id)contentIdentifier;
- (id)folderName;
- (void)markForDeletion;
- (id)noteAsPlainTextWithoutTitle;
- (id)userActivityContentAttributeSet;
- (_Bool)isPasswordProtected;
- (_Bool)isSharedViaICloud;
- (_Bool)isSharedViaICloudFolder;
- (_Bool)isSharedReadOnly;
- (_Bool)isMovable;
- (id)trimmedTitle;
- (id)folderNameForNoteList;
- (long long)visibilityTestingType;
- (unsigned long long)searchResultsSection;
- (_Bool)searchResultCanBeDeletedFromNoteContext;
- (_Bool)isHiddenFromSearch;
- (id)authorsExcludingCurrentUser;
- (id)contentInfoText;
- (id)dateForCurrentSortType;
- (id)searchIndexingIdentifier;
- (id)searchDomainIdentifier;
- (id)searchableItemAttributeSet;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)defaultTitleForEmptyNote;
- (_Bool)belongsToCollection:(id)arg1;

@end
