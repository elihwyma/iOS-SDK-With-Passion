/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <UIKit/UIView.h>

@class ASCompetition, NSDateFormatter, NSString, UIColor, UIFont;

@interface ASCompetitionGraphView : UIView

{
    ASCompetition *_competition;
    NSDateFormatter *_dateFormatter;
    _Bool _highlightsCurrentDay;
    _Bool _showsBackgroundDateGuide;
    _Bool _showsBackgroundScoreGuide;
    _Bool _drawsDailyScoreLabels;
    _Bool _drawsFutureScoreDots;
    long long _alignment;
    double _horizontalInset;
    double _barWidth;
    double _spaceBetweenBars;
    double _bottomPadding;
    double _dayLabelBaselineOffset;
    double _maxBarHeight;
    UIFont *_currentDateFont;
    UIFont *_dateFont;
    UIColor *_dateColor;
    UIColor *_highlightedDateColor;
}

@property (retain, nonatomic) ASCompetition *competition;
@property (nonatomic) long long alignment;
@property (copy, nonatomic) NSString *dateFormat;
@property (nonatomic) double horizontalInset;
@property (nonatomic) double barWidth;
@property (nonatomic) double spaceBetweenBars;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double dayLabelBaselineOffset;
@property (nonatomic) double maxBarHeight;
@property (retain, nonatomic) UIFont *currentDateFont;
@property (retain, nonatomic) UIFont *dateFont;
@property (retain, nonatomic) UIColor *dateColor;
@property (retain, nonatomic) UIColor *highlightedDateColor;
@property (nonatomic) _Bool highlightsCurrentDay;
@property (nonatomic) _Bool showsBackgroundDateGuide;
@property (nonatomic) _Bool showsBackgroundScoreGuide;
@property (nonatomic) _Bool drawsDailyScoreLabels;
@property (nonatomic) _Bool drawsFutureScoreDots;
@property (nonatomic, readonly) double lastBaselineY;

+ (id)companionGraph;
+ (id)gizmoGraph;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (double)preferredHeight;
- (unsigned long long)_maxDailyScore;
- (id)_attributesForDateLabelWithDate:(id)arg1;
- (double)_firstBarOriginXForDateLabelOriginX:(double)arg1 dateLabelWidth:(double)arg2;
- (double)_percentForScoreAtIndex:(unsigned long long)arg1 scores:(id)arg2 maxScore:(unsigned long long)arg3;
- (id)_allScores;
- (unsigned long long)_minDailyScore;

@end
