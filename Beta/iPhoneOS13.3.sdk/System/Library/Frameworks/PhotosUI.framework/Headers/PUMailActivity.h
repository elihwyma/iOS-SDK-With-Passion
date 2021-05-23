/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIMailActivity.h>

@class MFMailComposeViewController, NSString, PHAsset, PLProgressView, PLUIEditVideoViewController, PLVideoRemaker, UIViewController;

@protocol PXActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUMailActivity : UIMailActivity

{
    UIViewController *_referenceViewController;
    PHAsset *_videoAssetBeingTrimmed;
    MFMailComposeViewController *_mailComposeController;
    PLUIEditVideoViewController *_editVideoViewController;
    PLProgressView *_remakerProgressView;
    PLVideoRemaker *_videoRemaker;
    CDUnknownBlockType _remakerCompletionHandler;
    id _strongSelf;
    _Bool _isSharingSingleVideo;
    _Bool _didCheckMailDropAvailable;
    _Bool _isMailDropAvailable;
    _Bool __remakerWasCancelled;
    id <PXActivityItemSourceController> _itemSourceController;
    NSString *_transcodedVideoFilePath;
}

@property (nonatomic, setter=_setRemakerWasCancelled:) _Bool _remakerWasCancelled;
@property (copy, nonatomic) NSString *transcodedVideoFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXActivityItemSourceController> itemSourceController;

+ (_Bool)isMailDropEnabled;
+ (_Bool)canPerformActivityAsIndividualItemsInSourceController:(id)arg1;
+ (void)openEmailAccountPrefs;
+ (id)_momentShareLinkSubjectForMomentShare:(id)arg1;
+ (id)_momentShareLinkActivityItemsForURL:(id)arg1 momentShare:(id)arg2;
+ (_Bool)canPerformActivityWithTotalCount:(unsigned long long)arg1 assetMediaTypeCount:(struct PXAssetMediaTypeCount)arg2;
+ (id)_momentShareLinkPrompt;
+ (id)_momentShareLinkTitleForMomentShare:(id)arg1;
+ (id)_expirationStringForMomentShare:(id)arg1;
+ (_Bool)allowedToModifyEmailAccounts;

- (void)dealloc;
- (_Bool)_isMailDropEnabled;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)cancelRemaking;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)mailComposeViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1;
- (id)activityViewController;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)performActivity;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)_pu_cleanup;
- (void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3;
- (_Bool)_showTrimViewControllerIfNeededForVideoAsset:(id)arg1;
- (void)_remakeAndSendVideoAsset:(id)arg1 withTrimStartTime:(double)arg2 endTime:(double)arg3;
- (void)_transcodeAndSendVideo:(id)arg1;
- (void)remakeVideoAsset:(id)arg1 withTrimStartTime:(double)arg2 endTime:(double)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_cleanupRemaker;
- (void)_removeTempVideoRemakerFile;
- (void)_composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2;
- (_Bool)_momentShareLinkDidFail;
- (_Bool)_canPerformWithLink;
- (_Bool)_canPerformForIndividualAssetsWithActivityItems:(id)arg1;
- (void)_prepareWithMomentShareLink:(id)arg1;

@end
