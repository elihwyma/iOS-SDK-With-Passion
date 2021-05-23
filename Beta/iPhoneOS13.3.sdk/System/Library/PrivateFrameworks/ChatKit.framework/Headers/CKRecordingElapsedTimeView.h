/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class NSDate, NSDateComponentsFormatter, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface CKRecordingElapsedTimeView : UIView

{
    NSDateComponentsFormatter *__durationFormatter;
    UILabel *__timeLabel;
    UIView *__recordingDotView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property (nonatomic, readonly) NSDateComponentsFormatter *_durationFormatter;
@property (nonatomic, readonly) UILabel *_timeLabel;
@property (nonatomic, readonly) UIView *_recordingDotView;
@property (nonatomic, readonly) NSTimer *_updateTimer;
@property (nonatomic, readonly) NSDate *_startTime;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)_update:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)startTimer;
- (void)resetTimer;
- (void)_commonCAMElapsedTimeViewInitialization;
- (void)_beginRecordingAnimation;
- (void)_endRecordingAnimation;
- (void)endTimer;

@end
