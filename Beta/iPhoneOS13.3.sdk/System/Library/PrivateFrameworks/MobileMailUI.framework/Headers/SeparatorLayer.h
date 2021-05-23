/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface SeparatorLayer : UIView

{
    UIColor *_tintColor;
    unsigned long long _axis;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) unsigned long long axis;

+ (double)separatorHeight;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
