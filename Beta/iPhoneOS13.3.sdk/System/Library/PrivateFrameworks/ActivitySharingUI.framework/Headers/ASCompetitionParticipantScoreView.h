/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <UIKit/UIView.h>

@class ASCompetitionScoreViewConfiguration, NSNumber, NSString, UIColor, UILabel;

@interface ASCompetitionParticipantScoreView : UIView

{
    ASCompetitionScoreViewConfiguration *_configuration;
    UILabel *_nameLabel;
    UILabel *_primaryScoreLabel;
    UILabel *_secondaryScoreLabel;
    NSNumber *_previousLayoutWidth;
    _Bool _secondaryScoreEnabled;
    NSString *_name;
    double _nameFontSizeReduction;
    unsigned long long _primaryScore;
    double _primaryScoreFontSizeReduction;
    unsigned long long _secondaryScore;
    UIColor *_scoreColor;
    double _scoreLeftMargin;
    double _scoreRightMargin;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) double nameFontSizeReduction;
@property (nonatomic) unsigned long long primaryScore;
@property (nonatomic) double primaryScoreFontSizeReduction;
@property (nonatomic) unsigned long long secondaryScore;
@property (retain, nonatomic) UIColor *scoreColor;
@property (nonatomic) _Bool secondaryScoreEnabled;
@property (nonatomic) double scoreLeftMargin;
@property (nonatomic) double scoreRightMargin;
@property (nonatomic, readonly) double nameBaselineY;

- (id)initWithConfiguration:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutForWidth:(double)arg1;
- (void)_updateNameLabelWithFontSizeReduction:(double)arg1;
- (void)_updatePrimaryScoreLabelWithFontSizeReduction:(double)arg1;
- (void)_updateSecondaryScoreLabel;
- (double)_availableScoreWidthForWidth:(double)arg1;
- (double)_computeFontSizeReductionForLabel:(id)arg1 width:(double)arg2 maxReduction:(double)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (double)computePrimaryScoreFontSizeReductionForWidth:(double)arg1;
- (double)computeNameFontSizeReductionForWidth:(double)arg1;

@end
