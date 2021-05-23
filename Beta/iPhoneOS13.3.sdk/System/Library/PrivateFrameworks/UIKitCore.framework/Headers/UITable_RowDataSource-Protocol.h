/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIView;

@protocol UITableConstants;

@protocol UITable_RowDataSource <Swift>

@property (nonatomic, readonly, getter=_constants) id <UITableConstants> constants;
@property (nonatomic, readonly, getter=_headerFooterLeadingMarginWidth) double headerFooterLeadingMarginWidth;
@property (nonatomic, readonly, getter=_headerFooterTrailingMarginWidth) double headerFooterTrailingMarginWidth;
@property (nonatomic, readonly, getter=_defaultSectionHeaderHeight) double defaultSectionHeaderHeight;
@property (nonatomic, readonly, getter=_defaultSectionFooterHeight) double defaultSectionFooterHeight;
@property (nonatomic, readonly, getter=_sidePadding) double sidePadding;
@property (nonatomic, readonly, getter=_contentInset) struct UIEdgeInsets _contentInset;
@property (nonatomic, readonly, getter=_tableContentInset) struct UIEdgeInsets tableContentInset;
@property (nonatomic, readonly, getter=_rowSpacing) double rowSpacing;
@property (nonatomic, readonly, getter=_isTableHeaderAutohiding) _Bool isTableHeaderAutohiding;
@property (nonatomic, readonly, getter=_heightForTableHeader) double heightForTableHeader;
@property (nonatomic, readonly, getter=_heightForTableFooter) double heightForTableFooter;
@property (nonatomic, readonly, getter=_providesRowHeights) _Bool providesRowHeights;
@property (nonatomic, readonly, getter=_estimatesHeights) _Bool estimatesHeights;
@property (nonatomic, readonly, getter=_estimatesRowHeights) _Bool estimatesRowHeights;
@property (nonatomic, readonly, getter=_estimatesSectionHeaderHeights) _Bool estimatesSectionHeaderHeights;
@property (nonatomic, readonly, getter=_estimatesSectionFooterHeights) _Bool estimatesSectionFooterHeights;
@property (nonatomic, readonly, getter=_tableHeaderView) UIView *tableHeaderView;
@property (nonatomic, readonly, getter=_tableFooterView) UIView *tableFooterView;
@property (nonatomic, readonly, getter=_shouldUseSearchBarHeaderBehavior) _Bool shouldUseSearchBarHeaderBehavior;
@property (nonatomic, readonly, getter=_shouldUseNewHeaderFooterBehavior) _Bool shouldUseNewHeaderFooterBehavior;

- (unsigned short)_dataSourceHeightForRowAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)_dataSourceHeightForHeaderInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_dataSourceHeightForFooterInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_heightForRowAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)_heightForHeaderInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_heightForFooterInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_estimatedHeightForRowAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)_estimatedHeightForHeaderInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_estimatedHeightForFooterInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_coalesceContentSizeUpdateWithDelta: /* Error: Ran out of types for this method. */;
- (unsigned short)_applyContentSizeDeltaImmediately: /* Error: Ran out of types for this method. */;
- (unsigned short)_titleForHeaderInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_titleForFooterInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_detailTextForHeaderInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_viewForHeaderInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_viewForFooterInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_titleAlignmentForHeaderInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_titleAlignmentForFooterInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_maxTitleWidthForHeaderInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_maxTitleWidthForFooterInSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_shouldStripHeaderTopPaddingForSection: /* Error: Ran out of types for this method. */;
- (unsigned short)_setHeight:forRowAtIndexPath:usingPresentationValues: /* Error: Ran out of types for this method. */;

@end
