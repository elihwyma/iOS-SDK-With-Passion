/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXActivity.h>

#import <PhotosUI/Swift-Protocol.h>

@class AVAssetExportSession, NSString, PUCompositeVideoGenerator, PXAlertController, UIViewController;

__attribute__((visibility("hidden")))
@interface PUCompositeVideoActivity : PXActivity <Swift>

{
    _Bool _cancelled;
    UIViewController *_presenterViewController;
    PXAlertController *_progressController;
    PUCompositeVideoGenerator *_generator;
    AVAssetExportSession *_exportSession;
}

@property (retain, nonatomic) UIViewController *presenterViewController;
@property (retain, nonatomic) PXAlertController *progressController;
@property (retain, nonatomic) PUCompositeVideoGenerator *generator;
@property (retain, nonatomic) AVAssetExportSession *exportSession;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_exportGeneratedVideo;
- (void)_sucessfullyFinishedSaving:(_Bool)arg1 error:(id)arg2;
- (void)_finishWithSuccess:(_Bool)arg1 cancelled:(_Bool)arg2;

@end
