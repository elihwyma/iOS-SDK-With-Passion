/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetActionPerformer.h>

@class NSString;

@protocol PUVideoListAssetExpungeActionPerformerDelegate;

__attribute__((visibility("hidden")))
@interface PUVideoListAssetExpungeActionPerformer : PUAssetActionPerformer

{
    id <PUVideoListAssetExpungeActionPerformerDelegate> _actionPerformerDelegate;
}

@property (weak, nonatomic) id <PUVideoListAssetExpungeActionPerformerDelegate> actionPerformerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)deletePhotosActionController:(id)arg1 dismissConfirmationViewController:(id)arg2;
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (void)_performUserInteractionTask;

@end
