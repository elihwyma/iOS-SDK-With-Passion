/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class GKSectionMetrics, GKSupplementaryViewMetrics;

@protocol UICollectionViewDataSource;

@interface GKCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

{
    _Bool _allSectionItemsVisible;
    _Bool _isPinned;
    _Bool _isPartOfGlobalPinningGroup;
    _Bool _doesAbutLeftOfCollectionView;
    double _unpinnedY;
    id <UICollectionViewDataSource> _dataSource;
    GKSectionMetrics *_sectionMetrics;
    GKSupplementaryViewMetrics *_supplementaryMetrics;
    unsigned long long _currentVisibleItemCount;
    unsigned long long _currentTotalItemCount;
    unsigned long long _maxTotalItemCount;
    double _leadingMargin;
    double _trailingMargin;
    unsigned long long _gridLayoutLocation;
}

@property (nonatomic) _Bool isPartOfGlobalPinningGroup;
@property (nonatomic) unsigned long long gridLayoutLocation;
@property (nonatomic) _Bool doesAbutLeftOfCollectionView;
@property (nonatomic) _Bool allSectionItemsVisible;
@property (nonatomic) _Bool isPinned;
@property (nonatomic) double unpinnedY;
@property (retain, nonatomic) id <UICollectionViewDataSource> dataSource;
@property (retain, nonatomic) GKSectionMetrics *sectionMetrics;
@property (retain, nonatomic) GKSupplementaryViewMetrics *supplementaryMetrics;
@property (nonatomic) unsigned long long currentVisibleItemCount;
@property (nonatomic) unsigned long long currentTotalItemCount;
@property (nonatomic) unsigned long long maxTotalItemCount;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
