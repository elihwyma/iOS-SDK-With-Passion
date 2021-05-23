/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@interface SBIconContentView : UIView

{
    long long _orientation;
    UIView *_contentView;
}

@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIView *contentView;

- (void)layoutSubviews;
- (id)initWithOrientation:(long long)arg1;

@end
