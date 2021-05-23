/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIView.h>

@class CCUIStatusBar, MTMaterialView, SBUIChevronView;

@protocol CCUIStatusBarDelegate;

@interface CCUIHeaderPocketView : UIView

{
    MTMaterialView *_headerBackgroundView;
    UIView *_headerLineView;
    SBUIChevronView *_headerChevronView;
    CCUIStatusBar *_statusBar;
    id <CCUIStatusBarDelegate> _statusBarDelegate;
    unsigned long long _mode;
    double _backgroundAlpha;
    double _contentAlpha;
    double _contentAlphaMultiplier;
    struct UIEdgeInsets _edgeInsets;
    struct CGAffineTransform _contentTransform;
}

@property (nonatomic, readonly) struct CGRect contentBounds;
@property (nonatomic, readonly) CCUIStatusBar *statusBar;
@property (weak, nonatomic) id <CCUIStatusBarDelegate> statusBarDelegate;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double contentAlpha;
@property (nonatomic) double contentAlphaMultiplier;
@property (nonatomic) struct CGAffineTransform contentTransform;
@property (nonatomic) struct CGAffineTransform compactScaleTransform;
@property (nonatomic) unsigned long long chevronState;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateAlpha;
- (void)_updateContentTransform;

@end
