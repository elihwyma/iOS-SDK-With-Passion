/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSString, NTKColoringLabel, UIImageView, UILayoutGuide;

@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextMatchupUpcomingView : UIView <Swift>

{
    UIImageView *_homeLogoImageView;
    UIImageView *_awayLogoImageView;
    NTKColoringLabel *_versusLabel;
    NTKColoringLabel *_descriptionLabel;
    UILayoutGuide *_homeLogoLayoutGuide;
    UILayoutGuide *_awayLogoLayoutGuide;
    _Bool _paused;
    id <CLKMonochromeFilterProvider> _filterProvider;
}

@property (nonatomic, getter=isPaused) _Bool paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)configureWithMatchup:(id)arg1;

@end
