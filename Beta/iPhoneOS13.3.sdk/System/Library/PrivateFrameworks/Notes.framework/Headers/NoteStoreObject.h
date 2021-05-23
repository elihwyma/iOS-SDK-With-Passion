/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Notes/NoteCollectionObject.h>

@class NSSet, NSString, NoteAccountObject;

@interface NoteStoreObject : NoteCollectionObject

@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NoteAccountObject *account;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *changes;
@property (retain, nonatomic) NSString *syncAnchor;

- (id)collectionInfo;
- (id)predicateForNotes;
- (id)notesForIntegerIds:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)basicAccountIdentifier;
- (id)notesForServerIntIds:(id)arg1 ascending:(_Bool)arg2 limit:(unsigned long long)arg3;
- (id)notesForServerIntIdsInRange:(struct _NSRange)arg1 ascending:(_Bool)arg2 limit:(unsigned long long)arg3;
- (id)notesForServerIds:(id)arg1;
- (id)notesForGUIDs:(id)arg1;
- (id)notesForServerIntIds:(id)arg1;
- (id)notesForServerIntIdsInRange:(struct _NSRange)arg1;
- (unsigned int)maximumServerIntId;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1;

@end
