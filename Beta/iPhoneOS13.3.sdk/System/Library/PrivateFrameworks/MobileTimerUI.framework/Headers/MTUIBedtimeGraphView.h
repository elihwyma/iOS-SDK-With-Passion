/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <UIKit/UIView.h>

@class MTAlarm, MTUIBedtimeGraphData, NSArray, NSLayoutConstraint, NSMutableArray, UILayoutGuide, UITapGestureRecognizer;

@interface MTUIBedtimeGraphView : UIView

{
    UILayoutGuide *_axesLayoutGuide;
    MTAlarm *_sleepAlarm;
    NSArray *_sleepData;
    MTUIBedtimeGraphData *_graphData;
    NSMutableArray *_orderedGraphColumns;
    NSLayoutConstraint *_topAxisConstraint;
    NSLayoutConstraint *_bottomAxisConstraint;
    NSArray *_dayLabels;
    NSArray *_labelTitles;
    NSArray *_dayCenterXConstraints;
    NSLayoutConstraint *_labelBaselineConstraint;
    UITapGestureRecognizer *_tapRecognizer;
    unsigned long long _graphStyle;
}

@property (retain, nonatomic) MTUIBedtimeGraphData *graphData;
@property (retain, nonatomic) NSMutableArray *orderedGraphColumns;
@property (retain, nonatomic) UILayoutGuide *axesLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *topAxisConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomAxisConstraint;
@property (retain, nonatomic) NSArray *dayLabels;
@property (retain, nonatomic) NSArray *labelTitles;
@property (retain, nonatomic) NSArray *dayCenterXConstraints;
@property (retain, nonatomic) NSLayoutConstraint *labelBaselineConstraint;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (nonatomic) unsigned long long graphStyle;
@property (nonatomic, readonly) double bedtimeOriginY;
@property (nonatomic, readonly) double wakeTimeOriginY;
@property (copy, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) NSArray *sleepData;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1 graphStyle:(unsigned long long)arg2;
- (void)graphTapped:(id)arg1;
- (void)_updateLabelTitles;
- (double)barOriginXForBarAtIndex:(unsigned long long)arg1 outOfCount:(unsigned long long)arg2 shouldChangeForRTL:(_Bool)arg3;
- (void)processSleepData;

@end
