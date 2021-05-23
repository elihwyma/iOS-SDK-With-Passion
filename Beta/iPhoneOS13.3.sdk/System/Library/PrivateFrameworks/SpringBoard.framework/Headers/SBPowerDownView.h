/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUIServices/SBUIPowerDownView.h>

@protocol SBPowerDownViewDelegate;

@interface SBPowerDownView : SBUIPowerDownView

@property (weak, nonatomic) id <SBPowerDownViewDelegate> powerDownDelegate;

- (void)_idleTimerFired;
- (void)_cancelButtonTapped;
- (void)_powerDownSliderDidBeginSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidCancelSlide;

@end
