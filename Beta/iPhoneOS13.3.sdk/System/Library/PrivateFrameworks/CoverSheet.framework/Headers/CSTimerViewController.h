/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class MTTimerManager, NSDate, NSTimer;

@protocol CSTimerViewControllerDelegate;

@interface CSTimerViewController : CSCoverSheetViewControllerBase

{
    _Bool _enabled;
    NSTimer *_updateTimer;
    NSDate *_endDate;
    MTTimerManager *_timerManager;
    id <CSTimerViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <CSTimerViewControllerDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (void)dealloc;
- (void)setEndDate:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_startTimer;
- (void)_stopTimer;
- (void)_updateTimerFired;
- (id)timerView;
- (_Bool)isEndDateValid;
- (void)_nextTimerChanged:(id)arg1;
- (void)_updateNextTimer;
- (void)_stopTimerNotifyingDelegate:(_Bool)arg1;
- (void)_updateTimerLabelView;
- (_Bool)isTimerActive;

@end
