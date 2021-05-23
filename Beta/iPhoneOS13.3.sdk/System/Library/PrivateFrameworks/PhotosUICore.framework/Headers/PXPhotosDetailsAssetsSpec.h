/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class PXWidgetSpec;

@interface PXPhotosDetailsAssetsSpec : PXFeatureSpec

{
    _Bool _shouldShowTitle;
    _Bool _enableBadges;
    long long _editorialNumberOfColumns;
    double _editorialInterTileSpacing;
    long long _gridContentMode;
    unsigned long long _detailsOptions;
    PXWidgetSpec *__widgetSpec;
    struct CGSize _gridInterItemSpacing;
    struct CGSize _gridItemSize;
    struct UIEdgeInsets _contentGuideInsets;
    struct UIEdgeInsets _gridContentInsets;
}

@property (nonatomic, readonly) PXWidgetSpec *_widgetSpec;
@property (nonatomic, readonly) struct UIEdgeInsets contentGuideInsets;
@property (nonatomic, readonly) _Bool shouldShowTitle;
@property (nonatomic, readonly) long long editorialNumberOfColumns;
@property (nonatomic, readonly) double editorialInterTileSpacing;
@property (nonatomic, readonly) _Bool enableBadges;
@property (nonatomic, readonly) struct CGSize gridInterItemSpacing;
@property (nonatomic, readonly) struct UIEdgeInsets gridContentInsets;
@property (nonatomic, readonly) struct CGSize gridItemSize;
@property (nonatomic, readonly) long long gridContentMode;
@property (nonatomic, readonly) unsigned long long detailsOptions;

+ (_Bool)shouldUsePhoneLayoutWithTraitCollection:(id)arg1;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2;
- (double)defaultCornerRadius;
- (void)_computeSpecWithExtendedTraitCollection:(id)arg1;
- (void)_computeEditorialWithExtendedTraitCollection:(id)arg1;
- (void)_computeGridWithExtendedTraitCollection:(id)arg1;

@end
