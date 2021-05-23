/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMActionPerformer.h>

@protocol PXGridPresentation;

@interface PXCMMShowPhotosPickerActionPerformer : PXCMMActionPerformer

{
    id <PXGridPresentation> _gridPresentation;
}

@property (nonatomic, readonly) id <PXGridPresentation> gridPresentation;

- (id)performActionWithSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performPhotosPickerActionWithSession:(id)arg1 gridPresentation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
