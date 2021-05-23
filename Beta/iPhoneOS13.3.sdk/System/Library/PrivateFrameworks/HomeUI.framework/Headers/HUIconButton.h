/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIControl.h>

@class HUIconView;

@protocol HFIconDescriptor;

@interface HUIconButton : UIControl

{
    HUIconView *_iconView;
}

@property (retain, nonatomic) HUIconView *iconView;
@property (nonatomic, readonly) id <HFIconDescriptor> iconDescriptor;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)setSelected:(_Bool)arg1;
- (void)updateWithIconDescriptor:(id)arg1 animated:(_Bool)arg2;

@end
