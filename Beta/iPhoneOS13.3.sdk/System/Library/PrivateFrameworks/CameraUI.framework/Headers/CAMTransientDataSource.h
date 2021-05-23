/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface CAMTransientDataSource : NSObject

{
    NSHashTable *__observers;
    NSMutableArray *__assetUUIDs;
    NSMutableDictionary *__assetsByUUID;
    NSMutableDictionary *__representativeAssetsByBurstIdentifier;
    NSMutableDictionary *__enqueuedBurstAssetUUIDByBurstIdentifier;
    NSMutableDictionary *__enqueuedBurstConvertiblesByAssetUUID;
    long long __nestedPerformChanges;
    long long __pendingChangeNotifications;
}

@property (nonatomic, readonly) NSHashTable *_observers;
@property (nonatomic, readonly) NSMutableArray *_assetUUIDs;
@property (nonatomic, readonly) NSMutableDictionary *_assetsByUUID;
@property (nonatomic, readonly) NSMutableDictionary *_representativeAssetsByBurstIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_enqueuedBurstAssetUUIDByBurstIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_enqueuedBurstConvertiblesByAssetUUID;
@property (nonatomic, setter=_setNestedPerformChanges:) long long _nestedPerformChanges;
@property (nonatomic, setter=_setPendingChangeNotifications:) long long _pendingChangeNotifications;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) NSSet *existingBurstIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (id)uuids;
- (id)transientBurstMapping;
- (id)transientAssetMapping;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)arg1;
- (void)removeAllAssets;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)arg1;
- (void)processPendingBurstAssets;
- (void)removeAssetWithUUID:(id)arg1;
- (void)updateAssetWithConvertible:(id)arg1;
- (void)enqueuePendingBurstAssetWithConvertible:(id)arg1;
- (id)existingAssetForUUID:(id)arg1;
- (id)insertAssetWithConvertible:(id)arg1;
- (id)existingAssetUUIDs;
- (void)_notifyObserversOfDataSourceChange;
- (_Bool)_removeAssetWithUUID:(id)arg1;

@end
