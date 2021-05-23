/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, OKMediaFeederPhotoKit, OKPresentationViewController, OKProducerPreset, PHAssetCollection, PHFetchResult, PUSlideshowContextRegistry, PUSlideshowSettingsViewModel, PUSlideshowViewModel;

__attribute__((visibility("hidden")))
@interface PUSlideshowSession : NSObject

{
    OKMediaFeederPhotoKit *_mediaFeeder;
    PUSlideshowContextRegistry *_contextRegistry;
    OKProducerPreset *_currentPreset;
    _Bool __disablingIdleTimer;
    PHFetchResult *_fetchResult;
    PHAssetCollection *_assetCollection;
    PUSlideshowViewModel *_viewModel;
    PUSlideshowSettingsViewModel *_settingsViewModel;
    OKPresentationViewController *_presentationViewController;
    id __disablingIdleTimerToken;
}

@property (nonatomic, setter=_setDisablingIdleTimer:) _Bool _disablingIdleTimer;
@property (retain, nonatomic, setter=_setDisablingIdleTimerToken:) id _disablingIdleTimerToken;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PUSlideshowViewModel *viewModel;
@property (nonatomic, readonly) PUSlideshowSettingsViewModel *settingsViewModel;
@property (nonatomic, readonly) OKPresentationViewController *presentationViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_beginDisablingIdleTimer;
- (void)_endDisablingIdleTimerIfNecessary;
- (id)initWithFetchResult:(id)arg1 assetCollection:(id)arg2 startIndex:(unsigned long long)arg3;
- (id)initWithFetchResult:(id)arg1 assetCollection:(id)arg2;
- (void)updatePresentationViewController;
- (void)_distributeSlideshowDisplayContextWithPresentationController:(id)arg1;
- (void)registerSlideshowDisplayContext:(id)arg1;
- (void)unregisterSlideshowDisplayContext:(id)arg1;
- (id)_resolutionSizes;
- (void)_configurePresentationViewController:(id)arg1;
- (void)_slideshowViewModel:(id)arg1 didChange:(id)arg2;
- (void)_slideshowSettingsViewModel:(id)arg1 didChange:(id)arg2;

@end
