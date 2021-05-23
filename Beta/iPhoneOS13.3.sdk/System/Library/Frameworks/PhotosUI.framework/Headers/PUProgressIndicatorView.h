/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, PLRoundProgressView, UIActivityIndicatorView, UILabel, UIVisualEffectView;

@interface PUProgressIndicatorView : UIView

{
    UIActivityIndicatorView *_spinnerView;
    PLRoundProgressView *_pieProgressView;
    UIVisualEffectView *_visualEffectView;
    UILabel *_messageLabel;
    NSArray *_spinnerViewConstraints;
    NSArray *_pieProgressViewConstraints;
    NSArray *_backgroundViewConstraints;
    NSArray *_messageLabelConstraints;
    NSArray *_labelAndSpinnerConstraints;
    NSArray *_labelAndPieProgressConstraints;
    _Bool _wantsImmediateHide;
    _Bool _wantsAnimatedHide;
    CDUnknownBlockType _completionHandler;
    _Bool _isDeterminate;
    _Bool _showsBackground;
    long long _style;
    double _currentProgress;
    NSString *_localizedMessage;
    long long __currentState;
    double __timestampBeganShowing;
}

@property (nonatomic, setter=_setCurrentState:) long long _currentState;
@property (nonatomic, setter=_setTimestampBeganShowing:) double _timestampBeganShowing;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, getter=isShowingProgress) _Bool showingProgress;
@property (nonatomic) double currentProgress;
@property (copy, nonatomic) NSString *localizedMessage;
@property (nonatomic, setter=setDeterminate:) _Bool isDeterminate;
@property (nonatomic) _Bool showsBackground;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)updateConstraints;
- (void)beginShowingProgressWithDelay:(double)arg1 animated:(_Bool)arg2;
- (void)_updateSubviewsOrdering;
- (id)_newVisualEffectBackgroundView;
- (void)_updateProgressViewsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateProgressViewsWithAnimation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updatePieProgress;
- (void)beginShowingProgressImmediately:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_handleBeginShowingAnimated:(_Bool)arg1 wasImmediate:(_Bool)arg2;
- (void)endShowingProgressImmediately:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_endShowingProgressIfReady;

@end
