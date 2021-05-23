/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface NoteCollectionObject : NSManagedObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isAllNotesContainer;

- (id)collectionInfo;
- (id)predicateForNotes;
- (_Bool)supportsVisibilityTestingType:(long long)arg1;
- (id)predicateForSearchableNotes;
- (id)predicateForSearchableAttachments;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)basicAccountIdentifier;

@end
