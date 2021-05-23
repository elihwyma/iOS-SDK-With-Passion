/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@interface BFFStyle : NSObject

+ (id)sharedStyle;

- (id)backgroundColor;
- (struct CGSize)_effectiveSizeForIconSize:(struct CGSize)arg1 inView:(id)arg2;
- (double)headerYOffsetForIconSize:(struct CGSize)arg1 inView:(id)arg2;
- (double)headerIconBaselineOffsetForView:(id)arg1;
- (double)headerTitleBaselineOffsetForView:(id)arg1 hasIcon:(_Bool)arg2;
- (double)baselineInsetForHeaderTitle;
- (id)headerTitleFont;
- (void)applyThemeToNavigationController:(id)arg1 allowUnderlap:(_Bool)arg2;
- (struct UIEdgeInsets)horizontalInsetsForContainingInView:(id)arg1 width:(double)arg2;
- (id)tableCellFont;
- (double)headerTitleBaselineOffsetForView:(id)arg1 iconSize:(struct CGSize)arg2;
- (double)headerYOffsetForIcon:(id)arg1 inView:(id)arg2;
- (double)headerIconBaselineOffset;
- (double)headerTitleBaselineOffsetHasIcon:(_Bool)arg1;
- (double)headerSubheaderBaselineSpacingForView:(id)arg1;
- (double)screenHeaderHeightForView:(id)arg1;
- (double)screenHeaderFooterSideInsetForView:(id)arg1;
- (struct UIEdgeInsets)edgeInsetsForHeaderView:(id)arg1;
- (double)singleLineCellHeightForTable:(id)arg1;
- (double)nonTableHorizontalMargin;
- (double)horizontalMarginForView:(id)arg1;
- (struct UIEdgeInsets)edgeInsetsForTable:(id)arg1;
- (void)applyThemeToNavigationController:(id)arg1;
- (id)continueButtonWithTitle:(id)arg1 inView:(id)arg2;
- (struct CGSize)sizeForContinueButtonInAncestor:(id)arg1;
- (double)tallRowHeight;
- (void)applyThemeToLabel:(id)arg1;
- (void)applyThemeToTextView:(id)arg1;
- (void)applyThemeToAllTableViews;
- (void)applyThemeToTitleLabel:(id)arg1;
- (void)applyThemeToTableCell:(id)arg1;
- (void)applyThemeToSectionHeaderLabel:(id)arg1;
- (void)applyAutomaticScrollToEdgeBehaviorOnNavgationItem:(id)arg1;
- (void)applyThemeToRemoteUIWebViewController:(id)arg1;

@end
