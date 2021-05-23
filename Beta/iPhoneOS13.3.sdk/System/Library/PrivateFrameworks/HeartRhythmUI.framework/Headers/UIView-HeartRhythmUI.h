/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@interface UIView (HeartRhythmUI)

- (void)hrui_constraintAspectRatioFromSize:(struct CGSize)arg1;
- (void)hrui_alignHorizontalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)hrui_maskAllCornersWithRadius:(double)arg1;
- (void)hrui_alignHorizontalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)hrui_alignConstraintsWithTopAnchor:(id)arg1 bottomAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets)arg3;
- (void)hrui_alignConstraintsWithLeadingAnchor:(id)arg1 trailingAnchor:(id)arg2 insets:(struct NSDirectionalEdgeInsets)arg3;
- (void)hrui_maskCorners:(unsigned long long)arg1 radius:(double)arg2;
- (void)hrui_alignConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)hrui_alignVerticalConstraintsWithView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)hrui_alignVerticalConstraintsWithGuide:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;

@end
