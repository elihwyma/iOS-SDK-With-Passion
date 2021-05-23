/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXActionManager.h>

@class NSDictionary, PXCuratedLibraryFilterActionPerformer, PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionManager : PXActionManager

{
    PXCuratedLibraryFilterActionPerformer *_filterActionPerformer;
    NSDictionary *_actionPerformersByType;
    NSDictionary *_assetCollectionActionPerformersByType;
    NSDictionary *_constructorSpecificActionPerformersByType;
    PXCuratedLibraryViewModel *_viewModel;
}

@property (nonatomic, readonly) NSDictionary *actionPerformersByType;
@property (nonatomic, readonly) NSDictionary *assetCollectionActionPerformersByType;
@property (nonatomic, readonly) NSDictionary *constructorSpecificActionPerformersByType;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (readonly) PXCuratedLibraryFilterActionPerformer *filterActionPerformer;

+ (id)actionsWithActionPerformers;

- (id)init;
- (_Bool)canPerformActionType:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)actionPerformerForActionType:(id)arg1 withAssetCollectionReference:(id)arg2;
- (id)showAllActionPerformerWithAssetCollectionReference:(id)arg1;
- (id)ellipsisButtonActionPerformerWithAssetCollectionReference:(id)arg1;
- (id)toggleAspectFitPerformerWithLayout:(id)arg1;
- (id)showMapPerformerWithAssetCollectionReference:(id)arg1 fetchResult:(id)arg2;
- (id)tapToRadarPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2;
- (id)actionPerformerForHitTestResult:(id)arg1;

@end
