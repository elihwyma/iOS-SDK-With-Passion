/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSPersistentStoreResult.h>

@class NSError, NSManagedObjectContext, NSProgress;

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult

{
    NSProgress *_requestProgress;
    NSError *_requestError;
    NSManagedObjectContext *_requestContext;
    id _requestCompletionBlock;
    int _flags;
}

@property (retain) NSProgress *progress;
@property (retain) NSError *operationError;
@property (copy) id requestCompletionBlock;
@property (readonly) NSManagedObjectContext *managedObjectContext;

- (void)dealloc;
- (void)cancel;
- (_Bool)_isCancelled;
- (id)initWithContext:(id)arg1 andProgress:(id)arg2 completetionBlock:(id)arg3;
- (void)_cancelProgress;

@end
