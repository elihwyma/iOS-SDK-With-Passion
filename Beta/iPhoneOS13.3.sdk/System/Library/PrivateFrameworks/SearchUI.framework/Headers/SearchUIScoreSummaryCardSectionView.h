/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, TLKSplitHeaderView;

@interface SearchUIScoreSummaryCardSectionView

{
    TLKSplitHeaderView *_splitHeaderView;
}

@property (retain, nonatomic) TLKSplitHeaderView *splitHeaderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (int)separatorStyleForCardSection:(id)arg1;
+ (id)titleForScoreBoard:(id)arg1 forDisplay:(_Bool)arg2;

- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (id)setupContentView;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;
- (void)updateWithRowModel:(id)arg1;

@end
