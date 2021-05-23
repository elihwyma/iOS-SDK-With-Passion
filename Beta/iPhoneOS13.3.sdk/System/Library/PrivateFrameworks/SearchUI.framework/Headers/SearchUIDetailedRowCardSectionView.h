/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class NSString, SearchUIDetailedRowModel, SearchUIDetailedView;

@interface SearchUIDetailedRowCardSectionView

@property (retain, nonatomic) SearchUIDetailedView *contentView;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)footnoteButtonPressed;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;
- (void)updateWithRowModel:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;

@end
