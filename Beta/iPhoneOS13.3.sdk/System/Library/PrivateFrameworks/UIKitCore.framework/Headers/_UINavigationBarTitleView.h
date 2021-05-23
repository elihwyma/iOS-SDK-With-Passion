/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UINavigationItem, _UINavigationBarTitleViewOverlayRects;

@protocol _UINavigationBarTitleViewDataSource;

@interface _UINavigationBarTitleView : UIView

{
    NSLayoutConstraint *_heightConstraint;
    _UINavigationBarTitleViewOverlayRects *_overlayRects;
    id <_UINavigationBarTitleViewDataSource> _dataSource;
    _Bool _underlayBarContent;
    _Bool _hideBackButton;
    _Bool _hideLeadingBarButtons;
    _Bool _hideStandardTitle;
    _Bool _hideTrailingBarButtons;
    UINavigationItem *_navigationItem;
    long long _titleLocation;
    double _height;
    double _backButtonMaximumWidth;
    double _backButtonAlpha;
    double _leadingBarAlpha;
    double _trailingBarAlpha;
    long long _preferredContentAlignment;
}

@property (weak, nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, readonly) long long titleLocation;
@property (nonatomic) _Bool underlayBarContent;
@property (nonatomic) double height;
@property (nonatomic) double backButtonMaximumWidth;
@property (nonatomic) _Bool hideBackButton;
@property (nonatomic) _Bool hideLeadingBarButtons;
@property (nonatomic) _Bool hideStandardTitle;
@property (nonatomic) _Bool hideTrailingBarButtons;
@property (nonatomic) double backButtonAlpha;
@property (nonatomic) double leadingBarAlpha;
@property (nonatomic) double trailingBarAlpha;
@property (copy, nonatomic, readonly) NSArray *contentOverlayRects;
@property (nonatomic, readonly) double largeTitleHeight;
@property (nonatomic, readonly) CDStruct_c3b9c2ee largeTitleHeightRange;
@property (nonatomic, readonly) double contentBaselineOffsetFromTop;
@property (nonatomic, readonly) double contentBaseHeight;
@property (nonatomic) long long preferredContentAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool _underlayNavigationBarContent;
@property (nonatomic, readonly) double _navigationBarContentHeight;
@property (nonatomic, readonly) double _navigationBarBackButtonMaximumWidth;
@property (nonatomic, readonly) _Bool _hideNavigationBarBackButton;
@property (nonatomic, readonly) _Bool _hideNavigationBarLeadingBarButtons;
@property (nonatomic, readonly) _Bool _hideNavigationBarStandardTitle;
@property (nonatomic, readonly) _Bool _hideNavigationBarTrailingBarButtons;
@property (nonatomic, readonly) double _navigationBarBackButtonAlpha;
@property (nonatomic, readonly) double _navigationBarLeadingBarButtonsAlpha;
@property (nonatomic, readonly) double _navigationBarTrailingBarButtonsAlpha;
@property (nonatomic, readonly) long long _preferredAlignment;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3;
- (long long)_preferredContentSizeForSize:(long long)arg1;
- (void)_contentDidChange;
- (_Bool)_wantsTwoPartTransition;
- (void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)_navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2;
- (long long)preferredContentSizeForSize:(long long)arg1;
- (void)contentDidChange;
- (void)transitionWillBegin:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)performTransition:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)transitionCompleted:(long long)arg1 willBeDisplayed:(_Bool)arg2;
- (void)navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2;
- (void)preferredContentSizeDidChange;

@end
