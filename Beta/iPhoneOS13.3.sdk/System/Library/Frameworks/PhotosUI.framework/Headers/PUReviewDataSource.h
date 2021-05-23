/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PUReviewDataSource : NSObject

{
    NSHashTable *__observers;
    NSMutableArray *__assetIdentifiers;
    NSMutableDictionary *__assetsByIdentifier;
    NSMutableDictionary *__representativeAssetsByBurstIdentifier;
    NSMutableDictionary *__enqueuedBurstAssetIdentifiersByBurstIdentifier;
    NSMutableDictionary *__enqueuedBurstAssetsByAssetIdentifier;
    long long __nestedPerformChanges;
    NSMutableSet *__updatedAssetIdentifiers;
}

@property (nonatomic, readonly) NSHashTable *_observers;
@property (nonatomic, readonly) NSMutableArray *_assetIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *_assetsByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_representativeAssetsByBurstIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_enqueuedBurstAssetIdentifiersByBurstIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_enqueuedBurstAssetsByAssetIdentifier;
@property (nonatomic, setter=_setNestedPerformChanges:) long long _nestedPerformChanges;
@property (nonatomic, readonly) NSMutableSet *_updatedAssetIdentifiers;

- (id)init;
- (id)description;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)insertAsset:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (id)existingAssetForIdentifier:(id)arg1;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)arg1;
- (void)insertAssets:(id)arg1;
- (void)replaceAsset:(id)arg1;
- (void)removeAssetWithIdentifier:(id)arg1;
- (void)removeAllAssets;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)arg1;
- (void)enqueuePendingBurstAsset:(id)arg1;
- (void)processPendingBurstAssets;
- (id)assetsByIdentifier;
- (id)orderedIdentifiers;

@end
