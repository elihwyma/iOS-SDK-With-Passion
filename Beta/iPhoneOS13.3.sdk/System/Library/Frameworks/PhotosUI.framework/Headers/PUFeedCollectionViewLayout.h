/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, PUParallaxComputer;

__attribute__((visibility("hidden")))
@interface PUFeedCollectionViewLayout : UICollectionViewLayout

{
    PUParallaxComputer *_parallaxComputer;
    NSMutableArray *_sectionLayoutInfos;
    struct CGSize _contentSize;
    _Bool _shouldDisplayCaptionsBelowBatches;
    _Bool _shouldApplyParallaxEffect;
    _Bool _shouldFloatThumbnails;
    _Bool _shouldFloatSectionHeaders;
    _Bool _shouldFloatWithEase;
    _Bool _shouldFloatOverShortDistances;
    long long _flowDirection;
    long long _parallaxModel;
    double _parallaxFactor;
    double _thumbnailSpacing;
    double _sectionHeaderBackgroundHeight;
    double _floatingBottomDecorationHeight;
    struct CGSize _sectionReferenceSize;
    struct CGSize _interTileSpacing;
    struct CGSize _noCaptionSpacing;
    struct UIEdgeInsets _captionPadding;
    struct UIEdgeInsets _floatPadding;
}

@property (nonatomic) long long flowDirection;
@property (nonatomic, readonly) unsigned int flowDirectionEdge;
@property (nonatomic) struct CGSize sectionReferenceSize;
@property (nonatomic) struct CGSize interTileSpacing;
@property (nonatomic) struct UIEdgeInsets captionPadding;
@property (nonatomic) struct CGSize noCaptionSpacing;
@property (nonatomic) _Bool shouldDisplayCaptionsBelowBatches;
@property (nonatomic) _Bool shouldApplyParallaxEffect;
@property (nonatomic) long long parallaxModel;
@property (nonatomic) double parallaxFactor;
@property (nonatomic) _Bool shouldFloatThumbnails;
@property (nonatomic) double thumbnailSpacing;
@property (nonatomic) _Bool shouldFloatSectionHeaders;
@property (nonatomic) double sectionHeaderBackgroundHeight;
@property (nonatomic) _Bool shouldFloatWithEase;
@property (nonatomic) _Bool shouldFloatOverShortDistances;
@property (nonatomic) double floatingBottomDecorationHeight;
@property (nonatomic) struct UIEdgeInsets floatPadding;

+ (Class)layoutAttributesClass;

- (id)init;
- (id)_delegate;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutAndCache;
- (void)_updateSectionLayoutInfosIfNecessary;
- (void)_updateGlobalLayoutInfoWithOptions:(long long)arg1 sectionsWithUpdatedGroupIDs:(out id *)arg2;
- (void)_updateLayoutInfoForSection:(long long)arg1 ignoreSizeChange:(_Bool)arg2;
- (void)_adjustFloatingLayoutAttributes:(id)arg1 inSection:(long long)arg2;
- (void)_enumerateSectionsInRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateImageElementsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_getSize:(out struct CGSize *)arg1 headerSize:(out struct CGSize *)arg2 footerSize:(out struct CGSize *)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long *)arg7 forSection:(long long)arg8 isJoined:(_Bool)arg9;
- (void)_sectionAtIndex:(long long)arg1 sizeDidChangeFrom:(struct CGSize)arg2 to:(struct CGSize)arg3;
- (void)_getSizeForVerticalFlowDirection:(out struct CGSize *)arg1 headerSize:(out struct CGSize *)arg2 footerSize:(out struct CGSize *)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long *)arg7 forSection:(long long)arg8 isJoined:(_Bool)arg9;
- (void)_getSizeForHorizontalFlowDirection:(out struct CGSize *)arg1 headerSize:(out struct CGSize *)arg2 footerSize:(out struct CGSize *)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long *)arg7 forSection:(long long)arg8 isJoined:(_Bool)arg9;
- (id)sectionsJoinedWithSection:(long long)arg1;
- (struct CGRect)frameForSection:(long long)arg1;
- (long long)numberOfTilesOmittedInSection:(long long)arg1;
- (id)indexPathForImageElementAtPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForTileAtIndexPath:(id)arg1;
- (void)updateCollectionViewWithDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;
- (id)_parallaxComputer;
- (void)_updateParallaxForLayoutAttributes:(id)arg1;
- (void)_setOrigin:(struct CGPoint)arg1 forSectionLayoutInfo:(id)arg2;
- (void)_updateParallaxComputer;
- (struct CGRect)_layoutVerticalSectionHeaderIfNecessary:(id)arg1 fixedLayoutAttributes:(id)arg2 floatingLayoutAttributes:(id)arg3 section:(long long)arg4;
- (long long)_layoutTilesAndGetNumberOfTilesOmittedWithCollectionView:(id)arg1 tileLayoutAttributes:(id)arg2 fixedLayoutAttributes:(id)arg3 origin:(inout struct CGPoint *)arg4 size:(inout struct CGSize *)arg5 sectionContentSize:(struct CGSize)arg6 itemCount:(long long)arg7 section:(long long)arg8;

@end
