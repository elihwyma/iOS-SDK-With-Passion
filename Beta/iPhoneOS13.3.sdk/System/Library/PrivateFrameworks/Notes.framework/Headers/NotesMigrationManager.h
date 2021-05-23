/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@interface NotesMigrationManager : NSObject

- (_Bool)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 managedObjectModel:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (_Bool)areStoreMetadata:(id)arg1 matchingEntityVersionsInModel:(id)arg2;
- (_Bool)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 sourceModel:(id)arg4 destinationModel:(id)arg5 mappingModel:(id)arg6 error:(id *)arg7;

@end
