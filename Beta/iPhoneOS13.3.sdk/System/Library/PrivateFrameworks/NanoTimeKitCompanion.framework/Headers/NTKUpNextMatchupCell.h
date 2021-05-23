/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class NTKUpNextMatchupScoreView, NTKUpNextMatchupUpcomingView, UILayoutGuide;

@interface NTKUpNextMatchupCell : NTKUpNextBaseCell

{
    NTKUpNextMatchupScoreView *_scoreView;
    NTKUpNextMatchupUpcomingView *_upcomingView;
    UILayoutGuide *_scoreLayoutGuide;
    UILayoutGuide *_upcomingLayoutGuide;
}

- (void)prepareForReuse;
- (void)setPaused:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureWithContent:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)setFilterProvider:(id)arg1;
- (void)updateTimeLabel;

@end
