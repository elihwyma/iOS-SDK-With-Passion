/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, NSString, UIButton, UILongPressGestureRecognizer;

@protocol PUPhotoEditToolbarDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolbar : UIView

{
    UIView *_gradientBackgroundView;
    CAGradientLayer *_gradientLayer;
    UIView *_underlineView;
    NSArray *_basicViewsConstraints;
    NSArray *_mainActionButtonConstraints;
    NSArray *_secondaryActionButtonConstraints;
    NSArray *_toolButtonsConstraints;
    NSArray *_toolButtonLayoutGuides;
    UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;
    _Bool _useLargeShortSideHeight;
    _Bool _useTabBarHeight;
    long long _layoutOrientation;
    NSArray *_toolButtons;
    long long _buttonSpacing;
    UIButton *_mainActionButton;
    UIButton *_secondaryActionButton;
    UIView *_stretchableView;
    long long _backgroundStyle;
    long long _layoutDirection;
    double _longSideMargin;
    id <PUPhotoEditToolbarDelegate> _delegate;
    UIView *_mainToolbarContainer;
    struct UIEdgeInsets _contentPadding;
}

@property (retain, nonatomic) UIView *mainToolbarContainer;
@property (nonatomic) _Bool useLargeShortSideHeight;
@property (nonatomic) _Bool useTabBarHeight;
@property (nonatomic) struct UIEdgeInsets contentPadding;
@property (copy, nonatomic, readonly) NSArray *toolButtons;
@property (nonatomic, readonly) long long buttonSpacing;
@property (nonatomic, readonly) UIButton *mainActionButton;
@property (nonatomic, readonly) UIButton *secondaryActionButton;
@property (nonatomic, readonly) UIView *stretchableView;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) double longSideMargin;
@property (nonatomic, readonly) double shortSideSize;
@property (weak, nonatomic) id <PUPhotoEditToolbarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long layoutOrientation;

- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateBackgroundAnimated:(_Bool)arg1;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (void)setToolButtons:(id)arg1 mainActionButton:(id)arg2 secondaryActionButton:(id)arg3 stretchableView:(id)arg4;
- (void)setToolButtons:(id)arg1 buttonSpacing:(long long)arg2 mainActionButton:(id)arg3 secondaryActionButton:(id)arg4;
- (void)_setToolButtons:(id)arg1 buttonSpacing:(long long)arg2 mainActionButton:(id)arg3 secondaryActionButton:(id)arg4 stretchableView:(id)arg5;
- (double)tabBarHeight;
- (void)_invalidateAllConstraints;
- (void)_addLeadingConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;
- (void)_addTrailingConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;
- (void)_addCenterConstraintsWithMetrics:(id)arg1 verticalLayout:(_Bool)arg2;
- (void)accessibilityLongPressChanged:(id)arg1;

@end
