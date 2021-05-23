/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIImageView.h>

@interface NCKeyLineView : UIImageView

{
    double _cornerRadius;
    double _lineWidth;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) double lineWidth;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)_cachedKeyLineImageWithCornerRadius:(double)arg1 lineWidth:(double)arg2;
- (void)setKeyLineViewAlphaForProgress:(double)arg1;

@end
