/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCache, PXExtendedTraitCollection, PXLayoutMetricInterpolator, UIColor;

@interface PXFeatureSpec : NSObject

{
    _Bool _shouldInsetAllPhotoDetailsContent;
    _Bool __shouldUseMiniMargins;
    unsigned long long _options;
    long long _sizeClass;
    long long _sizeSubclass;
    long long _layoutOrientation;
    long long _layoutDirection;
    long long _userInterfaceIdiom;
    long long _userInterfaceFeature;
    long long _userInterfaceStyle;
    long long _userInterfaceLevel;
    long long _contentSizeCategory;
    double _displayScale;
    NSArray *_collectionTileImageOverlaySpecs;
    NSArray *_collectionTileImageOverlaySpecsHighlighted;
    NSCache *__viewSpecCache;
    PXExtendedTraitCollection *__extendedTraitCollection;
    PXLayoutMetricInterpolator *__horizontalContentGuideInsetsInterpolator;
    struct CGSize _layoutReferenceSize;
    struct UIEdgeInsets _safeAreaInsets;
    struct UIEdgeInsets _layoutMargins;
}

@property (nonatomic, readonly) double spacingBetweenYearCards;
@property (nonatomic, readonly) double spacingBetweenMonthCards;
@property (nonatomic, readonly) struct UIEdgeInsets curatedLibraryEdgeToEdgeContentDefaultPadding;
@property (nonatomic, readonly) NSCache *_viewSpecCache;
@property (nonatomic, readonly) PXExtendedTraitCollection *_extendedTraitCollection;
@property (nonatomic, readonly) PXLayoutMetricInterpolator *_horizontalContentGuideInsetsInterpolator;
@property (nonatomic, readonly) _Bool _shouldUseMiniMargins;
@property (nonatomic, readonly) long long localizedLeadingTextAlignment;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long sizeClass;
@property (nonatomic, readonly) long long sizeSubclass;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) struct CGSize layoutReferenceSize;
@property (nonatomic, readonly) long long userInterfaceIdiom;
@property (nonatomic, readonly) long long userInterfaceFeature;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) long long userInterfaceLevel;
@property (nonatomic, readonly) long long contentSizeCategory;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsets;
@property (nonatomic, readonly) struct UIEdgeInsets layoutMargins;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) UIColor *defaultBackgroundColor;
@property (nonatomic, readonly) double defaultCornerRadius;
@property (nonatomic, readonly) double defaultDarkenSourceOverAmount;
@property (nonatomic, readonly) UIColor *defaultPlaceholderColor;
@property (nonatomic, readonly) UIColor *defaultPlacesPlaceholderColor;
@property (nonatomic, readonly) NSArray *collectionTileImageOverlaySpecs;
@property (nonatomic, readonly) NSArray *collectionTileImageOverlaySpecsHighlighted;
@property (nonatomic, readonly) double collectionTileImageCornerRadius;
@property (nonatomic, readonly) _Bool shouldInsetAllPhotoDetailsContent;

- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;
- (struct UIEdgeInsets)contentGuideInsetsForScrollAxis:(long long)arg1;
- (id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;
- (void)configureViewSpec:(id)arg1;
- (struct UIEdgeInsets)_fullscreenContentInsetsForWidth:(double)arg1;
- (id)fullscreenMiroViewSpec;
- (id)fullscreenMiroViewSpecWithBoundingSize:(struct CGSize)arg1;
- (struct UIColor *)collectionTileImageOverlayColor;
- (struct UIColor *)collectionTileImageOverlayColorHighlighted;
- (long long)_capitalizationStyleFromTextAttributes:(id)arg1 defaultCapitalizationStyle:(long long)arg2;
- (id)_textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5;

@end
