/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKAddedToDocumentContext : NSObject

+ (id)movingContext;
+ (id)unhidingContext;
+ (id)unarchivingContext;
+ (id)importingContextWithImporterID:(id)arg1;
+ (id)importingMasterTemplateContextWithImporterID:(id)arg1;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)dragMoveContext;
+ (id)dragCopyContext;
+ (id)insertingPrototypeContext;
+ (id)undoDeleteContext;
+ (id)exportFootnoteContext;
+ (id)changeTrackingSubstorageForCopyContext;

- (_Bool)wasUnarchived;
- (_Bool)autoUpdateSmartFields;
- (id)importerID;
- (_Bool)wasImportedFromMasterTemplate;
- (struct __CFDictionary *)tableIDMap;
- (void)setTableIDMap:(struct __CFDictionary *)arg1;
- (_Bool)wasPasted;
- (_Bool)uniqueBookmarks;
- (_Bool)syncChanges;
- (_Bool)matchStyle;
- (_Bool)wasDragOperation;
- (_Bool)wasDragMoved;
- (_Bool)wasMoved;
- (id)undoContext;
- (_Bool)wasUnhidden;
- (_Bool)wasUndoDelete;
- (_Bool)exportingFootnotes;
- (_Bool)changeTrackingSubstorage;
- (_Bool)wasImported;
- (_Bool)invokeDOLC;

@end
