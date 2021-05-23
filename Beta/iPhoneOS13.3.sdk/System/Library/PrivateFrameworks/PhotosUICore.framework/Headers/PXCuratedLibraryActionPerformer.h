/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXActionPerformer.h>

@class PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionPerformer : PXActionPerformer

{
    PXCuratedLibraryViewModel *_viewModel;
    long long _actionZoomLevel;
}

@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (nonatomic, readonly) long long actionZoomLevel;

- (id)initWithActionType:(id)arg1;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;

@end
