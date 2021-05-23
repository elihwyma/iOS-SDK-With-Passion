/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKPresentationViewControllerProxy.h>

@class CMAttitude, CMMotionManager, NSOperationQueue, OKRoundProgressView, OKUILabelHUDView;

@interface OKPresentationViewController : OKPresentationViewControllerProxy

{
    CMMotionManager *_motionManager;
    CMAttitude *_motionAttitudeReference;
    long long _motionOrientationReference;
    NSOperationQueue *_motionQueue;
    _Bool _shouldForwardMotion;
    double _motionLastRotationX;
    double _motionLastRotationY;
    double _motionLastRotationZ;
    OKUILabelHUDView *_couchLabelHUDView;
    OKRoundProgressView *_roundProgressView;
}

@property (retain, nonatomic) OKUILabelHUDView *couchLabelHUDView;
@property (retain) CMAttitude *motionAttitudeReference;

- (void)dealloc;
- (id)colorSpace;
- (void)commonInit;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)setActivityIndicatorVisible:(_Bool)arg1;
- (void)orientationChanged:(id)arg1;
- (void)_startPresentation;
- (void)updateMotion;
- (_Bool)isActivityIndicatorVisible;
- (void)updateActivityIndicatorWithProgress:(double)arg1;
- (void)_updateMotion:(long long)arg1;
- (void)_startMotion;

@end
