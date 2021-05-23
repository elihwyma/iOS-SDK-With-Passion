/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <UIView.h>

@class UIImageView, WGCheckView;

@interface WGCircleCheckView : UIView

{
    UIImageView *_circleView;
    WGCheckView *_checkView;
}

@property (retain, nonatomic, getter=_circleView) UIImageView *circleView;
@property (retain, nonatomic, getter=_checkView) WGCheckView *checkView;
@property (nonatomic, getter=isChecked) _Bool checked;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)_isFrozen;
- (void)_setFrozen:(_Bool)arg1;
- (void)_setChecked:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_configureCircleViewIfNecessary;
- (void)_configureCheckViewIfNecessary;

@end
