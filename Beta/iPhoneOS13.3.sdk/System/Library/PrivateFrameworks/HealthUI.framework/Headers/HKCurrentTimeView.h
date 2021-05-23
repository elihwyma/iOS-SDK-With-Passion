/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKCurrentTimeChevronButton, NSString, UIButton;

@protocol HKCurrentTimeViewDelegate;

@interface HKCurrentTimeView : UIView

{
    UIButton *_currentTimeButton;
    HKCurrentTimeChevronButton *_previousTimeIndexButton;
    HKCurrentTimeChevronButton *_nextTimeIndexButton;
    _Bool _disableControls;
    _Bool _currentTimeButtonEnabled;
    _Bool _omitPrevNextButtons;
    NSString *_currentTimeString;
    id <HKCurrentTimeViewDelegate> _delegate;
}

@property (copy, nonatomic) NSString *currentTimeString;
@property (weak, nonatomic) id <HKCurrentTimeViewDelegate> delegate;
@property (nonatomic) _Bool disableControls;
@property (nonatomic) _Bool previousTimeButtonEnabled;
@property (nonatomic) _Bool nextTimeButtonEnabled;
@property (nonatomic) _Bool currentTimeButtonEnabled;
@property (nonatomic) _Bool omitPrevNextButtons;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupViewWithWideHorizontalMargin:(_Bool)arg1;
- (id)initWithWideHorizontalMargin:(_Bool)arg1;
- (void)currentTimeButtonTapped:(id)arg1;
- (id)_currentTimeButtonFont;
- (void)previousTimeIndexButtonTapped:(id)arg1;
- (void)nextTimeIndexButtonTapped:(id)arg1;
- (void)_handleContentSizeCategoryDidChange;
- (id)_colorIfForeground:(_Bool)arg1 enabled:(_Bool)arg2;
- (id)_labelColor:(_Bool)arg1;
- (id)_foregroundColor:(_Bool)arg1;
- (id)_backgroundColor:(_Bool)arg1;
- (id)_tintColor:(_Bool)arg1;
- (double)_foregroundAlpha:(_Bool)arg1;
- (double)_backgroundAlpha:(_Bool)arg1;
- (double)_currentTimeButtonBaselineToTop;
- (double)_currentTimeButtonBaselineToBottom;

@end
