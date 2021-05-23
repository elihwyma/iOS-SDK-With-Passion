/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKDevice, CLKUIQuadView, CLLocation, NSDate, NTKAstronomyLocationDot, NTKAstronomyVistaView, NTKDelayedBlock;

@interface NTKAstronomyRichComplicationContentView : UIView <Swift>

{
    NTKAstronomyVistaView *_astronomyVistaView;
    NTKAstronomyLocationDot *_locationDot;
    CLKDevice *_device;
    NSDate *_timelineDate;
    NSDate *_timeTravelDate;
    unsigned int _isPaused:1;
    unsigned int _isAnimating:1;
    unsigned int _isRenderOneFrame:1;
    NTKDelayedBlock *_stopAnimationDelayedBlock;
    CLLocation *_currentLocation;
}

@property (nonatomic, readonly) CLKUIQuadView *quadView;

- (void)layoutSubviews;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)prepareWristRaiseAnimation;
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)handleWristRaiseScreenWake;
- (void)handleOrdinaryScreenWake;
- (void)astronomyVistaViewContentsAnimationFinished:(id)arg1;
- (void)astronomyVistaViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (id)initForDevice:(id)arg1 diameter:(double)arg2;
- (void)applyPausedUpdate:(_Bool)arg1;
- (void)handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_showLocationDot;
- (void)_hideLocationDot;

@end
