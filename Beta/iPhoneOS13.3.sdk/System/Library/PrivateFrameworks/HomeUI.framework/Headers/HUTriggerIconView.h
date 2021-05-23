/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUIconView, NSArray;

@interface HUTriggerIconView : UIView

{
    HUIconView *_iconView;
    NSArray *_constraints;
}

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) NSArray *constraints;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithIconDescriptor:(id)arg1;

@end
