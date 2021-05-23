/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class HRSimulatedAtrialFibrillationScreenView;

@interface HRSimulatedAtrialFibrillationQuickLookView : UIView

{
    HRSimulatedAtrialFibrillationScreenView *_screenView;
}

@property (retain, nonatomic) HRSimulatedAtrialFibrillationScreenView *screenView;

- (id)init;
- (void)layoutSubviews;
- (void)_setUpUI;

@end
