/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, NSString, NTKDigitalTimeLabel;

@interface NTKExtraLargeTimeView : UIView

{
    CLKDevice *_device;
    _Bool _statusBarVisible;
    _Bool _frozen;
    NTKDigitalTimeLabel *_timeHourView;
    NTKDigitalTimeLabel *_timeMinuteView;
}

@property (retain, nonatomic) NTKDigitalTimeLabel *timeHourView;
@property (retain, nonatomic) NTKDigitalTimeLabel *timeMinuteView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) _Bool frozen;

- (void)layoutSubviews;
- (void)setTimeOffset:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (void)setTopColor:(id)arg1;
- (void)setBottomColor:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setStatusBarVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareToZoom;
- (void)cleanupAfterZoom;
- (void)prepareWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (void)cancelWristRaiseAnimation;

@end
