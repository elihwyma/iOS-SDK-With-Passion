/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class UIView;

@protocol HUQuickControlControllableView, HUQuickControlInteractionCoordinatorDelegate;

@interface HUQuickControlInteractionCoordinator : NSObject

{
    _Bool _viewVisible;
    _Bool _userInteractionEnabled;
    UIView<HUQuickControlControllableView> *_controlView;
    id <HUQuickControlInteractionCoordinatorDelegate> _delegate;
}

@property (nonatomic) _Bool viewVisible;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (retain, nonatomic) id value;
@property (nonatomic, readonly) UIView<HUQuickControlControllableView> *controlView;
@property (weak, nonatomic) id <HUQuickControlInteractionCoordinatorDelegate> delegate;

- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)initWithControlView:(id)arg1 delegate:(id)arg2;
- (void)recordInteractionStart;

@end
