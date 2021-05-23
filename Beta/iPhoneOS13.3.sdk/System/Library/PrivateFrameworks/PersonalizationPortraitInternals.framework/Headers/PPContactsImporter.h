/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPContactsImporter : NSObject

+ (id)defaultInstance;

- (id)init;
- (void)_registerForNotifications;
- (void)importContactsDataWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (_Bool)importScoredContact:(id)arg1 contactsIdentifier:(id)arg2 error:(id *)arg3;
- (id)_entitiesForScoredContact:(id)arg1;
- (void)_stashImportedContactsIdentifiers:(id)arg1;
- (void)_removeStashedImportedContacts;
- (id)_loadContactIdentifiersAlreadyImportedInPastDay;

@end
