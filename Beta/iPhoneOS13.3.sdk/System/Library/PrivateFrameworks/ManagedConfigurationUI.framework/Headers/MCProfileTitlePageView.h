/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfigurationUI/MCSectionBasedTableView.h>

@class UIButton, UIView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageView : MCSectionBasedTableView

{
    UIView *_topBarView;
    UIView *_bottomBarView;
    UIButton *_installButton;
    UIButton *_infoButton;
    UIButton *_cancelButton;
}

@property (nonatomic, readonly) UIView *topBarView;
@property (nonatomic, readonly) UIView *bottomBarView;
@property (nonatomic, readonly) UIButton *installButton;
@property (nonatomic, readonly) UIButton *infoButton;
@property (nonatomic, readonly) UIButton *cancelButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_createInstallButton;
- (id)_createBottomView;
- (id)_createCancelButton;
- (id)_createInfoButton;
- (void)showBottomView:(_Bool)arg1 animated:(_Bool)arg2;

@end
