/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Notes/NoteCollectionObject.h>

@class NSDictionary, NSNumber, NSSet, NSString, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject

{
    NSDictionary *_constraints;
    NSNumber *_preventMovingNotesToOtherAccounts;
}

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *constraintsPath;
@property (retain, nonatomic) NSDictionary *constraints;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSSet *stores;
@property (retain, nonatomic) NoteStoreObject *defaultStore;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) int accountType;
@property (retain, nonatomic) NSString *pathToConstraintsPlist;
@property (nonatomic) _Bool didChooseToMigrate;
@property (nonatomic, readonly) _Bool preventMovingNotesToOtherAccounts;
@property (nonatomic, readonly) _Bool isICloudIMAPAccount;

+ (_Bool)shouldDataAccessCreateAccountForACAccount:(id)arg1;

- (void)didTurnIntoFault;
- (void)willSave;
- (id)collectionInfo;
- (id)predicateForNotes;
- (_Bool)shouldMarkNotesAsDeleted;
- (id)storeForExternalId:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)basicAccountIdentifier;
- (_Bool)isAllNotesContainer;
- (_Bool)validateDefaultStore:(id *)arg1 error:(id *)arg2;

@end
