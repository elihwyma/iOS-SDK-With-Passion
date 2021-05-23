/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PLUpdatedOrderKeys : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _isObservingOrderKeys;
    NSSet *_observedRelationships;
    NSMutableDictionary *_updatedOrderKeyObjectIDs;
}

@property (readonly) _Bool isObservingOrderKeys;

- (id)init;
- (_Bool)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;
- (_Bool)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;
- (id)_persistentStoresForContext:(id)arg1;
- (id)getAndClearUpdatedOrderKeys;
- (void)persistentStoreDidUpdateOrderKeys:(id)arg1;

@end
