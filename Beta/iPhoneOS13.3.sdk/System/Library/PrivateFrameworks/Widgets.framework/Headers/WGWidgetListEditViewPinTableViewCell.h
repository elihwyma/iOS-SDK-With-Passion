/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <UITableViewCell.h>

@class UISwitch, WGWidgetPinningTeachingAnimationView;

@interface WGWidgetListEditViewPinTableViewCell : UITableViewCell

{
    WGWidgetPinningTeachingAnimationView *_pinImageView;
    UISwitch *_pinSwitch;
}

@property (nonatomic, readonly) UISwitch *pinSwitch;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)startAnimating;
- (void)stopAnimating;

@end
