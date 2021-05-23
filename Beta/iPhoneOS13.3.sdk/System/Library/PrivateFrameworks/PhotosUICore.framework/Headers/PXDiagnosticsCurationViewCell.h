/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class NSDictionary, NSNumber, NSString, PXDedupingBadgeView, PXIndexView, PXScoreView, PXStateBadgeView, PXSymbolBadgeView, PXTextSymbolView, UIImage, UIImageView;

@interface PXDiagnosticsCurationViewCell : UICollectionViewCell

{
    UIImageView *_imageView;
    PXStateBadgeView *_clusterStateBadgeView;
    PXStateBadgeView *_stateBadgeView;
    PXStateBadgeView *_alternateStateBadgeView;
    PXDedupingBadgeView *_dedupingBadgeView;
    PXTextSymbolView *_sdofOrHDRBadgeView;
    PXTextSymbolView *_favoriteBadgeView;
    PXTextSymbolView *_utilityBadgeView;
    PXTextSymbolView *_blurryBadgeView;
    PXScoreView *_aestheticScoreView;
    PXScoreView *_contentScoreView;
    PXScoreView *_criteriaScoreView;
    PXSymbolBadgeView *_symbolBadgeView;
    PXSymbolBadgeView *_dedupedSymbolBadgeView;
    PXIndexView *_indexView;
    _Bool _isFavorite;
    _Bool _isUtility;
    _Bool _isBlurry;
    _Bool _isSDOFOrHDR;
    UIImage *_thumbnailImage;
    NSString *_representedAssetIdentifier;
    NSDictionary *_debugInfo;
    NSString *_state;
    NSString *_alternateState;
    NSString *_clusterState;
    double _aestheticScore;
    double _contentScore;
    double _criteriaScore;
    NSNumber *_symbolIndex;
    NSString *_dedupingType;
    NSNumber *_dedupedSymbolIndex;
    unsigned long long _index;
}

@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) NSString *representedAssetIdentifier;
@property (retain, nonatomic) NSDictionary *debugInfo;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *alternateState;
@property (retain, nonatomic) NSString *clusterState;
@property (nonatomic, getter=isFavorite) _Bool favorite;
@property (nonatomic, getter=isUtility) _Bool utility;
@property (nonatomic, getter=isBlurry) _Bool blurry;
@property (nonatomic, getter=isSDOFOrHDR, setter=setSDOFOrHDR:) _Bool sdofOrHDR;
@property (nonatomic) double aestheticScore;
@property (nonatomic) double contentScore;
@property (nonatomic) double criteriaScore;
@property (retain, nonatomic) NSNumber *symbolIndex;
@property (retain, nonatomic) NSString *dedupingType;
@property (retain, nonatomic) NSNumber *dedupedSymbolIndex;
@property (nonatomic) unsigned long long index;

+ (double)cellHeightWithCellWidth:(double)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setClusterParity:(unsigned long long)arg1;
- (void)setComparisonMatch:(_Bool)arg1;

@end
