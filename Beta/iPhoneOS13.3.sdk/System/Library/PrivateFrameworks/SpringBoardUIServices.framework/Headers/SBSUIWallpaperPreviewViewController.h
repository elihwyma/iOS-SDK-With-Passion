/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIViewController.h>

@class AVURLAsset, NSDictionary, NSString, NSTimer, SBFWallpaperConfiguration, SBFWallpaperConfigurationManager, SBFWallpaperOptions, SBSUIProgressHUD, UIImage, _SBSUIOrientedImageView, _UILegibilitySettings;

@protocol SBFLegibilitySettingsProviderDelegate, SBSUIWallpaperPreviewViewControllerDelegate;

@interface SBSUIWallpaperPreviewViewController : UIViewController

{
    NSTimer *_dateTimer;
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;
    SBFWallpaperConfiguration *_initialConfiguration;
    UIImage *_wallpaperImage;
    NSDictionary *_wallpaperImageDict;
    NSDictionary *_proceduralWallpaper;
    NSDictionary *_proceduralWallpaperOptions;
    _Bool _allowScrolling;
    long long _variant;
    NSString *_name;
    _Bool _colorSamplingEnabled;
    AVURLAsset *_video;
    NSDictionary *_videoDict;
    double _stillTimeInVideo;
    SBFWallpaperOptions *_options;
    NSDictionary *_optionsDict;
    _Bool _enableButtons;
    _Bool _disableContents;
    SBSUIProgressHUD *_hud;
    _SBSUIOrientedImageView *_homeScreenPreviewView;
    _Bool _motionEnabled;
    _Bool _irisEnabled;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    id <SBSUIWallpaperPreviewViewControllerDelegate> _previewDelegate;
    double _zoomScale;
    double _parallaxFactor;
    SBFWallpaperConfiguration *_wallpaperConfiguration;
    struct CGRect _cropRect;
}

@property (copy, nonatomic) SBFWallpaperConfiguration *wallpaperConfiguration;
@property (weak, nonatomic) id <SBSUIWallpaperPreviewViewControllerDelegate> previewDelegate;
@property (readonly) UIImage *wallpaperImage;
@property (nonatomic) _Bool motionEnabled;
@property (nonatomic) _Bool irisEnabled;
@property (nonatomic) struct CGRect cropRect;
@property (nonatomic) double zoomScale;
@property (nonatomic) double parallaxFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithImage:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (id)_dateView;
- (id)_previewView;
- (double)_parallaxFactor;
- (long long)_wallpaperType;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4;
- (id)initWithImages:(id)arg1 videos:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(_Bool)arg5 enableButtons:(_Bool)arg6 disableContents:(_Bool)arg7;
- (id)initWithScrollableImage:(id)arg1 video:(id)arg2 time:(double)arg3;
- (id)_wallpaperView;
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1;
- (void)_applyHomeScreenPreview;
- (void)_updateDateView;
- (void)_stopDateTimer;
- (id)_wallpaperTypeDescription;
- (id)wallpaperConfigurationManager;
- (void)setWallpaperForLocations:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setImageWallpaperForLocations:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setProceduralWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setWallpaperImages:(id)arg1 options:(id)arg2 locations:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_setWallpaperImagesOnMainThread:(id)arg1 options:(id)arg2 locations:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_displaySettingWallpaperHUD;
- (void)_setImageWallpaperForLocationsOnMainThread:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setMotionEnabled:(_Bool)arg1 updateParallaxOnWallpaperView:(_Bool)arg2;
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1 image:(id)arg2 video:(id)arg3 videoURL:(id)arg4 stillTimeInVideo:(double)arg5 supportsCropping:(_Bool)arg6 variant:(long long)arg7 needsWallpaperDimming:(_Bool)arg8;
- (id)_proceduralWallpaperViewWithFrame:(struct CGRect)arg1 variant:(long long)arg2 configuration:(id)arg3;
- (id)_wallpaperViewWithFrame:(struct CGRect)arg1 variant:(long long)arg2 options:(id)arg3;
- (id)_colorWallpaperViewWithFrame:(struct CGRect)arg1 variant:(long long)arg2 configuration:(id)arg3;
- (void)_startDateTimer;
- (void)userDidTapOnIrisButton:(id)arg1;
- (void)userDidTapOnParallaxButton:(id)arg1;
- (void)userDidTapOnCancelButton:(id)arg1;
- (void)userDidTapOnSetButton:(id)arg1;
- (id)initWithWallpaperVariant:(long long)arg1;
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2;
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2 variant:(long long)arg3 disableSegmentedControl:(_Bool)arg4 enableButtons:(_Bool)arg5 disableContents:(_Bool)arg6;
- (id)initWithImage:(id)arg1 name:(id)arg2;
- (id)initWithImage:(id)arg1 video:(id)arg2 variant:(long long)arg3 options:(id)arg4 disableSegmentedControl:(_Bool)arg5 enableButtons:(_Bool)arg6 disableContents:(_Bool)arg7;
- (id)initWithScrollableImage:(id)arg1;
- (void)setWallpaperForLocations:(long long)arg1;
- (void)setWallpaperImages:(id)arg1 options:(id)arg2 locations:(long long)arg3;
- (void)setColorSamplingEnabled:(_Bool)arg1;
- (_Bool)colorSamplingEnabled;

@end
