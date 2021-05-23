/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIViewController.h>

#import <SpringBoardHome/Swift-Protocol.h>

@class NSLayoutConstraint, SBUILegibilityLabel, UIView, _UILegibilitySettings;

@protocol SBFDateProviding;

@interface SBHDateHeaderViewController : UIViewController <Swift>

{
    id _timerToken;
    unsigned long long _updateDisabledCount;
    _UILegibilitySettings *_legibilitySettings;
    id <SBFDateProviding> _dateProvider;
    SBUILegibilityLabel *_timeLabel;
    UIView *_timeContainer;
    SBUILegibilityLabel *_dateLabel;
    NSLayoutConstraint *_timeLeadingConstraint;
}

@property (nonatomic, readonly) SBUILegibilityLabel *timeLabel;
@property (nonatomic, readonly) UIView *timeContainer;
@property (nonatomic, readonly) SBUILegibilityLabel *dateLabel;
@property (nonatomic, readonly) NSLayoutConstraint *timeLeadingConstraint;
@property (retain, nonatomic) id <SBFDateProviding> dateProvider;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

+ (id)timeFont;
+ (CDStruct_d2b197d1)timeFontMetrics;
+ (id)dateFont;
+ (double)_topMarginFromTimeFont;
+ (CDStruct_d2b197d1)dateFontMetrics;

- (void)dealloc;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_stopUpdateTimer;
- (void)_startUpdateTimer;
- (void)_updateLabels;
- (struct UIEdgeInsets)_timeLabelInsetsForTimeString:(id)arg1;
- (struct UIEdgeInsets)_cachedGlyphInsetsTimeFontForString:(id)arg1;
- (void)_updateFormat;
- (void)_handleTimeZoneChange;
- (void)_updateTimeLeadingConstraint;

@end
