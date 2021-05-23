/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMActionManager.h>

@protocol PXCMMFileBackedActionPerformerDelegate;

@interface PXCMMFileBackedActionManager : PXCMMActionManager

@property (weak, nonatomic) id <PXCMMFileBackedActionPerformerDelegate> performerDelegate;

- (id)init;

@end
