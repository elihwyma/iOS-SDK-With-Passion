/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (PLManagedObjectContext)

+ (_Bool)shouldHavePhotoLibrary;

- (id)pathManager;
- (id)libraryBundle;
- (id)photoLibrary;
- (_Bool)isUserInterfaceContext;
- (_Bool)pl_performWithOptions:(unsigned long long)arg1 andBlock:(CDUnknownBlockType)arg2;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long *)arg2 batchSize:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 shouldRefreshAfterSave:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)enumerateWithIncrementalSaveUsingObjects:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)pl_refresh;
- (id)enumerateObjectsFromFetchRequest:(id)arg1 count:(unsigned long long *)arg2 usingDefaultBatchSizeWithBlock:(CDUnknownBlockType)arg3;
- (id)deleteObjectsWithIncrementalSave:(id)arg1;
- (id)pl_resultWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)pl_executeBatchUpdateRequest:(id)arg1 withBatchSize:(unsigned long long)arg2 error:(id *)arg3;

@end
