/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class NSDate, NSString, NSTimer, UIImageView, UILabel;

@interface CAMElapsedTimeView : UIView

{
    _Bool _usingBadgeAppearance;
    long long _layoutStyle;
    long long _backgroundStyle;
    NSString *_contentSizeCategory;
    UILabel *__timeLabel;
    UIImageView *__recordingImageView;
    UIImageView *__backgroundView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property (nonatomic, readonly) UILabel *_timeLabel;
@property (nonatomic, readonly) UIImageView *_recordingImageView;
@property (nonatomic, readonly) UIImageView *_backgroundView;
@property (nonatomic, readonly) NSTimer *_updateTimer;
@property (nonatomic, readonly) NSDate *_startTime;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) _Bool usingBadgeAppearance;
@property (nonatomic, getter=isShowingBackground) _Bool showingBackground;
@property (nonatomic) long long backgroundStyle;
@property (copy, nonatomic) NSString *contentSizeCategory;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateText;
- (void)startTimer;
- (void)resetTimer;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateFont;
- (void)_beginRecordingAnimation;
- (void)_endRecordingAnimation;
- (void)endTimer;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_setStartTime:(id)arg1;
- (id)initWithBadgeAppearance;
- (id)_backgroundRedColor;
- (void)_updateBackgroundViewAnimated:(_Bool)arg1;
- (void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(long long)arg1 usingBadgeAppearance:(_Bool)arg2;
- (void)_updateForTimer:(id)arg1;
- (void)setShowingBackground:(_Bool)arg1 animated:(_Bool)arg2;

@end
