/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUAssetViewModel, PUBrowsingVideoPlayer, PUBrowsingViewModel, PUOneUpMergedVideoProvider, UIActivityIndicatorView, UIButton;

__attribute__((visibility("hidden")))
@interface PUBufferingIndicatorTileViewController : PUTileViewController <Swift>

{
    PUAssetViewModel *_assetViewModel;
    PUBrowsingViewModel *_browsingViewModel;
    PUOneUpMergedVideoProvider *_mergedVideoProvider;
    CDUnknownBlockType _errorAlertControllerDisplayer;
    PUBrowsingVideoPlayer *__videoPlayer;
    long long __indicatorStyle;
    UIActivityIndicatorView *__spinner;
    UIButton *__errorButton;
}

@property (retain, nonatomic, setter=_setVideoPlayer:) PUBrowsingVideoPlayer *_videoPlayer;
@property (nonatomic, setter=_setIndicatorStyle:) long long _indicatorStyle;
@property (retain, nonatomic, setter=_setSpinner:) UIActivityIndicatorView *_spinner;
@property (retain, nonatomic, setter=_setErrorButton:) UIButton *_errorButton;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider;
@property (copy, nonatomic) CDUnknownBlockType errorAlertControllerDisplayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canShowBufferingIndicatorTileForAsset:(id)arg1;
+ (struct CGSize)bufferingIndicatorTileSize;

- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)becomeReusable;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_setIndicatorStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_handleErrorButton:(id)arg1;
- (void)_updateIndicator;

@end
