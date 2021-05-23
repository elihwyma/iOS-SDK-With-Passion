/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKFont, NSArray, NSDate, NSString, NTKColoringLabel, UIImageView, UILayoutGuide;

@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextMatchupScoreView : UIView <Swift>

{
    UIImageView *_homeLogoImageView;
    NTKColoringLabel *_homeNameLabel;
    NTKColoringLabel *_homeDescriptionLabel;
    UIImageView *_awayLogoIamgeView;
    NTKColoringLabel *_awayNameLabel;
    NTKColoringLabel *_awayDescriptionLabel;
    NTKColoringLabel *_statusLabel;
    NTKColoringLabel *_timeLabel;
    NSDate *_timeForLabel;
    CLKFont *_boldMatchupFont;
    CLKFont *_regularMatchupFont;
    CLKFont *_statusFont;
    UILayoutGuide *_logoLayoutGuide;
    UILayoutGuide *_descriptionLayoutGuide;
    NSArray *_withLogoLayoutConstraints;
    NSArray *_withoutDateLayoutConstraints;
    _Bool _paused;
    id <CLKMonochromeFilterProvider> _filterProvider;
}

@property (nonatomic, getter=isPaused) _Bool paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

+ (id)_timeStringForFetchDate:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)updateTimeLabel;
- (void)configureWithMatchup:(id)arg1;

@end
