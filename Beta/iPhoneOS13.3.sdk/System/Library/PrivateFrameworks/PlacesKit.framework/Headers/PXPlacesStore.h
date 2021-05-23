/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSSet, NSString;

@protocol OS_dispatch_semaphore, PXPlacesGeotaggedItemDataSourceDelegate;

@interface PXPlacesStore : NSObject

{
    struct _PXQuadTreeStoreNode *_rootNode;
    _Atomic int _updateCount;
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwlock;
    NSObject<OS_dispatch_semaphore> *_itemChangeSemaphore;
    long long _numberOfItems;
    id <PXPlacesGeotaggedItemDataSourceDelegate> _delegate;
    unsigned long long _capacityPerNode;
    NSMutableSet *_itemsToAdd;
    NSMutableArray *_itemsToAddArray;
    NSMutableSet *_itemsToRemove;
    CDStruct_02837cd9 _rect;
}

@property CDStruct_02837cd9 rect;
@property (retain) NSMutableSet *itemsToAdd;
@property (retain) NSMutableArray *itemsToAddArray;
@property (retain) NSMutableSet *itemsToRemove;
@property id <PXPlacesGeotaggedItemDataSourceDelegate> delegate;
@property (readonly) unsigned long long capacityPerNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSSet *allItems;
@property (nonatomic, readonly) long long numberOfItems;

+ (id)traceStoreQueryLog;
+ (id)traceStoreLog;

- (id)init;
- (void)dealloc;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)beginUpdates;
- (void)endUpdates;
- (void)addItemsFromArray:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)_commitChanges;
- (id)findItemsInMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)minimalEncompassingMapRect;
- (id)initWithCapacityPerNode:(unsigned long long)arg1;
- (id)_findItemsInMapRect:(CDStruct_02837cd9)arg1;
- (void)runNodeDebugCollector:(CDUnknownBlockType)arg1;

@end
