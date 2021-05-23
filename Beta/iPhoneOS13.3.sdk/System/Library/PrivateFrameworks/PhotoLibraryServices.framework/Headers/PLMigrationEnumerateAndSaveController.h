/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSError, NSFetchRequest, NSManagedObjectContext, NSOperationQueue, NSString, PLModelMigrator, PLPhotoLibraryBundle;

@interface PLMigrationEnumerateAndSaveController : NSObject

{
    _Bool _succeeded;
    NSString *_operationName;
    PLModelMigrator *_migrator;
    NSManagedObjectContext *_originalContext;
    PLPhotoLibraryBundle *_migrationBundle;
    NSFetchRequest *_originalFetchRequest;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _processResultsBlock;
    NSError *_firstError;
}

@property (retain, nonatomic) NSString *operationName;
@property (retain, nonatomic) PLModelMigrator *migrator;
@property (retain, nonatomic) NSManagedObjectContext *originalContext;
@property (retain, nonatomic) PLPhotoLibraryBundle *migrationBundle;
@property (retain, nonatomic) NSFetchRequest *originalFetchRequest;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy, nonatomic) CDUnknownBlockType processResultsBlock;
@property (nonatomic) _Bool succeeded;
@property (retain, nonatomic) NSError *firstError;

- (id)initWithName:(id)arg1 fetchRequest:(id)arg2 context:(id)arg3 modelMigrator:(id)arg4 concurrent:(_Bool)arg5 processResultBlock:(CDUnknownBlockType)arg6;
- (void)_runOperationWithObjectIDs:(id)arg1;
- (_Bool)processObjectsWithError:(id *)arg1;

@end
