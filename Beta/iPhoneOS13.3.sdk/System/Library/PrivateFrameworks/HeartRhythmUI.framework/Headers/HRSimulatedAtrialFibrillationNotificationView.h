/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class HRSimulatedAtrialFibrillationQuickLookView;

@interface HRSimulatedAtrialFibrillationNotificationView : UIView

{
    HRSimulatedAtrialFibrillationQuickLookView *_simView;
}

@property (retain, nonatomic) HRSimulatedAtrialFibrillationQuickLookView *simView;

- (id)init;
- (void)layoutSubviews;

@end
