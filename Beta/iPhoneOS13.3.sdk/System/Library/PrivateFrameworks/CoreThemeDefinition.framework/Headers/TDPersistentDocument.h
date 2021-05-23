/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSString, NSURL;

@interface TDPersistentDocument : NSObject

{
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSURL *_fileURL;
    NSString *_fileType;
    NSURL *_temporaryFileURL;
}

@property (copy, nonatomic) NSURL *temporaryFileURL;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *fileType;

+ (id)_fileModificationDateForURL:(id)arg1;

- (void)dealloc;
- (void)close;
- (id)displayName;
- (id)managedObjectModel;
- (id)managedObjectContext;
- (id)undoManager;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (_Bool)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id *)arg5;
- (id)_persistentStoreCoordinator;
- (void)setManagedObjectContext:(id)arg1;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (_Bool)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)saveDocument:(id)arg1;

@end
