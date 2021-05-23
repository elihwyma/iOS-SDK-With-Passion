/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class UIColor, UIFont;

@protocol CNUINavigationListStyle <Swift>

@property (nonatomic, readonly) UIColor *cellBackgroundColor;
@property (nonatomic, readonly) UIColor *cellBackgroundExpandedColor;
@property (nonatomic, readonly) UIColor *cellBackgroundHighlightedColor;
@property (nonatomic, readonly) UIColor *cellTitleTextColor;
@property (nonatomic, readonly) UIColor *cellTitleTextHighlightedColor;
@property (nonatomic, readonly) UIColor *cellSubtitleTextColor;
@property (nonatomic, readonly) UIColor *cellSubtitleTextHighlightedColor;
@property (nonatomic, readonly) UIColor *detailCellTitleTextColor;
@property (nonatomic, readonly) UIColor *detailCellTitleTextHighlightedColor;
@property (nonatomic, readonly) UIColor *detailCellSubtitleTextColor;
@property (nonatomic, readonly) UIColor *detailCellSubtitleTextHighlightedColor;
@property (nonatomic, readonly) UIColor *actionIconFillColor;
@property (nonatomic, readonly) UIColor *actionIconFillHighlightedColor;
@property (nonatomic, readonly) UIFont *cellTitleFont;
@property (nonatomic, readonly) UIFont *cellSubtitleFont;
@property (nonatomic, readonly) UIFont *detailCellTitleFont;
@property (nonatomic, readonly) UIFont *detailCellSubtitleFont;
@property (nonatomic, readonly) double cellUserActionLeftMargin;
@property (nonatomic, readonly) double cellTitleLabelFirstBaselineAnchorConstraintConstant;
@property (nonatomic, readonly) double cellSubtitleLabelFirstBaselineAnchorConstraintConstant;
@property (nonatomic, readonly) double cellContentViewBottomAnchorConstraintConstant;
@property (nonatomic, readonly) double detailCellTitleLabelFirstBaselineAnchorConstraintConstant;
@property (nonatomic, readonly) double detailCellSubtitleLabelFirstBaselineAnchorConstraintConstant;
@property (nonatomic, readonly) double detailCellContentViewBottomAnchorConstraintConstant;
@property (nonatomic, readonly) _Bool showCellSeparator;

@end
