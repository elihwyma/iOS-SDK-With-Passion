/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Accounts/ACAccount.h>

@interface ACAccount (IC)

- (_Bool)ic_isManagedAppleID;
- (_Bool)ic_shouldCreateSeparatePersistentStore;
- (_Bool)ic_isNotesEnabled;
- (_Bool)ic_isNotesMigrated;
- (_Bool)ic_isPrimaryAppleAccount;
- (_Bool)ic_isICloudNotesAccount;
- (_Bool)ic_isBasicAccountClass;
- (_Bool)ic_hasICloudEmailAddress;
- (_Bool)ic_isFullAccountClass;
- (_Bool)ic_hasPersonaIdentifier;
- (_Bool)ic_supportsModernNotes;
- (_Bool)ic_supportsHTMLNotes;

@end
