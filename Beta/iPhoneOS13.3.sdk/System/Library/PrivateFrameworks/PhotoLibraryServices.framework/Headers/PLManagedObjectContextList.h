/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface PLManagedObjectContextList : NSObject

{
    struct os_unfair_lock_s _lock;
    NSHashTable *_contexts;
}

- (id)init;
- (id)allContexts;
- (void)addContext:(id)arg1;
- (id)allContextsNotIdenticalTo:(id)arg1;

@end
