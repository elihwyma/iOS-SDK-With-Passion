/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKSectionMetrics.h>

@interface GKDynamicColumnSectionMetrics : GKSectionMetrics

{
    unsigned long long _columnsInPortrait;
    unsigned long long _columnsInLandscape;
}

@property (nonatomic) unsigned long long columnsInPortrait;
@property (nonatomic) unsigned long long columnsInLandscape;

+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2 forIdiom:(long long)arg3;
+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdiom:(long long)arg1;
- (struct CGSize)itemSizeForCollectionView:(id)arg1;
- (void)updateColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2;

@end
