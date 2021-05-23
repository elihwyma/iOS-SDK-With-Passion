/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetCollectionActionManager.h>

@class NSDictionary, NSMapTable, NSString, PXAssetCollectionActionPerformer;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager

{
    NSMapTable *__actionTypeByBarButtonItem;
    NSDictionary *__performerClassesByType;
    PXAssetCollectionActionPerformer *__activePerformer;
}

@property (nonatomic, readonly) NSMapTable *_actionTypeByBarButtonItem;
@property (nonatomic, readonly) NSDictionary *_performerClassesByType;
@property (retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)canPerformActionType:(id)arg1;
- (void)performActivity:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;
- (id)actionPerformerForActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)systemImageNameForActionType:(id)arg1;
- (Class)_firstPossiblePerformerForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (id)alertActionForActionType:(id)arg1;
- (id)activityForActionType:(id)arg1;
- (void)_handleBarButtonItem:(id)arg1;
- (void)_executeActionTypeIfPossible:(id)arg1;
- (void)_handleActionPerformerComplete:(id)arg1 success:(_Bool)arg2 error:(id)arg3;

@end
