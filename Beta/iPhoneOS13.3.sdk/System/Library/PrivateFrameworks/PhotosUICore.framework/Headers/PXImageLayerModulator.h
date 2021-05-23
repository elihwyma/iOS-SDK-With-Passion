/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CAFilter, CALayer, ISLivePhotoUIView, NSString;

@interface PXImageLayerModulator : NSObject

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool filteredLayer;
        _Bool displayingVideoComplement;
        _Bool filterIntensity;
    } _needsUpdateFlags;
    _Bool _displayingVideoComplement;
    _Bool _enabled;
    float _hdrGain;
    CALayer *_layer;
    ISLivePhotoUIView *_livePhotoView;
    CAFilter *_filter;
    NSString *_layerFilterIntensityKeyPath;
    CALayer *_filteredLayer;
    double _intensityAnimationDuration;
    long long _contentType;
    long long _filterType;
    double _intensity;
}

@property (nonatomic, readonly) CAFilter *filter;
@property (nonatomic, readonly) NSString *layerFilterIntensityKeyPath;
@property (retain, nonatomic) CALayer *filteredLayer;
@property (nonatomic) double intensityAnimationDuration;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) long long filterType;
@property (nonatomic, readonly) float hdrGain;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) double intensity;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) ISLivePhotoUIView *livePhotoView;
@property (nonatomic, readonly, getter=isDisplayingVideoComplement) _Bool displayingVideoComplement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setEnabled:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setIntensity:(double)arg1;
- (void)setLayer:(id)arg1;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)setLivePhotoView:(id)arg1;
- (void)_updateIfNeeded;
- (void)basePlayerUIView:(id)arg1 didChange:(unsigned long long)arg2 withAnimationDuration:(double)arg3;
- (void)animateChangesWithDuration:(double)arg1;
- (void)removeFilterFromUnownedLayer:(id)arg1;
- (void)setDisplayingVideoComplement:(_Bool)arg1;
- (id)initWithContentType:(long long)arg1 filterType:(long long)arg2 hdrGain:(float)arg3;
- (void)_addFilterToLayer:(id)arg1;
- (void)_removeFilterFromLayer:(id)arg1;
- (void)performChanges_Private:(CDUnknownBlockType)arg1;
- (void)_invalidateFilteredLayer;
- (void)_updateFilteredLayerIfNeeded;
- (void)_invalidateDisplayingVideoComplement;
- (void)_updateDisplayingVideoComplementIfNeeded;
- (void)_invalidateFilterIntensity;
- (void)_updateFilterIntensityIfNeeded;

@end
