/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class PXPhotosDetailsBarSpec, PXWidgetCompositionSpec, PXWidgetSpec, UIColor;

@interface PXPhotosDetailsSpec : PXFeatureSpec

{
    unsigned long long _detailsOptions;
    PXWidgetCompositionSpec *_compositionSpec;
    PXWidgetSpec *_widgetSpec;
    PXPhotosDetailsBarSpec *_barSpec;
    struct UIColor *_backgroundColor;
    struct UIColor *_dimmingColor;
    double _dimmingAlpha;
}

@property (nonatomic, readonly) unsigned long long detailsOptions;
@property (nonatomic, readonly) PXWidgetCompositionSpec *compositionSpec;
@property (nonatomic, readonly) PXWidgetSpec *widgetSpec;
@property (nonatomic, readonly) PXPhotosDetailsBarSpec *barSpec;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *dimmingColor;
@property (nonatomic, readonly) double dimmingAlpha;
@property (nonatomic, readonly) _Bool shouldInitializeBarsController;
@property (nonatomic, readonly) _Bool enableActionsWidget;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end
