/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKSegmentedSelectorView.h>

@interface GKSegmentedSectionHeaderView : GKSegmentedSelectorView

{
    unsigned long long _sectionIndex;
}

@property (nonatomic) unsigned long long sectionIndex;

- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setTitles:(id)arg1;

@end
