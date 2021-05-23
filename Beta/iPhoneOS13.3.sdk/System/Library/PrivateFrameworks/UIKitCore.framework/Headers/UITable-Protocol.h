/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIColor, UIScrollView;

@protocol UITable <Swift>

@property (nonatomic, readonly, getter=_scrollView) UIScrollView *scrollView;
@property (nonatomic, readonly, getter=_numberOfSections) long long numberOfSections;
@property (nonatomic, readonly) _Bool allowsMultipleSelection;
@property (nonatomic, readonly) _Bool allowsMultipleSelectionDuringEditing;
@property (nonatomic, readonly) double rowHeight;
@property (nonatomic, readonly) double sectionHeaderHeight;
@property (nonatomic, readonly) double sectionFooterHeight;
@property (nonatomic, readonly) double estimatedRowHeight;
@property (nonatomic, readonly) double estimatedSectionHeaderHeight;
@property (nonatomic, readonly) double estimatedSectionFooterHeight;
@property (nonatomic, readonly) struct UIEdgeInsets separatorInset;
@property (nonatomic, readonly, getter=_separatorInsetIsRelativeToCellEdges) _Bool separatorInsetIsRelativeToCellEdges;
@property (nonatomic, readonly) _Bool usesVariableMargins;
@property (nonatomic, readonly) _Bool overlapsSectionHeaderViews;
@property (nonatomic, readonly, getter=_backgroundInset) double backgroundInset;
@property (nonatomic, readonly, getter=_cellSafeAreaInsets) struct UIEdgeInsets cellSafeAreaInsets;
@property (nonatomic, readonly) _Bool cellLayoutMarginsFollowReadableWidth;
@property (nonatomic, readonly, getter=_topPadding) double topPadding;
@property (nonatomic, readonly, getter=_bottomPadding) double bottomPadding;
@property (nonatomic, readonly, getter=_isShowingIndex) _Bool showingIndex;
@property (nonatomic, readonly, getter=_indexFrame) struct CGRect indexFrame;
@property (nonatomic, readonly, getter=_indexBarExtentFromEdge) double indexBarExtentFromEdge;
@property (nonatomic, readonly, getter=_sectionContentInset) struct UIEdgeInsets sectionContentInset;
@property (nonatomic, readonly, getter=_rawSectionContentInset) struct UIEdgeInsets rawSectionContentInset;
@property (nonatomic, readonly, getter=_sectionCornerRadius) double sectionCornerRadius;
@property (nonatomic, readonly, getter=_sectionContentInsetFollowsLayoutMargins) _Bool sectionContentInsetFollowsLayoutMargins;
@property (nonatomic, readonly, getter=_accessoryBaseColor) UIColor *accessoryBaseColor;
@property (nonatomic, readonly, getter=_multiselectCheckmarkColor) UIColor *multiselectCheckmarkColor;

- (unsigned short)_numberOfRowsInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_shouldHaveHeaderViewForSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_shouldHaveFooterViewForSection: /* Error: Ran out of types for this method. */;

@end
