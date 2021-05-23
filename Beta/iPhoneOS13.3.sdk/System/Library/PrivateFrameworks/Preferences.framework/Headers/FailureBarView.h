/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIImageView.h>

@class UILabel;

@interface FailureBarView : UIImageView

{
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;

- (void)setFailureCount:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
