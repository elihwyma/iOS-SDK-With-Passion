/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSBatchUpdateRequest, NSFetchRequest, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSSQLBatchUpdateRequestContext : NSSQLStoreRequestContext

{
    NSSQLiteStatement *_updateStatement;
    NSFetchRequest *_fetchRequest;
}

@property (nonatomic, readonly) NSBatchUpdateRequest *request;
@property (nonatomic, readonly) NSSQLiteStatement *updateStatement;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (_Bool)isWritingRequest;
- (_Bool)executeRequestCore:(id *)arg1;
- (void)executePrologue;
- (id)tempTableName;
- (id)createObjectIDCaptureStatements;
- (id)dropObjectIDCaptureStatements;
- (id)fetchRequestDescribingObjectsToUpdate;
- (void)_createUpdateStatement;
- (id)createFetchRequestContextForObjectsToUpdate;

@end
