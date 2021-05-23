/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIViewController.h>

@class CSHomeAffordanceView, NSMutableArray, SBFHomeGrabberSettings, UIView;

@interface CSHomeAffordanceViewController : UIViewController

{
    UIView *_counterRotationView;
    NSMutableArray *_rotationWrapperViews;
    long long _orientation;
    SBFHomeGrabberSettings *_settings;
    CSHomeAffordanceView *_homeAffordanceView;
    struct CGPoint _homeAffordanceOffset;
}

@property (nonatomic, readonly) CSHomeAffordanceView *homeAffordanceView;
@property (nonatomic) struct CGPoint homeAffordanceOffset;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)setLegibilitySettings:(id)arg1;
- (id)_addWrapperViewWithOrientation:(long long)arg1;
- (void)_layoutHomeAffordance;
- (struct CGRect)_homeAffordanceRestingFrame;

@end
