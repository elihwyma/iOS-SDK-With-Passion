/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGLayout.h>

@class NSArray, NSAttributedString, NSDictionary, NSObject, NSSet, NSString, PXAssetCollectionReference, PXCuratedLibraryActionPerformer, PXCuratedLibraryEllipsisButtonActionPerformer, PXCuratedLibraryFilterActionPerformer, PXCuratedLibrarySectionHeaderLayoutSpec, PXTitleSubtitleLabelSpec;

@protocol OS_dispatch_queue;

@interface PXCuratedLibrarySectionHeaderLayout : PXGLayout

{
    CDStruct_d97c9657 _updateFlags;
    unsigned short _textVersion;
    unsigned short _ellipsisButtonVersion;
    unsigned short _filterButtonVersion;
    unsigned short _selectionTitleVersion;
    unsigned short _selectButtonVersion;
    unsigned short _cancelButtonVersion;
    unsigned short _toggleAspectFitButtonVersion;
    unsigned short _zoomInButtonVersion;
    unsigned short _zoomOutButtonVersion;
    unsigned short _controlStackButtonVersion;
    NSArray *_itemIdentifierBySpriteIndex;
    unsigned short _gradientResizableCapInsetsIndex;
    struct CGSize _cachedSizeByButtonIdentifier[9];
    struct CGSize _cachedExternalTrailingButtonsSize;
    struct CGSize _cachedExternalLeadingButtonsSize;
    struct CGSize _cachedLongestPossibleSelectionTitleSize;
    long long _asyncDateGeneration;
    NSObject<OS_dispatch_queue> *_asyncDateQueue;
    _Bool _showsBackgroundGradient;
    _Bool _showsDebugDescription;
    _Bool _filterButtonHighlighted;
    _Bool _controlStackButtonSelected;
    _Bool _usesCompactToggleAspectFitButton;
    float _buttonsZIndex;
    NSString *_title;
    NSString *_subtitle;
    PXAssetCollectionReference *_assetCollectionReference;
    PXCuratedLibrarySectionHeaderLayoutSpec *_spec;
    double _lateralMargin;
    double _maxPossibleHeight;
    double _titleAlpha;
    double _buttonsAlpha;
    PXCuratedLibraryEllipsisButtonActionPerformer *_ellipsisButtonActionPerformer;
    PXCuratedLibraryFilterActionPerformer *_filterActionPerformer;
    PXCuratedLibraryActionPerformer *_selectButtonActionPerformer;
    PXCuratedLibraryActionPerformer *_cancelButtonActionPerformer;
    PXCuratedLibraryActionPerformer *_zoomInButtonActionPerformer;
    PXCuratedLibraryActionPerformer *_zoomOutButtonActionPerformer;
    PXCuratedLibraryActionPerformer *_toggleAspectFitButtonActionPerformer;
    NSString *_selectButtonTitle;
    NSString *_filterButtonCaption;
    NSString *_filterButtonTitle;
    NSString *_selectionTitle;
    NSString *_longestPossibleSelectionTitle;
    NSString *_toggleAspectFitButtonTitle;
    NSSet *_toggleAspectFitButtonPossibleTitles;
    long long _toggleAspectFitCompactButtonSymbol;
    long long _safeAreaBehavior;
    NSArray *_externalTrailingButtonConfigurations;
    NSArray *_externalLeadingButtonConfigurations;
    PXCuratedLibrarySectionHeaderLayoutSpec *_effectiveSpec;
    PXTitleSubtitleLabelSpec *_effectiveTitleSubtitleLabelSpec;
    double _buttonsMaxY;
    double _titleSubtitleTopSpacing;
    double _titleSubtitleLastBaseline;
    struct CGRect _titleSubtitleFrame;
}

@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *effectiveSpec;
@property (retain, nonatomic) PXTitleSubtitleLabelSpec *effectiveTitleSubtitleLabelSpec;
@property (nonatomic) _Bool controlStackButtonSelected;
@property (nonatomic) _Bool usesCompactToggleAspectFitButton;
@property (nonatomic, readonly) unsigned long long toggleAspectFitButton;
@property (nonatomic) double buttonsMaxY;
@property (nonatomic) double titleSubtitleTopSpacing;
@property (nonatomic) double titleSubtitleLastBaseline;
@property (retain, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *spec;
@property (nonatomic) double lateralMargin;
@property (nonatomic) double maxPossibleHeight;
@property (nonatomic) double alpha;
@property (nonatomic) double titleAlpha;
@property (nonatomic) double buttonsAlpha;
@property (nonatomic) _Bool showsBackgroundGradient;
@property (nonatomic) _Bool showsDebugDescription;
@property (nonatomic) float buttonsZIndex;
@property (retain, nonatomic) PXCuratedLibraryEllipsisButtonActionPerformer *ellipsisButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryFilterActionPerformer *filterActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *selectButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *cancelButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *zoomInButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *zoomOutButtonActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *toggleAspectFitButtonActionPerformer;
@property (copy, nonatomic) NSString *selectButtonTitle;
@property (copy, nonatomic) NSString *filterButtonCaption;
@property (copy, nonatomic) NSString *filterButtonTitle;
@property (nonatomic) _Bool filterButtonHighlighted;
@property (copy, nonatomic) NSString *selectionTitle;
@property (copy, nonatomic) NSString *longestPossibleSelectionTitle;
@property (copy, nonatomic) NSString *toggleAspectFitButtonTitle;
@property (copy, nonatomic) NSSet *toggleAspectFitButtonPossibleTitles;
@property (nonatomic) long long toggleAspectFitCompactButtonSymbol;
@property (nonatomic, readonly) struct CGRect titleSubtitleFrame;
@property (nonatomic) long long safeAreaBehavior;
@property (copy, nonatomic) NSArray *externalTrailingButtonConfigurations;
@property (copy, nonatomic) NSArray *externalLeadingButtonConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool wantsDisclosureIndicator;
@property (nonatomic, readonly) NSDictionary *defaultAttributes;
@property (nonatomic, readonly) NSDictionary *emphasizedAttributes;

- (id)init;
- (void)update;
- (void)safeAreaInsetsDidChange;
- (id)imageNameAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned int)arg1 layoutVersion:(long long)arg2 withLastBaseline:(double)arg3;
- (id)titleForSpriteAtIndex:(unsigned int)arg1;
- (id)subtitleForSpriteAtIndex:(unsigned int)arg1;
- (id)titleSubtitleSpecForSpriteAtIndex:(unsigned int)arg1;
- (void)_updateSprites;
- (void)_updateButtonActionPerformers;
- (void)_updateSpriteTags;
- (void)_updateSpritesAlpha;
- (struct UIEdgeInsets)safeAreaInsetsWithCurrentBehavior;
- (id)_selectionTitleLabelConfigurationWithTitle:(id)arg1;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)referenceOptionsDidChange;
- (void)screenScaleDidChange;
- (void)alphaDidChange;
- (void)_updateLastBaseline;
- (void)_invalidateFilterButton;
- (void)_updateEffectiveSpec;
- (id)_effectiveTitleSubtitleLabelSpec:(id)arg1;
- (void)_updateTitleAndSubtitle;
- (void)_handleAsyncDateDescription:(id)arg1 placement:(long long)arg2 generation:(long long)arg3;
- (struct CGSize)_sizeOfButton:(unsigned long long)arg1;
- (void)_discardAllCachedButtonSizes;
- (id)_configurationForButton:(unsigned long long)arg1;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;

@end
