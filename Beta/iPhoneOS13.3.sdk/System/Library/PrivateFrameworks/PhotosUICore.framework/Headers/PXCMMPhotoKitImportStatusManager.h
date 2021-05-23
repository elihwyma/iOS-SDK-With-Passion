/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSString;

@interface PXCMMPhotoKitImportStatusManager : NSObject

{
    NSHashTable *_statusObservers;
    NSMutableDictionary *_simulatedStateByAssetID;
    _Bool _supportsStateSimulation;
}

@property (nonatomic, readonly) _Bool supportsStateSimulation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)importStateForAsset:(id)arg1;
- (void)addAssetImportStatusObserver:(id)arg1;
- (void)removeAssetImportStatusObserver:(id)arg1;
- (id)initAllowingSimulation:(_Bool)arg1;
- (void)_notifySimulationObserversForAssetReference:(id)arg1;
- (void)beginSimulatedImportForAssetReference:(id)arg1;
- (void)completeSimulatedImportForAssetReference:(id)arg1 withSuccess:(_Bool)arg2;
- (long long)_simulatedStateForAsset:(id)arg1;

@end
