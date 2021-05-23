/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSArray, NSBatchDeleteRequest, NSFetchRequest, NSSQLFetchRequestContext, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLBatchDeleteRequestContext : NSSQLStoreRequestContext

{
    NSFetchRequest *_fetchRequestForObjectsToDelete;
    NSArray *_deleteStatements;
    NSArray *_deletedObjectIDs;
    NSSQLFetchRequestContext *_fetchContext;
    NSArray *_externalDataReferenceTriggerStatements;
    NSString *_tempTableName;
    NSArray *_externalDataReferencesToDelete;
    NSArray *_fileBackedFuturesToDelete;
}

@property (nonatomic, readonly) NSBatchDeleteRequest *request;
@property (retain, nonatomic, readonly) NSFetchRequest *fetchRequestForObjectsToDelete;
@property (retain, nonatomic, readonly) NSArray *deleteStatements;
@property (retain, nonatomic, readonly) NSSQLFetchRequestContext *fetchContext;
@property (retain, nonatomic) NSArray *affectedObjectIDs;
@property (retain, nonatomic) NSArray *exernalDataReferenceStatements;
@property (retain, nonatomic) NSString *tempTableName;
@property (retain, nonatomic) NSArray *externalDataReferencesToDelete;
@property (retain, nonatomic) NSArray *fileBackedFuturesToDelete;

- (void)dealloc;
- (_Bool)isWritingRequest;
- (_Bool)executeRequestCore:(id *)arg1;
- (id)_createFetchRequestContextForObjectsToDelete;
- (void)_createDeleteStatements;
- (void)executePrologue;

@end
