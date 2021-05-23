/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICPaths : NSObject

+ (id)managedObjectModelURL;
+ (id)URLForGroupContainerWithIdentifier:(id)arg1;
+ (id)applicationDocumentsURL;
+ (id)attributesForGroupContainerDirectory;
+ (void)setApplicationDocumentsURL:(id)arg1;
+ (id)persistentStoreURL;
+ (id)applicationDataContainerURL;
+ (void)setIsReadOnlyPersistentStore:(_Bool)arg1;
+ (_Bool)isReadOnlyPersistentStore;
+ (id)accountsDirectoryURL;
+ (id)importDocumentsURL;
+ (id)previewImageDirectoryURLForAccount:(id)arg1;
+ (id)oldManagedObjectModelURL;

@end
