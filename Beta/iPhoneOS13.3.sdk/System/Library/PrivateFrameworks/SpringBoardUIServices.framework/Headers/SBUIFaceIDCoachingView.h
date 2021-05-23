/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class NSString, UIMorphingLabel, _UILegibilitySettings;

@interface SBUIFaceIDCoachingView : UIView

{
    unsigned long long _coachingCondition;
    NSString *_currentSizeCategory;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_labelText;
    UIMorphingLabel *_label;
}

@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic, getter=_label) UIMorphingLabel *label;
@property (nonatomic) unsigned long long coachingCondition;
@property (retain, nonatomic) NSString *currentSizeCategory;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) double stringWidth;

- (id)init;
- (void)layoutSubviews;
- (void)_contentSizeCategoryChanged;
- (void)setCoachingCondition:(unsigned long long)arg1 animated:(_Bool)arg2 delay:(double)arg3;
- (void)_resizeLabelToFirstSizeCategoryThatFits;
- (void)_updateLabelTextForCurrentCoachingConditionAnimated:(_Bool)arg1;

@end
