/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class CAContext, NSHashTable, NSString, PXImageModulationSettings, PXRequestedEDRHeadroomFactorFilter, UIViewController;

@interface PXImageModulationManager : PXObservable <Swift>

{
    struct {
        _Bool enabled;
        _Bool lowPowerModeEnabled;
        _Bool active;
        _Bool HDRFocus;
        _Bool imageModulationIntensity;
        _Bool requestedEDRHeadroomFactor;
        _Bool finalRequestedEDRHeadroomFactor;
        _Bool desiredDynamicRange;
        _Bool imageLayerModulators;
        _Bool currentScreenSupportsHDR;
    } _needsUpdateFlags;
    double _lastRequestedEDRHeadroomChangeTime;
    _Bool _lowPowerModeEnabled;
    _Bool _applicationActive;
    _Bool _mainScreen;
    _Bool _enabled;
    _Bool _active;
    _Bool _currentScreenSupportsHDR;
    PXImageModulationSettings *_settings;
    NSHashTable *_imageLayerModulators;
    PXRequestedEDRHeadroomFactorFilter *_requestedEDRHeadroomFactorFilter;
    CAContext *_coreAnimationContext;
    UIViewController *_rootViewController;
    double _HDRFocus;
    double _imageModulationIntensity;
    double _requestedEDRHeadroomFactor;
}

@property (nonatomic, readonly) PXImageModulationSettings *settings;
@property (nonatomic, readonly) NSHashTable *imageLayerModulators;
@property (nonatomic, readonly) PXRequestedEDRHeadroomFactorFilter *requestedEDRHeadroomFactorFilter;
@property (retain, nonatomic) CAContext *coreAnimationContext;
@property (nonatomic, getter=isLowPowerModeEnabled) _Bool lowPowerModeEnabled;
@property (nonatomic, getter=isApplicationActive) _Bool applicationActive;
@property (weak, nonatomic, readonly) UIViewController *rootViewController;
@property (nonatomic, readonly, getter=isMainScreen) _Bool mainScreen;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly) _Bool currentScreenSupportsHDR;
@property (nonatomic, readonly) double HDRFocus;
@property (nonatomic, readonly) double imageModulationIntensity;
@property (nonatomic, readonly) double requestedEDRHeadroomFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)HDRValueForAsset:(id)arg1;
+ (CDStruct_fd7332cd)optionsForAsset:(id)arg1;
+ (long long)_contentTypeForAsset:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)setActive:(_Bool)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (void)preferencesDidChange;
- (id)initWithRootViewController:(id)arg1 mainScreen:(_Bool)arg2;
- (id)checkoutImageLayerModulatorWithOptions:(CDStruct_fd7332cd)arg1;
- (void)checkInImageLayerModulator:(id)arg1;
- (void)_updateImageLayerModulator:(id)arg1;
- (void)setNeedsHDRFocusUpdate;
- (void)setNeedsImageModulationIntensityUpdate;
- (void)setHDRFocus:(double)arg1;
- (void)setImageModulationIntensity:(double)arg1;
- (void)setRequestedEDRHeadroomFactor:(double)arg1;
- (void)_updateCoreAnimationContext;
- (void)setCurrentScreenSupportsHDR:(_Bool)arg1;
- (void)_processInfoPowerStateDidChange:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_invalidateEnabled;
- (void)_updateEnabledIfNeeded;
- (void)_invalidateLowPowerModeEnabled;
- (void)_updateLowPowerModeEnabledIfNeeded;
- (void)_invalidateActive;
- (void)_updateActiveIfNeeded;
- (void)_invalidateHDRFocus;
- (void)_updateHDRFocusIfNeeded;
- (void)_invalidateImageModulationIntensity;
- (void)_updateImageModulationIntensityIfNeeded;
- (void)_invalidateRequestedEDRHeadroomFactor;
- (void)_updateRequestedEDRHeadroomFactorIfNeeded;
- (void)_invalidateFinalRequestedEDRHeadroomFactor;
- (void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;
- (void)_invalidateDesiredDynamicRange;
- (void)_updateDesiredDynamicRangeIfNeeded;
- (void)_invalidateImageLayerModulators;
- (void)_updateImageLayerModulatorsIfNeeded;
- (void)_invalidateCurrentScreenSupportsHDR;
- (void)_updateCurrentScreenSupportsHDRIfNeeded;

@end
