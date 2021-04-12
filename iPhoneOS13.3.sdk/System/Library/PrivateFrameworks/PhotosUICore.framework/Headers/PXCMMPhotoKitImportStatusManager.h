//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetImportStatusManager-Protocol.h>

@class NSHashTable, NSMutableDictionary;

@interface PXCMMPhotoKitImportStatusManager : NSObject <PXAssetImportStatusManager>
{
    NSHashTable *_statusObservers;
    NSMutableDictionary *_simulatedStateByAssetID;
    BOOL _supportsStateSimulation;
}

@property(readonly, nonatomic) BOOL supportsStateSimulation; // @synthesize supportsStateSimulation=_supportsStateSimulation;
// - (void).cxx_destruct;
- (void)removeAssetImportStatusObserver:(id)arg1;
- (void)addAssetImportStatusObserver:(id)arg1;
- (long long)_simulatedStateForAsset:(id)arg1;
- (void)completeSimulatedImportForAssetReference:(id)arg1 withSuccess:(BOOL)arg2;
- (void)beginSimulatedImportForAssetReference:(id)arg1;
- (void)_notifySimulationObserversForAssetReference:(id)arg1;
- (long long)importStateForAsset:(id)arg1;
- (id)init;
- (id)initAllowingSimulation:(BOOL)arg1;

@end

