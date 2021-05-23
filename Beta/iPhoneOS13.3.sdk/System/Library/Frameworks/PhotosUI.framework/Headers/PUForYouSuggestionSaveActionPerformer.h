/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUForYouSuggestionActionPerformer.h>

__attribute__((visibility("hidden")))
@interface PUForYouSuggestionSaveActionPerformer : PUForYouSuggestionActionPerformer

{
    _Bool _isReverting;
}

@property (nonatomic, readonly) _Bool isReverting;

- (id)initWithAsset:(id)arg1;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_dismissPresentedViewController:(id)arg1;
- (id)initWithAsset:(id)arg1 isReverting:(_Bool)arg2;
- (void)_performLoopingVideoSaveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performLivePhotoSaveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performImageSaveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateSuggestionState;
- (void)_handleSuccess:(_Bool)arg1;
- (void)_displayToast;
- (void)_displayFailureAlert;

@end
