/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@interface UICollectionReusableView (GKReusableView)

+ (void)_gkAdjustConstraintMargins:(id)arg1 leading:(double)arg2 trailing:(double)arg3;
+ (id)_gkStandardConstraintMetricsForIdiom:(long long)arg1;
+ (id)_gkStandardConstraintMetricsForIdiom:(long long)arg1 withOverrides:(id)arg2;
+ (void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2;
+ (id)_gkSetupTwoLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLabel:(id)arg3 lowerLabel:(id)arg4 leadingBetween:(double)arg5 fontTextStyle:(id)arg6 metricOverrides:(id)arg7;
+ (id)_gkSetupThreeLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLine:(id)arg3 middleLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6;
+ (void)_gkSetupSelectableTwoLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6;
+ (void)_gkSetupSelectableThreeLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 middleLine:(id)arg5 lowerLine:(id)arg6 metricOverrides:(id)arg7;

- (void)_gkSetLeadingGuideConstraint:(id)arg1 trailingGuideConstraint:(id)arg2;
- (id)_gkNewStandardTitleLabel;
- (id)_gkNewStandardInfoLabel;
- (id)_gkNewStandardImageView;

@end
