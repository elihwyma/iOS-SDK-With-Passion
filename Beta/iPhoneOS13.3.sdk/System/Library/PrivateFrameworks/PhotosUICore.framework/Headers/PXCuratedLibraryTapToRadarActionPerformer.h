/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryAssetCollectionActionPerformer.h>

@class PXGLayout;

@interface PXCuratedLibraryTapToRadarActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

{
    PXGLayout *_layoutForDiagnosticDescription;
}

@property (weak, nonatomic, readonly) PXGLayout *layoutForDiagnosticDescription;

- (id)activityType;
- (void)performUserInteractionTask;
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)activitySystemImageName;
- (id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 diagnosticLayout:(id)arg3;

@end
