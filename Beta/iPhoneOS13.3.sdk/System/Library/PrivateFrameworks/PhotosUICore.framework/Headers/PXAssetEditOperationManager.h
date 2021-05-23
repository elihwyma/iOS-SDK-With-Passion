/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary;

@interface PXAssetEditOperationManager : NSObject

{
    NSMutableDictionary *_pendingPerformersByAsset;
    NSMutableDictionary *_operationStatusByAsset;
    NSMapTable *_observersWithContexts;
    NSMutableArray *_predicateRecords;
}

@property (nonatomic, readonly) NSMutableDictionary *pendingPerformersByAsset;
@property (nonatomic, readonly) NSMutableDictionary *operationStatusByAsset;
@property (nonatomic, readonly) NSMapTable *observersWithContexts;
@property (nonatomic, readonly) NSMutableArray *predicateRecords;

+ (id)sharedManager;

- (id)init;
- (_Bool)canPerformEditOperationWithType:(id)arg1 onAsset:(id)arg2;
- (id)performEditOperationWithType:(id)arg1 asset:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)performEditOperationWithType:(id)arg1 asset:(id)arg2 delay:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)registerPerformerClass:(Class)arg1 withPredicate:(CDUnknownBlockType)arg2;
- (long long)editOperationStatusForAsset:(id)arg1;
- (id)_performerForEditOperationWithType:(id)arg1 onAsset:(id)arg2;
- (Class)_performerClassForEditOperationWithType:(id)arg1 onAsset:(id)arg2;
- (void)enumerateEditOperationsPerformedOnAsset:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)registerObserver:(id)arg1 context:(void *)arg2;
- (void)unregisterObserver:(id)arg1 context:(void *)arg2;
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)_addPendingPerformer:(id)arg1;
- (void)_removePendingPerformer:(id)arg1;
- (void)_updateOperationStatusForAsset:(id)arg1;
- (void)_signalStatusChangeForAsset:(id)arg1;
- (void)_signalPendingPerformersChangeForAsset:(id)arg1;
- (void)_handleCompletionOfPerformer:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3 externalCompletionHandler:(CDUnknownBlockType)arg4;

@end
