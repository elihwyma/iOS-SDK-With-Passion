/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSProgress, PUActivityProgressController;

__attribute__((visibility("hidden")))
@interface PUDuplicateActionController : NSObject

{
    long long _itemCount;
    NSMutableArray *_resourceDownloadRequests;
    _Bool __canDuplicate;
    _Bool __canExtractStill;
    _Bool __didCheckDuplicateCapabilities;
    NSDictionary *__assetsByAssetCollection;
    NSProgress *__overallProgress;
    NSProgress *__downloadingProgress;
    NSProgress *__duplicatingProgress;
    PUActivityProgressController *__progressController;
    CDUnknownBlockType __onFinishDownloadCompletionHandler;
}

@property (copy, nonatomic, readonly) NSDictionary *_assetsByAssetCollection;
@property (nonatomic, setter=_setDidCheckDuplicateCapabilities:) _Bool _didCheckDuplicateCapabilities;
@property (nonatomic, readonly) _Bool _canDuplicate;
@property (nonatomic, readonly) _Bool _canExtractStill;
@property (retain, nonatomic, setter=_setOverallProgress:) NSProgress *_overallProgress;
@property (retain, nonatomic, setter=_setDownloadingProgress:) NSProgress *_downloadingProgress;
@property (retain, nonatomic, setter=_setDuplicatingProgress:) NSProgress *_duplicatingProgress;
@property (retain, nonatomic, setter=_setProgressController:) PUActivityProgressController *_progressController;
@property (copy, nonatomic, setter=_setOnFinishDownloadCompletionHandler:) CDUnknownBlockType _onFinishDownloadCompletionHandler;
@property (nonatomic, readonly) _Bool shouldUseAlertController;

+ (void)_presentDuplicationWasInterruptedWithItemCount:(long long)arg1 hasPhotos:(_Bool)arg2 hasVideos:(_Bool)arg3;
+ (_Bool)canPerformDuplicateActionOnAssets:(id)arg1 orAssetsByAssetCollection:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithAssetsByAssetCollection:(id)arg1;
- (id)alertControllerForDuplicateActionWithPreview:(_Bool)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 userConfirmationHandler:(CDUnknownBlockType)arg3;
- (void)_checkDuplicateCapabilities;
- (_Bool)_validateOriginalAssetResourcesForDuplicateAction:(long long)arg1;
- (void)performDuplicateAction:(long long)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleOperationCompletionWithError:(id)arg1;
- (void)_downloadResourcesForDuplicateAction:(long long)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_performPhotoLibraryChangeForAction:(long long)arg1 newStillImageTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handlePhotoLibraryDuplicationCompletionWithSuccess:(_Bool)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_overallProgressFractionCompletedDidChange;
- (void)_overallProgressIsCancelledDidChange;
- (void)_finishedDownloadWithSuccess:(_Bool)arg1;
- (void)_finishedDuplicationWithSuccess:(_Bool)arg1;
- (void)_handleProgressUserCancellation;
- (void)_checkHasPhotos:(_Bool *)arg1 hasVideos:(_Bool *)arg2;

@end
