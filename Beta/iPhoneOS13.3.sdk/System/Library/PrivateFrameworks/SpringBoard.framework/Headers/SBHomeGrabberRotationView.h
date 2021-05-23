/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSMutableArray, SBFHomeGrabberSettings, SBHomeGrabberView;

@interface SBHomeGrabberRotationView : UIView

{
    NSMutableArray *_rotationWrapperViews;
    SBFHomeGrabberSettings *_grabberSettings;
    SBHomeGrabberView *_grabberView;
    long long _orientation;
}

@property (nonatomic, readonly) SBHomeGrabberView *grabberView;
@property (nonatomic) long long orientation;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 settings:(id)arg2;
- (id)_addWrapperViewWithOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2 rotationSettings:(id)arg3;

@end
