//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/PUTransientDataSource-Protocol.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface CAMTransientDataSource : NSObject <PUTransientDataSource>
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

@property(nonatomic, setter=_setPendingChangeNotifications:) long long _pendingChangeNotifications; // @synthesize _pendingChangeNotifications=__pendingChangeNotifications;
@property(nonatomic, setter=_setNestedPerformChanges:) long long _nestedPerformChanges; // @synthesize _nestedPerformChanges=__nestedPerformChanges;
@property(readonly, nonatomic) NSMutableDictionary *_enqueuedBurstConvertiblesByAssetUUID; // @synthesize _enqueuedBurstConvertiblesByAssetUUID=__enqueuedBurstConvertiblesByAssetUUID;
@property(readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetUUIDByBurstIdentifier; // @synthesize _enqueuedBurstAssetUUIDByBurstIdentifier=__enqueuedBurstAssetUUIDByBurstIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_representativeAssetsByBurstIdentifier; // @synthesize _representativeAssetsByBurstIdentifier=__representativeAssetsByBurstIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_assetsByUUID; // @synthesize _assetsByUUID=__assetsByUUID;
@property(readonly, nonatomic) NSMutableArray *_assetUUIDs; // @synthesize _assetUUIDs=__assetUUIDs;
@property(readonly, nonatomic) NSHashTable *_observers; // @synthesize _observers=__observers;
// - (void).cxx_destruct;
- (void)_notifyObserversOfDataSourceChange;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (id)transientBurstMapping;
- (id)transientAssetMapping;
- (id)uuids;
- (void)processPendingBurstAssets;
- (void)enqueuePendingBurstAssetWithConvertible:(id)arg1;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *existingBurstIdentifiers;
- (void)removeAssetWithUUID:(id)arg1;
- (void)removeAllAssets;
- (BOOL)_removeAssetWithUUID:(id)arg1;
- (void)updateAssetWithConvertible:(id)arg1;
- (id)insertAssetWithConvertible:(id)arg1;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)arg1;
- (id)existingAssetForUUID:(id)arg1;
- (id)existingAssetUUIDs;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, copy) NSString *description;
- (id)init;

@end

