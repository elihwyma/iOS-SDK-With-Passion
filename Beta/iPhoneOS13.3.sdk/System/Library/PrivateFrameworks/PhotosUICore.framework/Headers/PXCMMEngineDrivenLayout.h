/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXEngineDrivenAssetsTilingLayout.h>

@class PXBasicTileUserData, PXCMMAssetStatusBadgeTileUserData;

@protocol PXCMMEngineDrivenLayoutDelegate;

@interface PXCMMEngineDrivenLayout : PXEngineDrivenAssetsTilingLayout

{
    PXBasicTileUserData *_placeholderTileUserData;
    _Bool _hasFloatingBanner;
    _Bool _hasFloatingSectionHeaders;
    _Bool _headerViewIsVisible;
    long long _layoutType;
    double _headerHeight;
    double _bannerHeight;
    double _statusFooterHeight;
    double _sendBackFooterHeight;
    long long _placeholderMode;
    double _headerTopInset;
    double _footerBottomInset;
    double _headerFooterSideInset;
    PXCMMAssetStatusBadgeTileUserData *__copiedUserData;
    PXCMMAssetStatusBadgeTileUserData *__failedUserData;
    struct UIEdgeInsets _reviewSafeAreaInsets;
}

@property (nonatomic, readonly) PXCMMAssetStatusBadgeTileUserData *_copiedUserData;
@property (nonatomic, readonly) PXCMMAssetStatusBadgeTileUserData *_failedUserData;
@property (nonatomic) _Bool headerViewIsVisible;
@property (nonatomic, readonly) long long layoutType;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic, readonly) double bannerHeight;
@property (nonatomic, readonly) double statusFooterHeight;
@property (nonatomic, readonly) double sendBackFooterHeight;
@property (nonatomic) long long placeholderMode;
@property (weak, nonatomic) id <PXCMMEngineDrivenLayoutDelegate> delegate;
@property (nonatomic) _Bool hasFloatingBanner;
@property (nonatomic) _Bool hasFloatingSectionHeaders;
@property (nonatomic) double headerTopInset;
@property (nonatomic) double footerBottomInset;
@property (nonatomic) double headerFooterSideInset;
@property (nonatomic) struct UIEdgeInsets reviewSafeAreaInsets;

+ (id)_additionalTileKinds;

- (id)initWithDataSource:(id)arg1;
- (struct CGRect)_headerFrame;
- (struct CGRect)contentBounds;
- (struct CGSize)_placeholderSize;
- (void)setVisibleOrigin:(struct CGPoint)arg1;
- (id)initWithLayoutEngineSnapshot:(id)arg1;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (_Bool)getAdditionalTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2 layoutGeometryKind:(unsigned long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (void)adjustGeometry:(struct PXTileGeometry *)arg1 forAdditionalTileWithKind:(unsigned long long)arg2 indexPath:(struct PXSimpleIndexPath)arg3;
- (id)initWithLayoutEngineSnapshot:(id)arg1 configuration:(id)arg2;
- (_Bool)sendBackBannerViewIsVisible:(struct UIEdgeInsets)arg1;
- (void)updateAssetStatusBadgeTiles;
- (void)_invalidateSectionHeaders;
- (void)_invalidateHeader;
- (void)_invalidateBanner;
- (void)_invalidateStatusFooter;
- (void)_invalidateSendBackFooter;
- (void)_invalidateAssetStatusBadgeTiles;
- (struct PXTileIdentifier)_identifierForUniqueTileWithKind:(unsigned long long)arg1;
- (struct PXTileIdentifier)_headerTileIdentifier;
- (struct CGRect)_bannerFrame;
- (struct PXTileIdentifier)_bannerTileIdentifier;
- (struct CGRect)_statusFooterFrame;
- (struct PXTileIdentifier)_statusFooterTileIdentifier;
- (struct CGRect)_sendBackFooterFrame;
- (struct PXTileIdentifier)_sendBackFooterTileIdentifier;
- (struct PXTileIdentifier)_placeholderTileIdentifier;
- (struct CGRect)_sectionHeaderTileFrame;
- (struct CGRect)_placeholderFrame;
- (unsigned long long)_generatorGeometryKindForTileKind:(unsigned long long)arg1;
- (unsigned long long)_gridGeneratorGeometryKindForTileKind:(unsigned long long)arg1;
- (unsigned long long)_editorialGeneratorGeometryKindForTileKind:(unsigned long long)arg1;
- (struct CGSize)_preferredSelectionBadgeSize;
- (_Bool)getAdditionalAccessoryTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forTileKind:(unsigned long long)arg5 contentTileGeometry:(const struct PXTileGeometry *)arg6 indexPath:(struct PXSimpleIndexPath)arg7;
- (_Bool)_getDuplicateTileIdentifier:(struct PXTileIdentifier *)arg1 outGeometry:(struct PXTileGeometry *)arg2 group:(unsigned long long *)arg3 userData:(id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (_Bool)_getAssetStatusTileIdentifier:(struct PXTileIdentifier *)arg1 outGeometry:(struct PXTileGeometry *)arg2 group:(unsigned long long *)arg3 userData:(id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (double)zPositionOffsetForKind:(unsigned long long)arg1;
- (_Bool)_getAdditionalTileIdentifierForGrid:(out struct PXTileIdentifier *)arg1 group:(out unsigned long long *)arg2 layoutGeometryKind:(long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (_Bool)_getAdditionalTileIdentifierForEditorial:(out struct PXTileIdentifier *)arg1 group:(out unsigned long long *)arg2 layoutGeometryKind:(long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;

@end
