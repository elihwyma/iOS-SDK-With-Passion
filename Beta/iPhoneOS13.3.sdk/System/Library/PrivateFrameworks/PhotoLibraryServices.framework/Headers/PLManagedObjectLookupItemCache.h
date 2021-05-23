/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PLManagedObjectContext, PLPhotoLibraryPathManager;

@interface PLManagedObjectLookupItemCache : NSObject

{
    NSMutableDictionary *_objectIDsByKey;
    PLManagedObjectContext *_creationContext;
    PLPhotoLibraryPathManager *_pathManager;
    struct os_unfair_lock_s _cacheLock;
}

- (id)initWithPathManager:(id)arg1;
- (void)invalidateWithReason:(id)arg1;
- (void)setObjectID:(id)arg1 forKey:(id)arg2;
- (id)objectIDForKey:(id)arg1;
- (id)createObjectIfNecessaryForKey:(id)arg1 withManagedObjectContext:(id)arg2 createBlock:(CDUnknownBlockType)arg3;

@end
