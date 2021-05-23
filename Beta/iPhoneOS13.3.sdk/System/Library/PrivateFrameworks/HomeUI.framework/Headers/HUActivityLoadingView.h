/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UIStackView;

@interface HUActivityLoadingView : UIView

{
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIStackView *_titleSpinnerStackView;
    UIStackView *_mainStackView;
}

@property (nonatomic, readonly) UIStackView *titleSpinnerStackView;
@property (nonatomic, readonly) UIStackView *mainStackView;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *detailTextLabel;

+ (id)watchedKeyPaths;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1 activityIndicatorStyle:(long long)arg2;
- (void)_watchLabelsForContentAndResizeIfNecessary;

@end
